// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FS_ElgModuleStatus;
 struct FS_ElgModuleStatus;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_FModuleManager_generated_h
#error "ElgEditorBP_FModuleManager.generated.h already included, missing '#pragma once' in ElgEditorBP_FModuleManager.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_FModuleManager_generated_h

#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgModuleStatus_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgModuleStatus>();

#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_SPARSE_DATA
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanDynamicReloadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::CanDynamicReloadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanHotReloadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::CanHotReloadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsModuleLoaded) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::IsModuleLoaded(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanRecompileModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::CanRecompileModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanShutdownModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::CanShutdownModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReloadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::ReloadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::UnloadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::LoadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecompileModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::RecompileModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModuleStatus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FS_ElgModuleStatus,Z_Param_Out_ModuleStatus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::GetModuleStatus(Z_Param_ModuleName,Z_Param_Out_Success,Z_Param_Out_ModuleStatus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModulesStatus) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_ModuleNames); \
		P_GET_TMAP_REF(FString,FS_ElgModuleStatus,Z_Param_Out_ModulesMap); \
		P_GET_UBOOL(Z_Param_bProjectOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::GetModulesStatus(Z_Param_Out_ModuleNames,Z_Param_Out_ModulesMap,Z_Param_bProjectOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModuleNames) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Modules); \
		P_GET_UBOOL(Z_Param_bProjectOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::GetModuleNames(Z_Param_Out_Modules,Z_Param_bProjectOnly); \
		P_NATIVE_END; \
	}


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDynamicReloadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::CanDynamicReloadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanHotReloadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::CanHotReloadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsModuleLoaded) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::IsModuleLoaded(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanRecompileModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::CanRecompileModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanShutdownModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_FModuleManager::CanShutdownModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReloadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::ReloadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnloadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::UnloadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::LoadModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRecompileModule) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::RecompileModule(Z_Param_ModuleName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModuleStatus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleName); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FS_ElgModuleStatus,Z_Param_Out_ModuleStatus); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::GetModuleStatus(Z_Param_ModuleName,Z_Param_Out_Success,Z_Param_Out_ModuleStatus); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModulesStatus) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_ModuleNames); \
		P_GET_TMAP_REF(FString,FS_ElgModuleStatus,Z_Param_Out_ModulesMap); \
		P_GET_UBOOL(Z_Param_bProjectOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::GetModulesStatus(Z_Param_Out_ModuleNames,Z_Param_Out_ModulesMap,Z_Param_bProjectOnly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetModuleNames) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Modules); \
		P_GET_UBOOL(Z_Param_bProjectOnly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_FModuleManager::GetModuleNames(Z_Param_Out_Modules,Z_Param_bProjectOnly); \
		P_NATIVE_END; \
	}


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_FModuleManager(); \
	friend struct Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_FModuleManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_FModuleManager)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_FModuleManager(); \
	friend struct Z_Construct_UClass_UElgEditorBP_FModuleManager_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_FModuleManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_FModuleManager)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_FModuleManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_FModuleManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_FModuleManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_FModuleManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_FModuleManager(UElgEditorBP_FModuleManager&&); \
	NO_API UElgEditorBP_FModuleManager(const UElgEditorBP_FModuleManager&); \
public:


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_FModuleManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_FModuleManager(UElgEditorBP_FModuleManager&&); \
	NO_API UElgEditorBP_FModuleManager(const UElgEditorBP_FModuleManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_FModuleManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_FModuleManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_FModuleManager)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_PRIVATE_PROPERTY_OFFSET
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_82_PROLOG
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_RPC_WRAPPERS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_INCLASS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_INCLASS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_FModuleManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_FModuleManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
