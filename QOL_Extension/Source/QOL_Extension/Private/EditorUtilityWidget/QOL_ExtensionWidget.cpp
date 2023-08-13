// Copyright 2023, Kenneth Koo, All rights reserved


#include "EditorUtilityWidget/QOL_ExtensionWidget.h"

#include "AssetToolsModule.h"
#include "QOL_Extension/Public/DebugHeader.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "EditorUtilitySubsystem.h"
#include "Editor/EditorEngine.h"
#include "QOL_Extension.h"
#include "Selection.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Math/UnrealMathUtility.h"
#include "DynamicRHI.h"
#include "EditorAssetLibrary.h"
#include "EditorUtilityLibrary.h"
#include "Animation/SkeletalMeshActor.h"
#include "Engine/DirectionalLight.h"
#include "Engine/Engine.h"
#include "Engine/PointLight.h"
#include "Engine/RectLight.h"
#include "Engine/SkyLight.h"
#include "Engine/SpotLight.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/SkeletalMesh.h"
#include "GeometryCacheActor.h"
#include "Landscape.h"
#include "LandscapeMeshProxyActor.h"
#include "LandscapeSplineMeshesActor.h"
#include "LandscapeStreamingProxy.h"
#include "LevelSequenceActor.h"
#include "Camera/CameraActor.h"
#include "Camera/CameraShakeSourceActor.h"
#include "CinematicCamera/Public/CineCameraActor.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "Engine/BoxReflectionCapture.h"
#include "Engine/ExponentialHeightFog.h"
#include "Engine/PlanarReflection.h"
#include "Engine/PlaneReflectionCapture.h"
#include "Engine/PostProcessVolume.h"
#include "Engine/ReflectionCapture.h"
#include "Engine/SphereReflectionCapture.h"
#include "GameFramework/Character.h"
#include "NiagaraActor.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/DecalActor.h"
#include "GameFramework/WorldSettings.h"
#include "LevelInstance/LevelInstanceActor.h"
#include "PackedLevelActor/PackedLevelActor.h"
#include "WorldPartition/WorldPartitionMiniMap.h"
#include "WorldPartition/WorldPartitionReplay.h"
#include "WorldPartition/DataLayer/WorldDataLayers.h"
#include "WorldPartition/HLOD/HLODActor.h"
#include "LandscapeProxy.h"
#include "Subsystems/EditorActorSubsystem.h"
#include "ObjectTools.h"

// **StartWidget() to be executed when Toolbar button is clicked in QOL_Extension.cpp
void UQOL_ExtensionWidget::StartWidget()
{
	FString AssetPath = TEXT("/Script/Blutility.EditorUtilityWidgetBlueprint'/QOL_Extension/EditorWidgetUtilities/QOL_Extension.QOL_Extension'");
	UEditorUtilityWidgetBlueprint* EditorWidgetBlueprint = LoadObject<UEditorUtilityWidgetBlueprint>(nullptr, *AssetPath);

	if (EditorWidgetBlueprint)
	{
		UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
		EditorUtilitySubsystem->SpawnAndRegisterTab(EditorWidgetBlueprint);

		DebugHeader::ShowNotifyInfo(TEXT("QOL Extension Tab is launched"));
	}
	
}
// **OnDestructWidget() to be executed when OnDestruct Event(Widget closed) for cleanups
void UQOL_ExtensionWidget::OnDestructWidget()
{
	USelection::SelectObjectEvent.RemoveAll(this);
	DebugHeader::ShowNotifyInfo(TEXT("Closing and cleaning up QOL Extension traces"));
}

//**Init Editor Actor Subsystem
bool UQOL_ExtensionWidget::GetEditorActorSubsystem()
{
	if(!WeakEditorEditorActorSubsystem.IsValid())
	{
		WeakEditorEditorActorSubsystem = GEditor->GetEditorSubsystem<UEditorActorSubsystem>();
	}
	return WeakEditorEditorActorSubsystem.IsValid();
}

//** Implementation of USelection Delegates
#pragma region Selection Change Delegates
void UQOL_ExtensionWidget::SetEnableSelectionChangedEvent(bool InEnabled)
{
	// bind the delegate
	if (InEnabled)
	{
		if (!SelectionChangedEventHandle.IsValid()) // only if not bound
			{
			SelectionChangedEventHandle = USelection::SelectObjectEvent.AddUObject(
				this, &UQOL_ExtensionWidget::OnSelectionChanged);
			}
	}
	// if false, unbind the delegate
	else
	{
		if (SelectionChangedEventHandle.IsValid()) // only if bound
			{
			USelection::SelectObjectEvent.Remove(SelectionChangedEventHandle);
			SelectionChangedEventHandle.Reset();
			}
	}
	
}

void UQOL_ExtensionWidget::OnSelectionChanged(UObject* InSelection)
{
	if(InSelection)
	{
		OnEditorSelectionChanged();
	}
}

#pragma endregion 

//** Asset Details Features
#pragma region Asset Details

//Get Selected Actors
void UQOL_ExtensionWidget::ExecuteSelectedActors(TArray<AActor*>& OutSelectedActors)
{
	// Clear the existing UV channel names.
	UVChannelNames.Empty();
	UVChannelCounts.Empty();
	OutSelectedActors.Empty();
	
	FQOL_ExtensionModule ExtensionModule;
	TArray<AActor*> SelectedActors = ExtensionModule.GetSelectedActors();

	if(SelectedActors.Num() > 0)
	{
		OutSelectedActors = SelectedActors;
		LastSelectedActorName = FText::FromString(SelectedActors.Last()->GetActorLabel());

		GetUVChannels(SelectedActors);
	}
}

//Get TriangleCount	
void UQOL_ExtensionWidget::GetTriangleCountFromStaticMeshComponent(TArray<AActor*> Actors, int32& StaticMeshCount, int32& SkeletalMeshCount, int32& PolySumOfSelectedActors)
{
	if(Actors.Num()==0)
	{
		PolySumOfSelectedActors = 0;
	}
	
	StaticMeshCount = 0;
	SkeletalMeshCount = 0;
	
	for(AActor* Actor : Actors)
	{
		if (!Actor || !Actor->IsValidLowLevel())
		{
			// Handle invalid actor
			continue;
		}
		
		UStaticMeshComponent* StaticMeshComponent = Actor->FindComponentByClass<UStaticMeshComponent>();
		USkeletalMeshComponent* SkeletalMeshComponent = Actor->FindComponentByClass<USkeletalMeshComponent>();
		
		if (StaticMeshComponent)
		{
			UStaticMesh* StaticMesh = StaticMeshComponent->GetStaticMesh();
			if (StaticMesh)
			{
				int32 LODIndex = StaticMesh->GetMinLODIdx();
				StaticMeshCount += StaticMesh->GetNumTriangles(LODIndex);
			}
		}
	
		if (SkeletalMeshComponent)
		{
			USkeletalMesh* SkeletalMesh = SkeletalMeshComponent->GetSkeletalMeshAsset();
			if(SkeletalMesh)
			{
				if(SkeletalMesh->GetResourceForRendering())
				{
					FSkeletalMeshLODRenderData& RenderData = SkeletalMesh->GetResourceForRendering()->LODRenderData[0];
					SkeletalMeshCount += RenderData.GetTotalFaces();
				}
			}
		}
	}
	PolySumOfSelectedActors = SkeletalMeshCount + StaticMeshCount;
}

#pragma endregion 

#pragma region UV Texture Creation
//** Texture Creation 
void UQOL_ExtensionWidget::Swap(int32& a, int32& b)
{
	int32 temp = a;
	a = b;
	b = temp;
}

void UQOL_ExtensionWidget::DrawLine(FColor* MipData, int32 SizeX, int32 SizeY, FVector2f Start, FVector2f End)
{
	int32 x0 = FMath::RoundToInt(Start.X * (SizeX - 1));
	int32 y0 = FMath::RoundToInt(Start.Y * (SizeY - 1));
	int32 x1 = FMath::RoundToInt(End.X * (SizeX - 1));
	int32 y1 = FMath::RoundToInt(End.Y * (SizeY - 1));

	bool steep = FMath::Abs(y1 - y0) > FMath::Abs(x1 - x0);

	if (steep)
	{
		Swap(x0, y0);
		Swap(x1, y1);
	}

	if (x0 > x1)
	{
		Swap(x0, x1);
		Swap(y0, y1);
	}

	int32 deltaX = x1 - x0;
	int32 deltaY = FMath::Abs(y1 - y0);
	int32 error = 0;
	int32 yStep;
	int32 y = y0;

	if (y0 < y1)
	{
		yStep = 1;
	}
	else
	{
		yStep = -1;
	}

	for (int32 x = x0; x <= x1; ++x)
	{
		if (steep)
		{
			if (y >= 0 && y < SizeX && x >= 0 && x < SizeY) // Add clamping to avoid accessing outside of array bounds
				{
				MipData[x + y * SizeX] = FColor::Red;
				}
		}
		else
		{
			if (x >= 0 && x < SizeX && y >= 0 && y < SizeY) // Add clamping to avoid accessing outside of array bounds
				{
				MipData[y + x * SizeX] = FColor::Red;
				}
		}

		error += deltaY;

		if ((error << 1) >= deltaX)
		{
			y += yStep;
			error -= deltaX;
		}
	}
}

void UQOL_ExtensionWidget::UVTextureCreation(AActor* SelectedActor)
{
	UVTexture = nullptr;
	
	// Begin Texture2D Creation
	int32 SizeX = 512;
	int32 SizeY = 512;

	UTexture2D* CreatedTexture = UTexture2D::CreateTransient(SizeX, SizeY, EPixelFormat::PF_B8G8R8A8);
	// Ensure the data is flushed to the GPU.
	CreatedTexture->GetPlatformData()->SetNumSlices(1);
	CreatedTexture->NeverStream = true;

	FTexture2DMipMap& Mip = CreatedTexture->GetPlatformData()->Mips[0];
	void* Data = Mip.BulkData.Lock(LOCK_READ_WRITE);
	FColor FillColor = FColor::White;
	// Fill the texture with white color to verify that the texture creation works properly.

	uint32 UVSize = SizeX * SizeY;

	// Fill texture with FillColor
	for (uint32 i = 0; i < UVSize; ++i)
	{
		((FColor*)Data)[i] = FillColor;
	}
	Mip.BulkData.Unlock();
	CreatedTexture->UpdateResource();

	if (SelectedActor)
	{
		UStaticMeshComponent* MeshComponent = SelectedActor->FindComponentByClass<UStaticMeshComponent>();
		USkeletalMeshComponent* SkeletalMeshComponent = SelectedActor->FindComponentByClass<USkeletalMeshComponent>();
		if (MeshComponent)
		{
			UStaticMesh* Mesh = MeshComponent->GetStaticMesh();
			if (Mesh)
			{
				const FStaticMeshLODResources& LODModel = Mesh->GetRenderData()->LODResources[0];
				FIndexArrayView Indices = LODModel.IndexBuffer.GetArrayView(); // Get indices here
				//const int32 UVChannel = 1; // Use UV channel 0.
				const int32 VertexCount = Mesh->GetNumVertices(0);

				TArray<FVector2f> UVs;

				float MinU = INFINITY;
				float MinV = INFINITY;
				float MaxU = -INFINITY;
				float MaxV = -INFINITY;

				// Retrieve UVs and Find Min and Max UV values
				for (int32 VertexIndex = 0; VertexIndex < VertexCount; ++VertexIndex)
				{
					FVector2f UV = LODModel.VertexBuffers.StaticMeshVertexBuffer.GetVertexUV(VertexIndex, SelectedUVChannel);
					MinU = FMath::Min(MinU, UV.X);
					MinV = FMath::Min(MinV, UV.Y);
					MaxU = FMath::Max(MaxU, UV.X);
					MaxV = FMath::Max(MaxV, UV.Y);
					UVs.Add(UV);
				}

				float URange = MaxU - MinU;
				float VRange = MaxV - MinV;

				// Normalize the UVs
				for (FVector2f& UV : UVs)
				{
					UV.X = (UV.X - MinU) / URange;
					UV.Y = (UV.Y - MinV) / VRange;

					//Unreal's UV Axis Flip
					UV.X = 1.0f - UV.X;
					FVector2f OriginalUV = UV;
					UV.Y = 1.0f - OriginalUV.X;
					UV.X = OriginalUV.Y;
				}

				// Write UV data into Texture
				FColor* MipData = static_cast<FColor*>(CreatedTexture->GetPlatformData()->Mips[0].BulkData.Lock(
					LOCK_READ_WRITE));

				const int32 TriangleCount = Indices.Num() / 3;
				
					for (int32 TriangleIndex = 0; TriangleIndex < TriangleCount; ++TriangleIndex)
					{
						FVector2f UV0 = UVs[Indices[TriangleIndex * 3 + 0]];
						FVector2f UV1 = UVs[Indices[TriangleIndex * 3 + 1]];
						FVector2f UV2 = UVs[Indices[TriangleIndex * 3 + 2]];

						DrawLine(MipData, SizeX, SizeY, UV0, UV1);
						DrawLine(MipData, SizeX, SizeY, UV1, UV2);
						DrawLine(MipData, SizeX, SizeY, UV2, UV0);
					}
				
			}
		}

		if (SkeletalMeshComponent)
		{
			USkeletalMesh* SkeletalMesh = SkeletalMeshComponent->GetSkeletalMeshAsset();
			if (SkeletalMesh)
			{
				const FSkeletalMeshLODRenderData& LODModel = SkeletalMesh->GetResourceForRendering()->LODRenderData[0];
				//const FPositionVertexBuffer& PositionVertexBuffer = LODModel.StaticVertexBuffers.PositionVertexBuffer;
				const FStaticMeshVertexBuffer& VertexBuffer = LODModel.StaticVertexBuffers.StaticMeshVertexBuffer;
				const FRawStaticIndexBuffer16or32Interface* IndexBufferInterface = LODModel.MultiSizeIndexContainer.
					GetIndexBuffer();
				const FRawStaticIndexBuffer16or32<uint16>* IndexBuffer = static_cast<const FRawStaticIndexBuffer16or32<
					uint16>*>(IndexBufferInterface);
				TArray<uint16> Indices;
				if (IndexBufferInterface)
				{
					//const int32 IndexCount = IndexBufferInterface->Num();
					for (int32 i = 0; i < IndexBuffer->Num(); i++)
					{
						Indices.Add(IndexBufferInterface->Get(i));
					}
					const int32 VertexCount = VertexBuffer.GetNumVertices();

					// Move UVs array outside the loop
					TArray<FVector2f> UVs;
					float MinU = INFINITY;
					float MinV = INFINITY;
					float MaxU = -INFINITY;
					float MaxV = -INFINITY;

					for (int32 Index = 0; Index < VertexCount; Index++)
					{
						// Get the UVs for the first UV channel
						// Retrieve UVs and Find Min and Max UV values
						FVector2f UV = VertexBuffer.GetVertexUV(Index, SelectedUVChannel);
						MinU = FMath::Min(MinU, UV.X);
						MinV = FMath::Min(MinV, UV.Y);
						MaxU = FMath::Max(MaxU, UV.X);
						MaxV = FMath::Max(MaxV, UV.Y);
						UVs.Add(UV);
					}

					float URange = MaxU - MinU;
					float VRange = MaxV - MinV;

					// Normalize the UVs
					for (FVector2f& UV : UVs)
					{
						UV.X = (UV.X - MinU) / URange;
						UV.Y = (UV.Y - MinV) / VRange;
						
						//Unreal's UV Axis Flip
						UV.X = 1.0f - UV.X;
						FVector2f OriginalUV = UV;
						UV.Y = 1.0f - OriginalUV.X;
						UV.X = OriginalUV.Y;
					}
					
					
					
					// Write UV data into Texture
					FColor* MipData = static_cast<FColor*>(CreatedTexture->GetPlatformData()->Mips[0].BulkData.Lock(
						LOCK_READ_WRITE));

					const int32 TriangleCount = Indices.Num() / 3;
					{
						for (int32 TriangleIndex = 0; TriangleIndex < TriangleCount; ++TriangleIndex)
						{
							FVector2f UV0 = UVs[Indices[TriangleIndex * 3 + 0]];
							FVector2f UV1 = UVs[Indices[TriangleIndex * 3 + 1]];
							FVector2f UV2 = UVs[Indices[TriangleIndex * 3 + 2]];

							DrawLine(MipData, SizeX, SizeY, UV0, UV1);
							DrawLine(MipData, SizeX, SizeY, UV1, UV2);
							DrawLine(MipData, SizeX, SizeY, UV2, UV0);
						}
					}
						
					
				}
			}
		}
	}
    if (SelectedActor->FindComponentByClass<UStaticMeshComponent>() || SelectedActor->FindComponentByClass<USkeletalMeshComponent>())
	{
		CreatedTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
		CreatedTexture->UpdateResource();
		UVTexture = CreatedTexture;
	}

	else
	{
		UVTexture = CreatedTexture;
	}
	
}

void UQOL_ExtensionWidget::GetUVChannels(TArray<AActor*>&SelectedActors)
{
	{
		AActor* LastSelectedActor = SelectedActors.Last();

		if (LastSelectedActor)
		{
			UStaticMeshComponent* MeshComponent = LastSelectedActor->FindComponentByClass<UStaticMeshComponent>();
			if (MeshComponent)
			{
				UStaticMesh* StaticMesh = MeshComponent->GetStaticMesh();
				if (StaticMesh)
				{
					FStaticMeshLODResources& LODModel = StaticMesh->GetRenderData()->LODResources[0];
					int32 UVChannelCount = LODModel.GetNumTexCoords();

					// Add the UV channel count to the array.
					UVChannelCounts.Add(UVChannelCount);

					// Create a new name for each UV channel.
					for (int32 i = 0; i < UVChannelCount; ++i)
					{
						UVChannelNames.Add(FString::Printf(TEXT("UV Channel %d"), i));
					}
				}
			}
			USkeletalMeshComponent* SkeletalComponent = LastSelectedActor->FindComponentByClass<
				USkeletalMeshComponent>();
			if (SkeletalComponent)
			{
				USkeletalMesh* SkeletalMesh = SkeletalComponent->GetSkeletalMeshAsset();
				if (SkeletalMesh)
				{
					const FSkeletalMeshLODRenderData& LODModel = SkeletalMesh->GetResourceForRendering()->LODRenderData[
						0];
					int32 UVChannelCount = LODModel.GetNumTexCoords();

					// Add the UV channel count to the array.
					UVChannelCounts.Add(UVChannelCount);

					// Create a new name for each UV channel.
					for (int32 i = 0; i < UVChannelCount; ++i)
					{
						UVChannelNames.Add(FString::Printf(TEXT("UV Channel %d"), i));
					}
				}
			}
		}
	}
}

#pragma endregion

#pragma region GPU Access

void UQOL_ExtensionWidget::GetRHIMemoryStat(int64& MemoryStats, int64&DedicatedVideoMemorySize, int64&TexturePool)
{
	if (UVTexture)
	{
		UVTexture = nullptr;
		GEngine->ForceGarbageCollection(true);
	}
	
	FTextureMemoryStats Stats;
	GDynamicRHI->RHIGetTextureMemoryStats(Stats);
	// Store the used GPU memory in MB
	MemoryStats = Stats.AllocatedMemorySize / 1024.0f / 1024.0f;
	DedicatedVideoMemorySize = Stats.DedicatedVideoMemory / 1024.0f / 1024.0f;
	TexturePool  = Stats.TexturePoolSize / 1024.0f / 1024.0f;
	//UE_LOG(LogTemp, Warning, TEXT("Used GPU memory: %f MB"), usedGpuMemoryMB);
}

void UQOL_ExtensionWidget::OpenGPUVisualiser()
{
	if (GIsEditor)
	{
		GEngine->Exec(nullptr, TEXT("ProfileGPU"));
		DebugHeader::ShowNotifyInfo(TEXT("Launching GPU Visualiser Tab"));
	}
}

#pragma endregion

#pragma region Cleanup Functions

void UQOL_ExtensionWidget::FixUpRedirectors()
{
	TArray<UObjectRedirector*> RedirectorsToFixArray;

	FAssetRegistryModule& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	FARFilter ARFilter;
	ARFilter.bRecursiveClasses = true;
	ARFilter.PackagePaths.Emplace("/Game");
	ARFilter.ClassPaths.Emplace("ObjectRedirector");

	TArray<FAssetData> OutRedirectors;
	AssetRegistry.Get().GetAssets(ARFilter, OutRedirectors);

	for(const FAssetData& Redirectors : OutRedirectors)
	{
		if(UObjectRedirector* RedirectorToFix =  Cast<UObjectRedirector>(Redirectors.GetAsset()))
		{
			RedirectorsToFixArray.Add(RedirectorToFix);
		}
	}

	FAssetToolsModule& AssetTools =FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
	AssetTools.Get().FixupReferencers(RedirectorsToFixArray);
}

void UQOL_ExtensionWidget::OrganizeOutliner(const TArray<AActor*> AllActorsInLevel)
{
	// Starts Transaction 01
	if (GEditor)
	{
		GEditor->BeginTransaction(FText::FromString("Organize Actors in Outliner"));
		if (AllActorsInLevel.Num() > 0)
		{
			for (AActor* Actor : AllActorsInLevel)
			{
				if (Actor)
				{
					FString FolderName = GetActorFolderCategory(Actor);

					if (!FolderName.IsEmpty())
					{
						//Transaction for Actors
						Actor->Modify();

						Actor->SetFolderPath(FName(*FolderName));
					}
				}
			}
		}
		// Ends Transaction 01
		GEditor->EndTransaction();
		DebugHeader::ShowNotifyInfo(TEXT("Organised actors in the outliner"));
	}
}

FString UQOL_ExtensionWidget::GetActorFolderCategory(AActor* Actor)
{
	// If the actor is a light, categorize it into the "Lights" folder
	if (Actor->IsA(ADirectionalLight::StaticClass()) ||
		Actor->IsA(ASpotLight::StaticClass()) ||
		Actor->IsA(APointLight::StaticClass()) ||
		Actor->IsA(ARectLight::StaticClass()) ||
		Actor->IsA(ASkyLight::StaticClass()))
	{
		return TEXT("Lights");
	}
	
	// If the actor is a mesh
	if (Actor->IsA(AStaticMeshActor::StaticClass()) ||
		Actor->IsA(ASkeletalMeshActor::StaticClass()) ||
		Actor->IsA(AGeometryCacheActor::StaticClass()))
	{
		return TEXT("Meshes");
	}

	// If the actor is a PostProcess item
	if (Actor->IsA(APostProcessVolume::StaticClass()) ||
		Actor->IsA(AExponentialHeightFog::StaticClass()) ||
		Actor->IsA(ASkyAtmosphere::StaticClass()) ||
		Actor->IsA(AReflectionCapture::StaticClass()) ||
		Actor->IsA(APlanarReflection::StaticClass()) ||
		Actor->IsA(ABoxReflectionCapture::StaticClass()) ||
		Actor->IsA(APlaneReflectionCapture::StaticClass()) ||
		Actor->IsA(ASphereReflectionCapture::StaticClass()) ||
		Actor->IsA(AVolumetricCloud::StaticClass()))
	{
		return TEXT("PostProcess");
	}
	
	// If the actor is a Camera
	if (Actor->IsA(ACameraActor::StaticClass()) ||
		Actor->IsA(ACineCameraActor::StaticClass()) ||
		Actor->IsA(ACameraShakeSourceActor::StaticClass()))
	{
		return TEXT("Cameras");
	}

	// If the actor is a LevelSequence
	if (Actor->IsA(ALevelSequenceActor::StaticClass()))
	
	{
		return TEXT("Level Sequences");
	}

	// If the actor is a Particle
	if (Actor->IsA(ANiagaraActor::StaticClass()))
	{
		return TEXT("Particles");
	}

	// If the actor is a Decal
	if (Actor->IsA(ADecalActor::StaticClass()))
	{
		return TEXT("Decals");
	}
	
	// If the actor is a LevelInstance
	if (Actor->IsA(ALevelInstance::StaticClass()) ||
		Actor->IsA(APackedLevelActor::StaticClass()))
	{
		return TEXT("Level Instances");
	}
	
	// If the actor is a HLOD
	if (Actor->IsA(AWorldPartitionHLOD::StaticClass()) ||
		Actor->IsA(AWorldPartitionMiniMap::StaticClass()) ||
		Actor->IsA(AWorldDataLayers::StaticClass()) ||
		Actor->IsA(AWorldPartitionReplay::StaticClass()) ||
		Actor->IsA(AWorldSettings::StaticClass()))
		
	{
		return TEXT("World Partition");
	}

	// If the actor is a Landscape
	if (Actor->IsA(ALandscape::StaticClass()) ||
		Actor->IsA(ALandscapeStreamingProxy::StaticClass()) ||
		Actor->IsA(ALandscapeMeshProxyActor::StaticClass()) ||
		Actor->IsA(ALandscapeProxy::StaticClass()) ||
		Actor->IsA(ALandscapeSplineMeshesActor::StaticClass()))
		
	{
		return TEXT("Landscape");
	}

	// If the actor is a Blueprint
	if (Actor->IsA(AActor::StaticClass()) ||
		Actor->IsA(APawn::StaticClass()) ||
		Actor->IsA(ACharacter::StaticClass()))
	{
		return TEXT("Blueprints");
	}
	
	return TEXT("Miscellaneous");
	
}

void UQOL_ExtensionWidget::GetFoldersWithAssets(TSet<FString>& OutFolders)
{
		FString RootFolder = "/Game";
		TArray<FString> AllAssets = UEditorAssetLibrary::ListAssets(RootFolder, true);
    
	for (const FString& AssetPath : AllAssets)
	{
		FString AssetFolder, TempFilename, TempExtension;
		FPaths::Split(AssetPath, AssetFolder, TempFilename, TempExtension);
		while (!AssetFolder.Equals(RootFolder))
		{
			OutFolders.Add(AssetFolder);
			AssetFolder = FPaths::GetPath(AssetFolder); // Move one directory up
		}
	}
}

void UQOL_ExtensionWidget::CleanUnusedFolders()
{
	FixUpRedirectors();
	EAppReturnType::Type InitiateResult =
		DebugHeader::ShowMsgDialog(EAppMsgType::OkCancel, TEXT("The system will go through all of the empty folders that exist within the Content folder.\nProceeding will initiate the clean-up process.\nSelecting 'Cancel' will terminate the process"), false);
	
	if (InitiateResult == EAppReturnType::Cancel) return;
	
	//else start function
	TSet<FString> FolderWithAssets;
	GetFoldersWithAssets(FolderWithAssets);
	FString RootFolder = "/Game";

	TArray<FString> AllSubFolders;
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<
		FAssetRegistryModule>("AssetRegistry");
	AssetRegistryModule.Get().GetSubPaths(RootFolder, AllSubFolders, true);

	for (const FString& Folder : AllSubFolders)
	{
		if (Folder.Contains(TEXT("Developers")) ||
			Folder.Contains(TEXT("Collections")) ||
			Folder.Contains(TEXT("__ExternalActors__")) ||
			Folder.Contains(TEXT("__ExternalObjects__")) ||
			Folder.Contains(TEXT("Megascans")) ||
			Folder.Contains(TEXT("MSPresets")))
		{
			continue;
		}

		if (!FolderWithAssets.Contains(Folder))
		{
			//Delete Empty Folders
			EAppReturnType::Type ConfirmResult =
				DebugHeader::ShowMsgDialog(EAppMsgType::YesNoCancel,
				                           TEXT("Empty Folders Found: \n") + Folder + TEXT(
					                           "\nWould You Like To Delete This Folder?"), false);

			if (ConfirmResult == EAppReturnType::Cancel) return;
			if (ConfirmResult == EAppReturnType::No) continue;
			UEditorAssetLibrary::DeleteDirectory(Folder);
			//
		}
	}
}

void UQOL_ExtensionWidget::ClearUnusedAssetsInProject()
{
	EAppReturnType::Type PreConfirmResult = DebugHeader::ShowMsgDialog(EAppMsgType::OkCancel,
		TEXT("Ensure that you have added the names of the folder you would want to exclude in the 'Excluded Folders' section. The system will be analysing the 'Content' folder for unused assets only, it will not delete assets outside of the 'Content' folder.\n\nSelecting 'Ok' will proceed with executing the process, depending on the amount of assets in the content it will take several seconds to minutes.\n\nSelecting 'Cancel' will cancel and close the operation."));
	if (PreConfirmResult == EAppReturnType::Cancel) return;
	
	FixUpRedirectors();
	
	// Add default folders to ExcludedFolders if they don't exist
	if (!ExcludedFolders.Contains(TEXT("Developers"))) ExcludedFolders.Add(TEXT("Developers"));
	if (!ExcludedFolders.Contains(TEXT("Collections"))) ExcludedFolders.Add(TEXT("Collections"));
	if (!ExcludedFolders.Contains(TEXT("__ExternalActors__"))) ExcludedFolders.Add(TEXT("__ExternalActors__"));
	if (!ExcludedFolders.Contains(TEXT("__ExternalObjects__"))) ExcludedFolders.Add(TEXT("__ExternalObjects__"));

	// Get All Assets
	FAssetRegistryModule& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AllAssets;
	AssetRegistry.Get().GetAllAssets(AllAssets, true);
	uint32 Counter = 0;
	TArray<UObject*> UnusedAssets;

	for (const FAssetData& AssetData : AllAssets)
	{
		FString AssetPathName = AssetData.GetSoftObjectPath().ToString();

		if(!AssetPathName.StartsWith(TEXT("/Game/"))) continue;
		
		// Exclusion Of Folders
		bool bExclude = false;
		for (const FString& Folder : ExcludedFolders)
		{
			if (AssetPathName.Contains(Folder))
			{
				bExclude = true;
				break;
			}
		}
		if (bExclude) continue;

		if (!UEditorAssetLibrary::DoesAssetExist(AssetPathName))
		{
			continue;
		}

		// Add Assets which do not have a reference
		TArray<FString> AssetReferences = UEditorAssetLibrary::FindPackageReferencersForAsset(AssetPathName);
		if (AssetReferences.Num() == 0)
		{
			UnusedAssets.Add(AssetData.GetAsset());
		}
	}

	if (UnusedAssets.Num() > 0)
	{
		TArray<FString> UnusedAssetNamesArray;
		UnusedAssetNamesArray.Empty();
		for (UObject* UnusedAsset : UnusedAssets)
		{
			FString UnusedAssetNames = UnusedAsset->GetFName().ToString();
			UnusedAssetNamesArray.Add(UnusedAssetNames);
		}

		// Concatenate the unused assets names
		FString AllUnusedAssetNames;
		for (const FString& UnusedAssetName : UnusedAssetNamesArray)
		{
			AllUnusedAssetNames += UnusedAssetName + TEXT("\n");
			Counter++;
		}

		EAppReturnType::Type ConfirmResult =
			DebugHeader::ShowMsgDialog(EAppMsgType::OkCancel,
									   TEXT("Empty Assets Found: \n") + AllUnusedAssetNames + TEXT("Would You Like To Delete These Assets?"),
									   false);

		if (ConfirmResult == EAppReturnType::Cancel)
		{
			if(ExcludedFolders.Num()>0)
			{
				ExcludedFolders.Remove(TEXT("Developers"));
				ExcludedFolders.Remove(TEXT("Collections"));
				ExcludedFolders.Remove(TEXT("__ExternalActors__"));
				ExcludedFolders.Remove(TEXT("__ExternalObjects__"));
			}
			return;
		}
		ObjectTools::DeleteObjectsUnchecked(UnusedAssets);

		if(ExcludedFolders.Num()>0)
		{
			ExcludedFolders.Remove(TEXT("Developers"));
			ExcludedFolders.Remove(TEXT("Collections"));
			ExcludedFolders.Remove(TEXT("__ExternalActors__"));
			ExcludedFolders.Remove(TEXT("__ExternalObjects__"));
		}
		
		
		DebugHeader::ShowNotifyInfo(FString::FromInt(Counter) + TEXT(" assets have been successfully deleted"));
	}
	else
	{
		if(ExcludedFolders.Num()>0)
		{
			ExcludedFolders.Remove(TEXT("Developers"));
			ExcludedFolders.Remove(TEXT("Collections"));
			ExcludedFolders.Remove(TEXT("__ExternalActors__"));
			ExcludedFolders.Remove(TEXT("__ExternalObjects__"));
		}
		DebugHeader::ShowMsgDialog(EAppMsgType::Ok, TEXT("No unused assets could be found in the Content Browser"));
	}
}

void UQOL_ExtensionWidget::AddPrefixes()
{
	uint32 Counter = 0;
	TArray<UObject*> SelectedObjects = UEditorUtilityLibrary::GetSelectedAssets();
	if(SelectedObjects.Num()>0)
	{
		GEditor->BeginTransaction(FText::FromString("Prefixes"));
		for(UObject* SelectedObject:SelectedObjects)
		{
			if(!SelectedObject) continue;
			FString* PrefixFound = PrefixMap.Find(SelectedObject->GetClass());

			if(!PrefixFound || PrefixFound->IsEmpty())
			{
				DebugHeader::Print(TEXT("Failed To Find Prefixes For Selected Objects") + SelectedObject->GetClass()->GetName(), FColor::Red);
				continue;
			}

			FString OldName = SelectedObject->GetName();
			if(OldName.StartsWith(*PrefixFound))
			{
				DebugHeader::Print(OldName + TEXT("already have prefix"), FColor::Red);
				continue;
			}

			if(SelectedObject->IsA<UMaterialInstanceConstant>())
			{
				OldName.RemoveFromStart(TEXT("M_"));
				OldName.RemoveFromEnd(TEXT("_Inst"));
			}
			const FString NewNamePrefix = *PrefixFound + OldName;

			UEditorUtilityLibrary::RenameAsset(SelectedObject, NewNamePrefix);
			++Counter;
		}
	}
	
	if(Counter > 0)
	{
		DebugHeader::ShowNotifyInfo(TEXT("Successfully Renamed " + FString::FromInt(Counter) + " assets"));
	}
	GEditor->EndTransaction();
}

#pragma endregion

#pragma region Editor Functions
void UQOL_ExtensionWidget::IsolateSelectedActors(TArray<AActor*> ActorSelected, TArray<AActor*> AllActorsInLevel)
{
	// Collision check
	if (ActorSelected.Num() == 0)
	{
		return;
	}
    
	TSet<AActor*> SelectedActorsSet(ActorSelected);
	TSet<UClass*> ClassesToSkip = 
	{
		ADirectionalLight::StaticClass(),
		APointLight::StaticClass(),
		ARectLight::StaticClass(),
		ASpotLight::StaticClass(),
		ASkyLight::StaticClass(),
		APostProcessVolume::StaticClass()
	};

	for (AActor* Actor : AllActorsInLevel)
	{
		if (!Actor || ClassesToSkip.Contains(Actor->GetClass()))
		{
			continue;  
		}

		// Check if the actor is in the selected set
		if (SelectedActorsSet.Contains(Actor))
		{
			Actor->SetIsTemporarilyHiddenInEditor(false); 
		}
		else
		{
			Actor->SetIsTemporarilyHiddenInEditor(true);
		}    
	}
}

void UQOL_ExtensionWidget::OnActorSelected(UObject* SelectedObject)
{
	if(!GetEditorActorSubsystem()) return;
	
	if(AActor* SelectedActor = Cast<AActor>(SelectedObject))
	{
		if(CheckIsActorSelectionLocked(SelectedActor))
		{
			WeakEditorEditorActorSubsystem->SetActorSelectionState(SelectedActor,false);
		}
	}
}

bool UQOL_ExtensionWidget::CheckIsActorSelectionLocked(AActor* ActorToProcess)
{
	if(!ActorToProcess) return false;

	return ActorToProcess->ActorHasTag(FName("Locked"));
}


void UQOL_ExtensionWidget::GhostMode(TArray<AActor*> ActorSelected, TArray<AActor*> AllActorsInLevel)
{
    if (!GhostMaterial)
    {
        GhostMaterial = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), nullptr, TEXT("MaterialInstanceConstant'/QOL_Extension/QOL_Materials/MI_QOL_GhostMode_Inst.MI_QOL_GhostMode_Inst'")));
        if (!GhostMaterial)
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to load Ghost Material"));
            return;
        }
    }
	
    TSet<AActor*> SelectedActorsSet(ActorSelected);

    if (OriginalMaterialsArray.Num() == 0)
    {
        for (AActor* Actor : AllActorsInLevel)
        {
            if (!Actor || !Actor->IsValidLowLevel())
                continue;

            // Handling multiple mesh types
            TArray<UMeshComponent*> MeshComponents;
            Actor->GetComponents<UMeshComponent>(MeshComponents);
            for (UMeshComponent* MeshComponent : MeshComponents)
            {
                if (!MeshComponent || !MeshComponent->IsValidLowLevel())
                    continue;

                FActorMaterials ActorMatPair;
                ActorMatPair.Actor = Actor;
                
                int32 NumMaterials = MeshComponent->GetNumMaterials();
                for (int32 i = 0; i < NumMaterials; i++)
                {
                    UMaterialInterface* CurrentMaterial = MeshComponent->GetMaterial(i);
                    if (CurrentMaterial && CurrentMaterial->IsValidLowLevel())
                    {
                        ActorMatPair.OriginalMaterials.Add(CurrentMaterial);
                    }
                }

                OriginalMaterialsArray.Add(ActorMatPair);

                if (!SelectedActorsSet.Contains(Actor))
                {
                    for (int32 i = 0; i < NumMaterials; i++)
                    {
                        MeshComponent->SetMaterial(i, GhostMaterial);
                    }
                	
                    if(!Actor->ActorHasTag(FName("Locked")))
                    {
                        Actor->Tags.Add(FName("Locked"));
                    }
                }
            }
        }
    }
    else
    {
        for (FActorMaterials& Entry : OriginalMaterialsArray)
        {
            if (!Entry.Actor || !Entry.Actor->IsValidLowLevel())
                continue;

            TArray<UMeshComponent*> MeshComponents;
            Entry.Actor->GetComponents<UMeshComponent>(MeshComponents);

            for (UMeshComponent* MeshComponent : MeshComponents)
            {
                if (!MeshComponent || !MeshComponent->IsValidLowLevel())
                    continue;

                int32 MaterialIndex = 0;
                for (UMaterialInterface* OriginalMaterial : Entry.OriginalMaterials)
                {
                    if (OriginalMaterial && OriginalMaterial->IsValidLowLevel())
                    {
                        MeshComponent->SetMaterial(MaterialIndex, OriginalMaterial);
                        MaterialIndex++;
                    }
                }
            }

            if (Entry.Actor->ActorHasTag(FName("Locked")))
            {
                Entry.Actor->Tags.Remove(FName("Locked"));
            }
        }

        OriginalMaterialsArray.Empty();
    }
}

#pragma endregion
