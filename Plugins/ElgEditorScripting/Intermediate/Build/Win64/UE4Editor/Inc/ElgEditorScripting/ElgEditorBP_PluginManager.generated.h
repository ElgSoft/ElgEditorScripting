// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UTexture2D;
enum class EBPEditorOutputResultBranch : uint8;
class UTexture2D;
 struct FS_ElgPluginCategory;
struct FS_ElgPluginDescriptor;
enum class EBPEditorOutputValidBranch : uint8;
 struct FS_ElgPluginDescriptor;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_PluginManager_generated_h
#error "ElgEditorBP_PluginManager.generated.h already included, missing '#pragma once' in ElgEditorBP_PluginManager.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_PluginManager_generated_h

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgPluginCategory_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgPluginCategory>();

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgPluginDescriptor_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgPluginDescriptor>();

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPluginIconTextures) \
	{ \
		P_GET_TMAP_REF(FString,UTexture2D*,Z_Param_Out_PluginIcons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginIconTextures(Z_Param_Out_PluginIcons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginIconTextureByPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IconPath); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UElgEditorBP_PluginManager::GetPluginIconTextureByPath(Z_Param_IconPath,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginIconTexture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UElgEditorBP_PluginManager::GetPluginIconTexture(Z_Param_PluginName,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPluginEnabled) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_GET_UBOOL(Z_Param_bSkipIfDependencies); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::SetPluginEnabled(Z_Param_PluginName,Z_Param_bEnable,Z_Param_bSkipIfDependencies,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisablePlugin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_UBOOL(Z_Param_bSkipIfDependencies); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::DisablePlugin(Z_Param_PluginName,Z_Param_bSkipIfDependencies,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePlugin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_UBOOL(Z_Param_bSkipIfDependencies); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::EnablePlugin(Z_Param_PluginName,Z_Param_bSkipIfDependencies,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginCategory) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_CategoryNames); \
		P_GET_TMAP_REF(FString,FS_ElgPluginCategory,Z_Param_Out_CategoryMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginCategory(Z_Param_Out_CategoryNames,Z_Param_Out_CategoryMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginFriendlyName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FriendlyNanme); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginFriendlyName(Z_Param_PluginName,Z_Param_Out_FriendlyNanme); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginDescription) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_STRUCT_REF(FS_ElgPluginDescriptor,Z_Param_Out_Descriptor); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginDescription(Z_Param_PluginName,Z_Param_Out_Descriptor,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginDescriptions) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_PluginFriendlyNames); \
		P_GET_TMAP_REF(FString,FS_ElgPluginDescriptor,Z_Param_Out_PluginMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginDescriptions(Z_Param_Out_PluginFriendlyNames,Z_Param_Out_PluginMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPackagePlugin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OutputDirectory); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::PackagePlugin(Z_Param_PluginName,Z_Param_OutputDirectory,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UElgEditorBP_PluginManager::GetPluginCount(); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPluginIconTextures) \
	{ \
		P_GET_TMAP_REF(FString,UTexture2D*,Z_Param_Out_PluginIcons); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginIconTextures(Z_Param_Out_PluginIcons); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginIconTextureByPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IconPath); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UElgEditorBP_PluginManager::GetPluginIconTextureByPath(Z_Param_IconPath,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginIconTexture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UElgEditorBP_PluginManager::GetPluginIconTexture(Z_Param_PluginName,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPluginEnabled) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_GET_UBOOL(Z_Param_bSkipIfDependencies); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::SetPluginEnabled(Z_Param_PluginName,Z_Param_bEnable,Z_Param_bSkipIfDependencies,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisablePlugin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_UBOOL(Z_Param_bSkipIfDependencies); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::DisablePlugin(Z_Param_PluginName,Z_Param_bSkipIfDependencies,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnablePlugin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_UBOOL(Z_Param_bSkipIfDependencies); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::EnablePlugin(Z_Param_PluginName,Z_Param_bSkipIfDependencies,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginCategory) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_CategoryNames); \
		P_GET_TMAP_REF(FString,FS_ElgPluginCategory,Z_Param_Out_CategoryMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginCategory(Z_Param_Out_CategoryNames,Z_Param_Out_CategoryMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginFriendlyName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_FriendlyNanme); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginFriendlyName(Z_Param_PluginName,Z_Param_Out_FriendlyNanme); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginDescription) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_STRUCT_REF(FS_ElgPluginDescriptor,Z_Param_Out_Descriptor); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginDescription(Z_Param_PluginName,Z_Param_Out_Descriptor,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginDescriptions) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_PluginFriendlyNames); \
		P_GET_TMAP_REF(FString,FS_ElgPluginDescriptor,Z_Param_Out_PluginMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::GetPluginDescriptions(Z_Param_Out_PluginFriendlyNames,Z_Param_Out_PluginMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPackagePlugin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PluginName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OutputDirectory); \
		P_GET_ENUM_REF(EBPEditorOutputResultBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_PluginManager::PackagePlugin(Z_Param_PluginName,Z_Param_OutputDirectory,(EBPEditorOutputResultBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPluginCount) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UElgEditorBP_PluginManager::GetPluginCount(); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_PluginManager(); \
	friend struct Z_Construct_UClass_UElgEditorBP_PluginManager_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_PluginManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_PluginManager)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_PluginManager(); \
	friend struct Z_Construct_UClass_UElgEditorBP_PluginManager_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_PluginManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_PluginManager)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_PluginManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_PluginManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_PluginManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_PluginManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_PluginManager(UElgEditorBP_PluginManager&&); \
	NO_API UElgEditorBP_PluginManager(const UElgEditorBP_PluginManager&); \
public:


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_PluginManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_PluginManager(UElgEditorBP_PluginManager&&); \
	NO_API UElgEditorBP_PluginManager(const UElgEditorBP_PluginManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_PluginManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_PluginManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_PluginManager)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_PRIVATE_PROPERTY_OFFSET
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_222_PROLOG
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_RPC_WRAPPERS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_INCLASS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_INCLASS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_PluginManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_PluginManager_h


#define FOREACH_ENUM_EBPPLUGINTYPE(op) \
	op(EBPPluginType::Engine) \
	op(EBPPluginType::Enterprise) \
	op(EBPPluginType::Project) \
	op(EBPPluginType::External) \
	op(EBPPluginType::Mod) 

enum class EBPPluginType : uint8;
template<> ELGEDITORSCRIPTING_API UEnum* StaticEnum<EBPPluginType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
