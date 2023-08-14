// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QOL_Extension/Public/EditorUtilityWidget/QOL_ExtensionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQOL_ExtensionWidget() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	QOL_EXTENSION_API UClass* Z_Construct_UClass_UQOL_ExtensionWidget();
	QOL_EXTENSION_API UClass* Z_Construct_UClass_UQOL_ExtensionWidget_NoRegister();
	QOL_EXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FActorMaterials();
	UPackage* Z_Construct_UPackage__Script_QOL_Extension();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorMaterials;
class UScriptStruct* FActorMaterials::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorMaterials.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorMaterials.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorMaterials, Z_Construct_UPackage__Script_QOL_Extension(), TEXT("ActorMaterials"));
	}
	return Z_Registration_Info_UScriptStruct_ActorMaterials.OuterSingleton;
}
template<> QOL_EXTENSION_API UScriptStruct* StaticStruct<FActorMaterials>()
{
	return FActorMaterials::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorMaterials_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorMaterials_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorMaterials_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorMaterials>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorMaterials, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_Actor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_OriginalMaterials_Inner = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_OriginalMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_OriginalMaterials = { "OriginalMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorMaterials, OriginalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_OriginalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_OriginalMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_OriginalMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorMaterials_Statics::NewProp_OriginalMaterials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorMaterials_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QOL_Extension,
		nullptr,
		&NewStructOps,
		"ActorMaterials",
		sizeof(FActorMaterials),
		alignof(FActorMaterials),
		Z_Construct_UScriptStruct_FActorMaterials_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorMaterials_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorMaterials_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorMaterials_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorMaterials()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorMaterials.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorMaterials.InnerSingleton, Z_Construct_UScriptStruct_FActorMaterials_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorMaterials.InnerSingleton;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execGhostMode)
	{
		P_GET_TARRAY(AActor*,Z_Param_ActorSelected);
		P_GET_TARRAY(AActor*,Z_Param_AllActorsInLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GhostMode(Z_Param_ActorSelected,Z_Param_AllActorsInLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execIsolateSelectedActors)
	{
		P_GET_TARRAY(AActor*,Z_Param_ActorSelected);
		P_GET_TARRAY(AActor*,Z_Param_AllActorsInLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsolateSelectedActors(Z_Param_ActorSelected,Z_Param_AllActorsInLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execAddPrefixes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPrefixes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execClearUnusedAssetsInProject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearUnusedAssetsInProject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execCleanUnusedFolders)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanUnusedFolders();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execOrganizeOutliner)
	{
		P_GET_TARRAY(AActor*,Z_Param_AllActorsInLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OrganizeOutliner(Z_Param_AllActorsInLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execSetEnableSelectionChangedEvent)
	{
		P_GET_UBOOL(Z_Param_InEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableSelectionChangedEvent(Z_Param_InEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execUVTextureCreation)
	{
		P_GET_OBJECT(AActor,Z_Param_SelectedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UVTextureCreation(Z_Param_SelectedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execOpenGPUVisualiser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenGPUVisualiser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execGetRHIMemoryStat)
	{
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_MemoryStats);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_DedicatedVideoMemorySize);
		P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_TexturePool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRHIMemoryStat(Z_Param_Out_MemoryStats,Z_Param_Out_DedicatedVideoMemorySize,Z_Param_Out_TexturePool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execSelectActorsByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TagToSelect);
		P_GET_TARRAY(AActor*,Z_Param_AllActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectActorsByTag(Z_Param_TagToSelect,Z_Param_AllActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execRemoveSelectedActorsTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RemoveTagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSelectedActorsTag(Z_Param_RemoveTagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execAddTagToSelectedActors)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TagName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTagToSelectedActors(Z_Param_TagName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execGetTriangleCountFromStaticMeshComponent)
	{
		P_GET_TARRAY(AActor*,Z_Param_Actors);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_StaticMeshCount);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SkeletalMeshCount);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PolySumOfSelectedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriangleCountFromStaticMeshComponent(Z_Param_Actors,Z_Param_Out_StaticMeshCount,Z_Param_Out_SkeletalMeshCount,Z_Param_Out_PolySumOfSelectedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execExecuteSelectedActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutSelectedActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteSelectedActors(Z_Param_Out_OutSelectedActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQOL_ExtensionWidget::execOnDestructWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestructWidget();
		P_NATIVE_END;
	}
	static FName NAME_UQOL_ExtensionWidget_OnEditorSelectionChanged = FName(TEXT("OnEditorSelectionChanged"));
	void UQOL_ExtensionWidget::OnEditorSelectionChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UQOL_ExtensionWidget_OnEditorSelectionChanged),NULL);
	}
	void UQOL_ExtensionWidget::StaticRegisterNativesUQOL_ExtensionWidget()
	{
		UClass* Class = UQOL_ExtensionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPrefixes", &UQOL_ExtensionWidget::execAddPrefixes },
			{ "AddTagToSelectedActors", &UQOL_ExtensionWidget::execAddTagToSelectedActors },
			{ "CleanUnusedFolders", &UQOL_ExtensionWidget::execCleanUnusedFolders },
			{ "ClearUnusedAssetsInProject", &UQOL_ExtensionWidget::execClearUnusedAssetsInProject },
			{ "ExecuteSelectedActors", &UQOL_ExtensionWidget::execExecuteSelectedActors },
			{ "GetRHIMemoryStat", &UQOL_ExtensionWidget::execGetRHIMemoryStat },
			{ "GetTriangleCountFromStaticMeshComponent", &UQOL_ExtensionWidget::execGetTriangleCountFromStaticMeshComponent },
			{ "GhostMode", &UQOL_ExtensionWidget::execGhostMode },
			{ "IsolateSelectedActors", &UQOL_ExtensionWidget::execIsolateSelectedActors },
			{ "OnDestructWidget", &UQOL_ExtensionWidget::execOnDestructWidget },
			{ "OpenGPUVisualiser", &UQOL_ExtensionWidget::execOpenGPUVisualiser },
			{ "OrganizeOutliner", &UQOL_ExtensionWidget::execOrganizeOutliner },
			{ "RemoveSelectedActorsTag", &UQOL_ExtensionWidget::execRemoveSelectedActorsTag },
			{ "SelectActorsByTag", &UQOL_ExtensionWidget::execSelectActorsByTag },
			{ "SetEnableSelectionChangedEvent", &UQOL_ExtensionWidget::execSetEnableSelectionChangedEvent },
			{ "UVTextureCreation", &UQOL_ExtensionWidget::execUVTextureCreation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_AddPrefixes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_AddPrefixes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_AddPrefixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "AddPrefixes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_AddPrefixes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_AddPrefixes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_AddPrefixes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_AddPrefixes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics
	{
		struct QOL_ExtensionWidget_eventAddTagToSelectedActors_Parms
		{
			FName TagName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventAddTagToSelectedActors_Parms, TagName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::NewProp_TagName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "AddTagToSelectedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::QOL_ExtensionWidget_eventAddTagToSelectedActors_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_CleanUnusedFolders_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_CleanUnusedFolders_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_CleanUnusedFolders_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "CleanUnusedFolders", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_CleanUnusedFolders_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_CleanUnusedFolders_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_CleanUnusedFolders()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_CleanUnusedFolders_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_ClearUnusedAssetsInProject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_ClearUnusedAssetsInProject_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_ClearUnusedAssetsInProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "ClearUnusedAssetsInProject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_ClearUnusedAssetsInProject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_ClearUnusedAssetsInProject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_ClearUnusedAssetsInProject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_ClearUnusedAssetsInProject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics
	{
		struct QOL_ExtensionWidget_eventExecuteSelectedActors_Parms
		{
			TArray<AActor*> OutSelectedActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutSelectedActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSelectedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::NewProp_OutSelectedActors_Inner = { "OutSelectedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::NewProp_OutSelectedActors = { "OutSelectedActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventExecuteSelectedActors_Parms, OutSelectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::NewProp_OutSelectedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::NewProp_OutSelectedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "Comment", "// Execute GetSelectedActor() from QOL_Extension.cpp and store/output it in a TArray AActor*\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
		{ "ToolTip", "Execute GetSelectedActor() from QOL_Extension.cpp and store/output it in a TArray AActor*" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "ExecuteSelectedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::QOL_ExtensionWidget_eventExecuteSelectedActors_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics
	{
		struct QOL_ExtensionWidget_eventGetRHIMemoryStat_Parms
		{
			int64 MemoryStats;
			int64 DedicatedVideoMemorySize;
			int64 TexturePool;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_MemoryStats;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_DedicatedVideoMemorySize;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_TexturePool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::NewProp_MemoryStats = { "MemoryStats", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventGetRHIMemoryStat_Parms, MemoryStats), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::NewProp_DedicatedVideoMemorySize = { "DedicatedVideoMemorySize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventGetRHIMemoryStat_Parms, DedicatedVideoMemorySize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::NewProp_TexturePool = { "TexturePool", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventGetRHIMemoryStat_Parms, TexturePool), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::NewProp_MemoryStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::NewProp_DedicatedVideoMemorySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::NewProp_TexturePool,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "GetRHIMemoryStat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::QOL_ExtensionWidget_eventGetRHIMemoryStat_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics
	{
		struct QOL_ExtensionWidget_eventGetTriangleCountFromStaticMeshComponent_Parms
		{
			TArray<AActor*> Actors;
			int32 StaticMeshCount;
			int32 SkeletalMeshCount;
			int32 PolySumOfSelectedActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticMeshCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SkeletalMeshCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolySumOfSelectedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventGetTriangleCountFromStaticMeshComponent_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_StaticMeshCount = { "StaticMeshCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventGetTriangleCountFromStaticMeshComponent_Parms, StaticMeshCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_SkeletalMeshCount = { "SkeletalMeshCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventGetTriangleCountFromStaticMeshComponent_Parms, SkeletalMeshCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_PolySumOfSelectedActors = { "PolySumOfSelectedActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventGetTriangleCountFromStaticMeshComponent_Parms, PolySumOfSelectedActors), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_StaticMeshCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_SkeletalMeshCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::NewProp_PolySumOfSelectedActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "GetTriangleCountFromStaticMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::QOL_ExtensionWidget_eventGetTriangleCountFromStaticMeshComponent_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics
	{
		struct QOL_ExtensionWidget_eventGhostMode_Parms
		{
			TArray<AActor*> ActorSelected;
			TArray<AActor*> AllActorsInLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorSelected_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorSelected;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllActorsInLevel_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllActorsInLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::NewProp_ActorSelected_Inner = { "ActorSelected", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::NewProp_ActorSelected = { "ActorSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventGhostMode_Parms, ActorSelected), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::NewProp_AllActorsInLevel_Inner = { "AllActorsInLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::NewProp_AllActorsInLevel = { "AllActorsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventGhostMode_Parms, AllActorsInLevel), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::NewProp_ActorSelected_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::NewProp_ActorSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::NewProp_AllActorsInLevel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::NewProp_AllActorsInLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "GhostMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::QOL_ExtensionWidget_eventGhostMode_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics
	{
		struct QOL_ExtensionWidget_eventIsolateSelectedActors_Parms
		{
			TArray<AActor*> ActorSelected;
			TArray<AActor*> AllActorsInLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorSelected_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorSelected;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllActorsInLevel_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllActorsInLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::NewProp_ActorSelected_Inner = { "ActorSelected", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::NewProp_ActorSelected = { "ActorSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventIsolateSelectedActors_Parms, ActorSelected), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::NewProp_AllActorsInLevel_Inner = { "AllActorsInLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::NewProp_AllActorsInLevel = { "AllActorsInLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventIsolateSelectedActors_Parms, AllActorsInLevel), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::NewProp_ActorSelected_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::NewProp_ActorSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::NewProp_AllActorsInLevel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::NewProp_AllActorsInLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "IsolateSelectedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::QOL_ExtensionWidget_eventIsolateSelectedActors_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_OnDestructWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_OnDestructWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selection Changed Editor Utility Widget" },
		{ "Comment", "// Clean up function during OnDestruct event to ensure no duplicates of delegates.\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
		{ "ToolTip", "Clean up function during OnDestruct event to ensure no duplicates of delegates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_OnDestructWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "OnDestructWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_OnDestructWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_OnDestructWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_OnDestructWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_OnDestructWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_OnEditorSelectionChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_OnEditorSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Selection Changed Editor Utility Widget" },
		{ "Comment", "// Custom Event that is bounded as a Delegate.\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
		{ "ToolTip", "Custom Event that is bounded as a Delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_OnEditorSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "OnEditorSelectionChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_OnEditorSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_OnEditorSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_OnEditorSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_OnEditorSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_OpenGPUVisualiser_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_OpenGPUVisualiser_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_OpenGPUVisualiser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "OpenGPUVisualiser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_OpenGPUVisualiser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_OpenGPUVisualiser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_OpenGPUVisualiser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_OpenGPUVisualiser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics
	{
		struct QOL_ExtensionWidget_eventOrganizeOutliner_Parms
		{
			TArray<AActor*> AllActorsInLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllActorsInLevel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllActorsInLevel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllActorsInLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::NewProp_AllActorsInLevel_Inner = { "AllActorsInLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::NewProp_AllActorsInLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::NewProp_AllActorsInLevel = { "AllActorsInLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventOrganizeOutliner_Parms, AllActorsInLevel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::NewProp_AllActorsInLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::NewProp_AllActorsInLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::NewProp_AllActorsInLevel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::NewProp_AllActorsInLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "OrganizeOutliner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::QOL_ExtensionWidget_eventOrganizeOutliner_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics
	{
		struct QOL_ExtensionWidget_eventRemoveSelectedActorsTag_Parms
		{
			FName RemoveTagName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_RemoveTagName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::NewProp_RemoveTagName = { "RemoveTagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventRemoveSelectedActorsTag_Parms, RemoveTagName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::NewProp_RemoveTagName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "RemoveSelectedActorsTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::QOL_ExtensionWidget_eventRemoveSelectedActorsTag_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics
	{
		struct QOL_ExtensionWidget_eventSelectActorsByTag_Parms
		{
			FName TagToSelect;
			TArray<AActor*> AllActors;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagToSelect;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AllActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::NewProp_TagToSelect = { "TagToSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventSelectActorsByTag_Parms, TagToSelect), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::NewProp_AllActors_Inner = { "AllActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::NewProp_AllActors = { "AllActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventSelectActorsByTag_Parms, AllActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::NewProp_TagToSelect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::NewProp_AllActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::NewProp_AllActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "SelectActorsByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::QOL_ExtensionWidget_eventSelectActorsByTag_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics
	{
		struct QOL_ExtensionWidget_eventSetEnableSelectionChangedEvent_Parms
		{
			bool InEnabled;
		};
		static void NewProp_InEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::NewProp_InEnabled_SetBit(void* Obj)
	{
		((QOL_ExtensionWidget_eventSetEnableSelectionChangedEvent_Parms*)Obj)->InEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::NewProp_InEnabled = { "InEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(QOL_ExtensionWidget_eventSetEnableSelectionChangedEvent_Parms), &Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::NewProp_InEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::NewProp_InEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Selection Changed Editor Utility Widget" },
		{ "Comment", "// Add USelect::SelectObjectEvent Delegate.\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
		{ "ToolTip", "Add USelect::SelectObjectEvent Delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "SetEnableSelectionChangedEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::QOL_ExtensionWidget_eventSetEnableSelectionChangedEvent_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics
	{
		struct QOL_ExtensionWidget_eventUVTextureCreation_Parms
		{
			AActor* SelectedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QOL_ExtensionWidget_eventUVTextureCreation_Parms, SelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::NewProp_SelectedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQOL_ExtensionWidget, nullptr, "UVTextureCreation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::QOL_ExtensionWidget_eventUVTextureCreation_Parms), Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQOL_ExtensionWidget);
	UClass* Z_Construct_UClass_UQOL_ExtensionWidget_NoRegister()
	{
		return UQOL_ExtensionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQOL_ExtensionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetTriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AssetTriangleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSelectedActorName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LastSelectedActorName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannelNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVChannelNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UVTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedUVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedUVChannel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludedFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedFolders;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalMaterialsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalMaterialsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalMaterialsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GhostMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GhostMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQOL_ExtensionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QOL_Extension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQOL_ExtensionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_AddPrefixes, "AddPrefixes" }, // 508800342
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_AddTagToSelectedActors, "AddTagToSelectedActors" }, // 3777808598
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_CleanUnusedFolders, "CleanUnusedFolders" }, // 407011214
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_ClearUnusedAssetsInProject, "ClearUnusedAssetsInProject" }, // 2583245051
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_ExecuteSelectedActors, "ExecuteSelectedActors" }, // 727848689
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_GetRHIMemoryStat, "GetRHIMemoryStat" }, // 1085464740
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_GetTriangleCountFromStaticMeshComponent, "GetTriangleCountFromStaticMeshComponent" }, // 480389136
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_GhostMode, "GhostMode" }, // 2750893423
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_IsolateSelectedActors, "IsolateSelectedActors" }, // 2299291418
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_OnDestructWidget, "OnDestructWidget" }, // 1652205614
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_OnEditorSelectionChanged, "OnEditorSelectionChanged" }, // 753257858
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_OpenGPUVisualiser, "OpenGPUVisualiser" }, // 2264722058
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_OrganizeOutliner, "OrganizeOutliner" }, // 1718482741
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_RemoveSelectedActorsTag, "RemoveSelectedActorsTag" }, // 615855408
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_SelectActorsByTag, "SelectActorsByTag" }, // 2014884734
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_SetEnableSelectionChangedEvent, "SetEnableSelectionChangedEvent" }, // 2943126034
		{ &Z_Construct_UFunction_UQOL_ExtensionWidget_UVTextureCreation, "UVTextureCreation" }, // 1140621218
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQOL_ExtensionWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityWidget/QOL_ExtensionWidget.h" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_AssetTriangleCount_MetaData[] = {
		{ "Category", "AssetProperties" },
		{ "Comment", "//Asset Triangle Count Property and Display in Widget\n" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
		{ "ToolTip", "Asset Triangle Count Property and Display in Widget" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_AssetTriangleCount = { "AssetTriangleCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQOL_ExtensionWidget, AssetTriangleCount), METADATA_PARAMS(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_AssetTriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_AssetTriangleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_LastSelectedActorName_MetaData[] = {
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_LastSelectedActorName = { "LastSelectedActorName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQOL_ExtensionWidget, LastSelectedActorName), METADATA_PARAMS(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_LastSelectedActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_LastSelectedActorName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVChannelNames_Inner = { "UVChannelNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVChannelNames_MetaData[] = {
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVChannelNames = { "UVChannelNames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQOL_ExtensionWidget, UVChannelNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVChannelNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVChannelNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVTexture_MetaData[] = {
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVTexture = { "UVTexture", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQOL_ExtensionWidget, UVTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_SelectedUVChannel_MetaData[] = {
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_SelectedUVChannel = { "SelectedUVChannel", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQOL_ExtensionWidget, SelectedUVChannel), METADATA_PARAMS(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_SelectedUVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_SelectedUVChannel_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_ExcludedFolders_Inner = { "ExcludedFolders", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_ExcludedFolders_MetaData[] = {
		{ "Category", "DeleteUnusedAssets" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_ExcludedFolders = { "ExcludedFolders", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQOL_ExtensionWidget, ExcludedFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_ExcludedFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_ExcludedFolders_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_OriginalMaterialsArray_Inner = { "OriginalMaterialsArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorMaterials, METADATA_PARAMS(nullptr, 0) }; // 2760379247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_OriginalMaterialsArray_MetaData[] = {
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_OriginalMaterialsArray = { "OriginalMaterialsArray", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQOL_ExtensionWidget, OriginalMaterialsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_OriginalMaterialsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_OriginalMaterialsArray_MetaData)) }; // 2760379247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_GhostMaterial_MetaData[] = {
		{ "Category", "AssetProperties" },
		{ "ModuleRelativePath", "Public/EditorUtilityWidget/QOL_ExtensionWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_GhostMaterial = { "GhostMaterial", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQOL_ExtensionWidget, GhostMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_GhostMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_GhostMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQOL_ExtensionWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_AssetTriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_LastSelectedActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVChannelNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVChannelNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_UVTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_SelectedUVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_ExcludedFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_ExcludedFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_OriginalMaterialsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_OriginalMaterialsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQOL_ExtensionWidget_Statics::NewProp_GhostMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQOL_ExtensionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQOL_ExtensionWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQOL_ExtensionWidget_Statics::ClassParams = {
		&UQOL_ExtensionWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQOL_ExtensionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQOL_ExtensionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQOL_ExtensionWidget()
	{
		if (!Z_Registration_Info_UClass_UQOL_ExtensionWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQOL_ExtensionWidget.OuterSingleton, Z_Construct_UClass_UQOL_ExtensionWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQOL_ExtensionWidget.OuterSingleton;
	}
	template<> QOL_EXTENSION_API UClass* StaticClass<UQOL_ExtensionWidget>()
	{
		return UQOL_ExtensionWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQOL_ExtensionWidget);
	UQOL_ExtensionWidget::~UQOL_ExtensionWidget() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_Statics::ScriptStructInfo[] = {
		{ FActorMaterials::StaticStruct, Z_Construct_UScriptStruct_FActorMaterials_Statics::NewStructOps, TEXT("ActorMaterials"), &Z_Registration_Info_UScriptStruct_ActorMaterials, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorMaterials), 2760379247U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQOL_ExtensionWidget, UQOL_ExtensionWidget::StaticClass, TEXT("UQOL_ExtensionWidget"), &Z_Registration_Info_UClass_UQOL_ExtensionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQOL_ExtensionWidget), 502482017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_2059303193(TEXT("/Script/QOL_Extension"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
