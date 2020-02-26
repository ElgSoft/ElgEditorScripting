// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlueprint;
enum class EBPEditorOutputBranch : uint8;
struct FS_ElgBlueprintsNodeStats;
struct FS_ElgBlueprintNodeStats;
 
class UObject;
class UInterface;
class UActorComponent;
enum class EBPEditorOutputValidBranch : uint8;
struct FAssetData;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_UBlueprint_generated_h
#error "ElgEditorBP_UBlueprint.generated.h already included, missing '#pragma once' in ElgEditorBP_UBlueprint.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_UBlueprint_generated_h

#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgBlueprintsNodeStats_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgBlueprintsNodeStats>();

#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgBlueprintNodeStats_Statics; \
	ELGEDITORSCRIPTING_API static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgBlueprintNodeStats>();

#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_SPARSE_DATA
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveLocalVariable) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::RemoveLocalVariable(Z_Param_Blueprint,Z_Param_FunctionName,Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameLocalVariable) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OldVariableName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewVariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::RenameLocalVariable(Z_Param_Blueprint,Z_Param_FunctionName,Z_Param_OldVariableName,Z_Param_NewVariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveUnusedLocalVariables) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::RemoveUnusedLocalVariables(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnusedLocalVariableNames) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_VariableNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::GetUnusedLocalVariableNames(Z_Param_Blueprint,Z_Param_Out_VariableNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalVariableNames) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_VariableNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::GetLocalVariableNames(Z_Param_Blueprint,Z_Param_Out_VariableNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVariableNames) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_VariableNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::GetVariableNames(Z_Param_Blueprint,Z_Param_Out_VariableNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasCompilerErrorBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::HasCompilerErrorBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasCompilerError) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::HasCompilerError(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteNodesByName) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::DeleteNodesByName(Z_Param_Blueprint,Z_Param_NodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeStatsByPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FS_ElgBlueprintsNodeStats*)Z_Param__Result=UElgEditorBP_UBlueprint::GetNodeStatsByPath(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintsNodeStat) \
	{ \
		P_GET_TARRAY(UBlueprint*,Z_Param_Blueprints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FS_ElgBlueprintsNodeStats*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintsNodeStat(Z_Param_Blueprints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintNodeStat) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FS_ElgBlueprintNodeStats*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintNodeStat(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeUsage) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_TMAP_REF(FString,int32,Z_Param_Out_NodeUsageMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::GetNodeUsage(Z_Param_Blueprint,Z_Param_Out_NodeUsageMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNodePinConnectedBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PinName); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsNodePinConnectedBranch(Z_Param_Blueprint,Z_Param_NodeName,Z_Param_PinName,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNodePinConnected) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PinName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsNodePinConnected(Z_Param_Blueprint,Z_Param_NodeName,Z_Param_PinName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNodeBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::HasNodeBranch(Z_Param_Blueprint,Z_Param_NodeName,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNode) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::HasNode(Z_Param_Blueprint,Z_Param_NodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConstructionScriptConnectedBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsConstructionScriptConnectedBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConstructionScriptConnected) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsConstructionScriptConnected(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRunConstructionScriptOnDrag) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::SetRunConstructionScriptOnDrag(Z_Param_Blueprint,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunConstructionScriptOnDragBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsRunConstructionScriptOnDragBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunConstructionScriptOnDrag) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsRunConstructionScriptOnDrag(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanEverTick) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::SetCanEverTick(Z_Param_Blueprint,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEverTickBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::CanEverTickBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEverTick) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::CanEverTick(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartingWithTick) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::SetStartingWithTick(Z_Param_Blueprint,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStartingWithTickBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsStartingWithTickBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStartingWithTick) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsStartingWithTick(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execIsChildOfClassBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ChildClass); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsChildOfClassBranch(Z_Param_Blueprint,Z_Param_ChildClass,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChildOfClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ChildClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsChildOfClass(Z_Param_Blueprint,Z_Param_ChildClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNativeClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UObject> *)Z_Param__Result=UElgEditorBP_UBlueprint::GetNativeClass(Z_Param_Blueprint); \
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
	DECLARE_FUNCTION(execGetBlueprintsByPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL(Z_Param_RecursivePaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UBlueprint*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintsByPath(Z_Param_Path,Z_Param_RecursivePaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintsFromObjects) \
	{ \
		P_GET_TARRAY(UObject*,Z_Param_Objects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UBlueprint*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintsFromObjects(Z_Param_Objects); \
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


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveLocalVariable) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::RemoveLocalVariable(Z_Param_Blueprint,Z_Param_FunctionName,Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRenameLocalVariable) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FunctionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OldVariableName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewVariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::RenameLocalVariable(Z_Param_Blueprint,Z_Param_FunctionName,Z_Param_OldVariableName,Z_Param_NewVariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveUnusedLocalVariables) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::RemoveUnusedLocalVariables(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnusedLocalVariableNames) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_VariableNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::GetUnusedLocalVariableNames(Z_Param_Blueprint,Z_Param_Out_VariableNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalVariableNames) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_VariableNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::GetLocalVariableNames(Z_Param_Blueprint,Z_Param_Out_VariableNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVariableNames) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_VariableNames); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::GetVariableNames(Z_Param_Blueprint,Z_Param_Out_VariableNames); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasCompilerErrorBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::HasCompilerErrorBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasCompilerError) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::HasCompilerError(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteNodesByName) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::DeleteNodesByName(Z_Param_Blueprint,Z_Param_NodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeStatsByPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FS_ElgBlueprintsNodeStats*)Z_Param__Result=UElgEditorBP_UBlueprint::GetNodeStatsByPath(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintsNodeStat) \
	{ \
		P_GET_TARRAY(UBlueprint*,Z_Param_Blueprints); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FS_ElgBlueprintsNodeStats*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintsNodeStat(Z_Param_Blueprints); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintNodeStat) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FS_ElgBlueprintNodeStats*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintNodeStat(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNodeUsage) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_TMAP_REF(FString,int32,Z_Param_Out_NodeUsageMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::GetNodeUsage(Z_Param_Blueprint,Z_Param_Out_NodeUsageMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNodePinConnectedBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PinName); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsNodePinConnectedBranch(Z_Param_Blueprint,Z_Param_NodeName,Z_Param_PinName,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNodePinConnected) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PinName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsNodePinConnected(Z_Param_Blueprint,Z_Param_NodeName,Z_Param_PinName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNodeBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::HasNodeBranch(Z_Param_Blueprint,Z_Param_NodeName,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasNode) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NodeName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::HasNode(Z_Param_Blueprint,Z_Param_NodeName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConstructionScriptConnectedBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsConstructionScriptConnectedBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsConstructionScriptConnected) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsConstructionScriptConnected(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRunConstructionScriptOnDrag) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::SetRunConstructionScriptOnDrag(Z_Param_Blueprint,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunConstructionScriptOnDragBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsRunConstructionScriptOnDragBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsRunConstructionScriptOnDrag) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsRunConstructionScriptOnDrag(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanEverTick) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::SetCanEverTick(Z_Param_Blueprint,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEverTickBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::CanEverTickBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanEverTick) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::CanEverTick(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartingWithTick) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::SetStartingWithTick(Z_Param_Blueprint,Z_Param_bEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStartingWithTickBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsStartingWithTickBranch(Z_Param_Blueprint,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStartingWithTick) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsStartingWithTick(Z_Param_Blueprint); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execIsChildOfClassBranch) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ChildClass); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_UBlueprint::IsChildOfClassBranch(Z_Param_Blueprint,Z_Param_ChildClass,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsChildOfClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_GET_OBJECT(UClass,Z_Param_ChildClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_UBlueprint::IsChildOfClass(Z_Param_Blueprint,Z_Param_ChildClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNativeClass) \
	{ \
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TSubclassOf<UObject> *)Z_Param__Result=UElgEditorBP_UBlueprint::GetNativeClass(Z_Param_Blueprint); \
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
	DECLARE_FUNCTION(execGetBlueprintsByPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL(Z_Param_RecursivePaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UBlueprint*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintsByPath(Z_Param_Path,Z_Param_RecursivePaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBlueprintsFromObjects) \
	{ \
		P_GET_TARRAY(UObject*,Z_Param_Objects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UBlueprint*>*)Z_Param__Result=UElgEditorBP_UBlueprint::GetBlueprintsFromObjects(Z_Param_Objects); \
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


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_UBlueprint(); \
	friend struct Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_UBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_UBlueprint)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_UBlueprint(); \
	friend struct Z_Construct_UClass_UElgEditorBP_UBlueprint_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_UBlueprint, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_UBlueprint)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_STANDARD_CONSTRUCTORS \
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


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_ENHANCED_CONSTRUCTORS \
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


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_PRIVATE_PROPERTY_OFFSET
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_112_PROLOG
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_RPC_WRAPPERS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_INCLASS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_INCLASS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_UBlueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_UBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
