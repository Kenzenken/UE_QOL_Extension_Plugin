// Copyright 2023, Kenneth Koo, All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "LevelSequence.h"
#include "NiagaraSystem.h"
#include "Materials/MaterialInstanceConstant.h"
#include "Materials/MaterialInterface.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundCue.h"
#include "NiagaraEmitter.h"
#include "QOL_ExtensionWidget.generated.h"


/**
 * 
 */

USTRUCT(BlueprintType)
struct FActorMaterials
{
	GENERATED_BODY()

	UPROPERTY()
	AActor* Actor;

	UPROPERTY()
	TArray<UMaterialInterface*> OriginalMaterials;
};

UCLASS()
class QOL_EXTENSION_API UQOL_ExtensionWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
	// Start Widget on Toolbar Button Clicked
	static void StartWidget();
	// Clean up function during OnDestruct event to ensure no duplicates of delegates.
	UFUNCTION(BlueprintCallable, Category = "Selection Changed Editor Utility Widget")
	void OnDestructWidget();


#pragma region Asset Details
public:
	// Execute GetSelectedActor() from QOL_Extension.cpp and store/output it in a TArray AActor*
	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void ExecuteSelectedActors(TArray<AActor*>& OutSelectedActors);
	
	//Asset Triangle Count Property and Display in Widget
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly ,Category = "AssetProperties")
	int AssetTriangleCount = 0;

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void GetTriangleCountFromStaticMeshComponent(TArray<AActor*> Actors, int32& StaticMeshCount, int32& SkeletalMeshCount, int32& PolySumOfSelectedActors);

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly ,Category = "AssetProperties")
	FText LastSelectedActorName = FText::FromString(TEXT("SelectedActor"));

	UFUNCTION(CallInEditor,BlueprintCallable,Category = "AssetProperties")
	void AddTagToSelectedActors(FName TagName);

	UFUNCTION(CallInEditor,BlueprintCallable,Category = "AssetProperties")
	void RemoveSelectedActorsTag(FName RemoveTagName);

	UFUNCTION(CallInEditor,BlueprintCallable,Category = "AssetProperties")
	void SelectActorsByTag(FName TagToSelect, TArray<AActor*> AllActors);
	
#pragma endregion

#pragma region GPU Access

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void GetRHIMemoryStat(int64& MemoryStats, int64&DedicatedVideoMemorySize,int64&TexturePool);

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void OpenGPUVisualiser();

	
#pragma endregion
	
#pragma region Texture Creation
	// Bresenham's Line Algorithm
	void DrawLine(FColor* MipData, int32 SizeX, int32 SizeY, FVector2f Start, FVector2f End);
	void Swap(int32& a, int32& b);

	void GetUVChannels(TArray<AActor*>&SelectedActors);
	
	TArray<int32> UVChannelCounts;
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly ,Category = "AssetProperties")
	TArray<FString> UVChannelNames;
	
	UFUNCTION(CallInEditor,BlueprintCallable,Category = "AssetProperties")
	void UVTextureCreation(AActor* SelectedActor);
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly ,Category = "AssetProperties")
	UTexture2D* UVTexture;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite ,Category = "AssetProperties")
	int32 SelectedUVChannel;

#pragma endregion 
	
#pragma region Selection Change Delegates

public:
	
	// Add USelect::SelectObjectEvent Delegate.
	UFUNCTION(BlueprintCallable, Category = "Selection Changed Editor Utility Widget")
	void SetEnableSelectionChangedEvent(bool InEnabled);
	// Custom Event that is bounded as a Delegate.
	UFUNCTION(BlueprintImplementableEvent, CallInEditor, Category = "Selection Changed Editor Utility Widget")
	void OnEditorSelectionChanged();
	
	
private:
	// A delegate called when selection changed in the editor.
	void OnSelectionChanged(UObject* InSelection);
	// a handle for bound delegate
	FDelegateHandle SelectionChangedEventHandle;

#pragma endregion

#pragma region Cleanup Functions
public:
	
	void FixUpRedirectors();
	
	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void OrganizeOutliner(const TArray<AActor*> AllActorsInLevel);

	//Pre-Written folders for actors in categories
	FString GetActorFolderCategory(AActor*Actor);

	//Get all folders in the asset registry from the /game folder
	void GetFoldersWithAssets(TSet<FString>& OutFolders);
	
	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void CleanUnusedFolders();
	
	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void ClearUnusedAssetsInProject();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DeleteUnusedAssets")
	TArray<FString> ExcludedFolders;

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void AddPrefixes();

private:
	TMap<UClass*, FString>PrefixMap =
	{
		{UBlueprint::StaticClass(),TEXT("BP_")},
		{UStaticMesh::StaticClass(),TEXT("SM_")},
		{UMaterial::StaticClass(), TEXT("M_")},
		{UMaterialInstanceConstant::StaticClass(),TEXT("MI_")},
		{UMaterialFunctionInterface::StaticClass(), TEXT("MF_")},
		{UParticleSystem::StaticClass(), TEXT("PS_")},
		{USoundCue::StaticClass(), TEXT("SC_")},
		{USoundWave::StaticClass(), TEXT("SW_")},
		{UTexture::StaticClass(), TEXT("T_")},
		{UTexture2D::StaticClass(), TEXT("T_")},
		{UUserWidget::StaticClass(), TEXT("WBP_")},
		{USkeletalMeshComponent::StaticClass(), TEXT("SKC_")},
		{USkeleton::StaticClass(), TEXT("SKL_")},
		{USkeletalMesh::StaticClass(), TEXT("SK_")},
		{UNiagaraSystem::StaticClass(), TEXT("NS_")},
		{ULevelSequence::StaticClass(), TEXT("SQ_")},
{ULevel::StaticClass(), TEXT("LV_")},
		{UNiagaraEmitter::StaticClass(), TEXT("NE_")}
	};

#pragma endregion
	
#pragma region Editor Functions
public:
	TWeakObjectPtr<class UEditorActorSubsystem> WeakEditorEditorActorSubsystem;
	bool GetEditorActorSubsystem();

	void OnActorSelected(UObject* SelectedObject);
	bool CheckIsActorSelectionLocked(AActor* ActorToProcess);
	
	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void IsolateSelectedActors(TArray<AActor*> ActorSelected, TArray<AActor*> AllActorsInLevel);

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "AssetProperties")
	void GhostMode(TArray<AActor*> ActorSelected, TArray<AActor*> AllActorsInLevel);

protected:
	
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "AssetProperties")
	TArray<FActorMaterials> OriginalMaterialsArray;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "AssetProperties")
	UMaterialInterface* GhostMaterial;

	
#pragma endregion
	
};



