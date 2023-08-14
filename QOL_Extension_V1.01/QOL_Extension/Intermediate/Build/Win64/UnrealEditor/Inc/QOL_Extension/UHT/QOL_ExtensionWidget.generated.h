// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityWidget/QOL_ExtensionWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QOL_EXTENSION_QOL_ExtensionWidget_generated_h
#error "QOL_ExtensionWidget.generated.h already included, missing '#pragma once' in QOL_ExtensionWidget.h"
#endif
#define QOL_EXTENSION_QOL_ExtensionWidget_generated_h

#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorMaterials_Statics; \
	QOL_EXTENSION_API static class UScriptStruct* StaticStruct();


template<> QOL_EXTENSION_API UScriptStruct* StaticStruct<struct FActorMaterials>();

#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_SPARSE_DATA
#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGhostMode); \
	DECLARE_FUNCTION(execIsolateSelectedActors); \
	DECLARE_FUNCTION(execAddPrefixes); \
	DECLARE_FUNCTION(execClearUnusedAssetsInProject); \
	DECLARE_FUNCTION(execCleanUnusedFolders); \
	DECLARE_FUNCTION(execOrganizeOutliner); \
	DECLARE_FUNCTION(execSetEnableSelectionChangedEvent); \
	DECLARE_FUNCTION(execUVTextureCreation); \
	DECLARE_FUNCTION(execOpenGPUVisualiser); \
	DECLARE_FUNCTION(execGetRHIMemoryStat); \
	DECLARE_FUNCTION(execSelectActorsByTag); \
	DECLARE_FUNCTION(execRemoveSelectedActorsTag); \
	DECLARE_FUNCTION(execAddTagToSelectedActors); \
	DECLARE_FUNCTION(execGetTriangleCountFromStaticMeshComponent); \
	DECLARE_FUNCTION(execExecuteSelectedActors); \
	DECLARE_FUNCTION(execOnDestructWidget);


#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGhostMode); \
	DECLARE_FUNCTION(execIsolateSelectedActors); \
	DECLARE_FUNCTION(execAddPrefixes); \
	DECLARE_FUNCTION(execClearUnusedAssetsInProject); \
	DECLARE_FUNCTION(execCleanUnusedFolders); \
	DECLARE_FUNCTION(execOrganizeOutliner); \
	DECLARE_FUNCTION(execSetEnableSelectionChangedEvent); \
	DECLARE_FUNCTION(execUVTextureCreation); \
	DECLARE_FUNCTION(execOpenGPUVisualiser); \
	DECLARE_FUNCTION(execGetRHIMemoryStat); \
	DECLARE_FUNCTION(execSelectActorsByTag); \
	DECLARE_FUNCTION(execRemoveSelectedActorsTag); \
	DECLARE_FUNCTION(execAddTagToSelectedActors); \
	DECLARE_FUNCTION(execGetTriangleCountFromStaticMeshComponent); \
	DECLARE_FUNCTION(execExecuteSelectedActors); \
	DECLARE_FUNCTION(execOnDestructWidget);


#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_ACCESSORS
#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQOL_ExtensionWidget(); \
	friend struct Z_Construct_UClass_UQOL_ExtensionWidget_Statics; \
public: \
	DECLARE_CLASS(UQOL_ExtensionWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QOL_Extension"), NO_API) \
	DECLARE_SERIALIZER(UQOL_ExtensionWidget)


#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUQOL_ExtensionWidget(); \
	friend struct Z_Construct_UClass_UQOL_ExtensionWidget_Statics; \
public: \
	DECLARE_CLASS(UQOL_ExtensionWidget, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QOL_Extension"), NO_API) \
	DECLARE_SERIALIZER(UQOL_ExtensionWidget)


#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQOL_ExtensionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQOL_ExtensionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQOL_ExtensionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQOL_ExtensionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQOL_ExtensionWidget(UQOL_ExtensionWidget&&); \
	NO_API UQOL_ExtensionWidget(const UQOL_ExtensionWidget&); \
public: \
	NO_API virtual ~UQOL_ExtensionWidget();


#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQOL_ExtensionWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQOL_ExtensionWidget(UQOL_ExtensionWidget&&); \
	NO_API UQOL_ExtensionWidget(const UQOL_ExtensionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQOL_ExtensionWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQOL_ExtensionWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQOL_ExtensionWidget) \
	NO_API virtual ~UQOL_ExtensionWidget();


#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_32_PROLOG
#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_RPC_WRAPPERS \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_ACCESSORS \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_INCLASS \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_ACCESSORS \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QOL_EXTENSION_API UClass* StaticClass<class UQOL_ExtensionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_QOL_Extension_Source_QOL_Extension_Public_EditorUtilityWidget_QOL_ExtensionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
