// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
class UObject;
enum class EBPEditorOutputBranch : uint8;
class UInterface;
class UActorComponent;
enum class EBPEditorOutputValidBranch : uint8;
struct FAssetData;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_UBlueprint_generated_h
#error "ElgEditorBP_UBlueprint.generated.h already included, missing '#pragma once' in ElgEditorBP_UBlueprint.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_UBlueprint_generated_h

#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompileBlueprint) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::CompileBlueprint(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UObject> *)Z_Param__Result=UElgEditorBP_UBlueprint::GetParentClass(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSupportInterfaceBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintSupportInterfaceBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSupportInterface) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::BlueprintSupportInterface(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintRemoveInterface) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass); \
		P_GET_UBOOL(Z_Param_bPreserveFunctions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintRemoveInterface(Z_Param_Blueprint,Z_Param_InterfaceClass,Z_Param_bPreserveFunctions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintAddInterface) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintAddInterface(Z_Param_Blueprint,Z_Param_InterfaceClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintImplementInterface) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintImplementInterface(Z_Param_Blueprint,Z_Param_InterfaceClass,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintInterfaces) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UInterface> >*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintInterfaces(Z_Param_Blueprint,Z_Param_ExcludeInherited); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSupportComponentBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintSupportComponentBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSupportComponent) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::BlueprintSupportComponent(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintRemoveComponent) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_bOnlyFirst); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintRemoveComponent(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_bOnlyFirst); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintAddComponent) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintAddComponent(Z_Param_Blueprint,Z_Param_ComponentClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponentsOfClassBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentsOfClassBranch(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponentsOfClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentsOfClass(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponentOfClassBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentOfClassBranch(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponentOfClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentOfClass(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponents) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponents(Z_Param_Blueprint,Z_Param_ExcludeInherited); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBlueprint**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintFromObject(Z_Param_Object,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintFromAssetData) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBlueprint**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintFromAssetData(Z_Param_Out_AssetDataStruct,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompileBlueprint) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::CompileBlueprint(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetParentClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UObject> *)Z_Param__Result=UElgEditorBP_UBlueprint::GetParentClass(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSupportInterfaceBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintSupportInterfaceBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSupportInterface) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::BlueprintSupportInterface(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintRemoveInterface) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass); \
		P_GET_UBOOL(Z_Param_bPreserveFunctions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintRemoveInterface(Z_Param_Blueprint,Z_Param_InterfaceClass,Z_Param_bPreserveFunctions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintAddInterface) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintAddInterface(Z_Param_Blueprint,Z_Param_InterfaceClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintImplementInterface) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_InterfaceClass); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintImplementInterface(Z_Param_Blueprint,Z_Param_InterfaceClass,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintInterfaces) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<TSubclassOf<UInterface> >*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintInterfaces(Z_Param_Blueprint,Z_Param_ExcludeInherited); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSupportComponentBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintSupportComponentBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintSupportComponent) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::BlueprintSupportComponent(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintRemoveComponent) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_bOnlyFirst); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintRemoveComponent(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_bOnlyFirst); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlueprintAddComponent) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::BlueprintAddComponent(Z_Param_Blueprint,Z_Param_ComponentClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponentsOfClassBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentsOfClassBranch(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponentsOfClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentsOfClass(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponentOfClassBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentOfClassBranch(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponentOfClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ComponentClass); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UActorComponent**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponentOfClass(Z_Param_Blueprint,Z_Param_ComponentClass,Z_Param_ExcludeInherited); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintComponents) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_ExcludeInherited); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UActorComponent*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintComponents(Z_Param_Blueprint,Z_Param_ExcludeInherited); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBlueprint**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintFromObject(Z_Param_Object,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintFromAssetData) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UBlueprint**)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintFromAssetData(Z_Param_Out_AssetDataStruct,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	}


#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_UBlueprint(); \
	friend struct Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_UBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_UBlueprint)


#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_UBlueprint(); \
	friend struct Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_UBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_UBlueprint)


#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_UBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_UBlueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_UBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_UBlueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_UBlueprint(UElgEditorBP_UBlueprint&&); \
	NO_API UElgEditorBP_UBlueprint(const UElgEditorBP_UBlueprint&); \
public:


#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_UBlueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_UBlueprint(UElgEditorBP_UBlueprint&&); \
	NO_API UElgEditorBP_UBlueprint(const UElgEditorBP_UBlueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_UBlueprint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_UBlueprint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_UBlueprint)


#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_PRIVATE_PROPERTY_OFFSET
#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_22_PROLOG
#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_RPC_WRAPPERS \
	D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_INCLASS \
	D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_INCLASS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_UBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__Projects_Unreal_ElgCodeEditor_plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
