// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EBPEditorOutputBranch : uint8;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_LevelActor_generated_h
#error "ElgEditorBP_LevelActor.generated.h already included, missing '#pragma once' in ElgEditorBP_LevelActor.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_LevelActor_generated_h

#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_SPARSE_DATA
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEditorOnlyActorBranch) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::IsEditorOnlyActorBranch(Z_Param_Actor,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorOnlyActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_LevelActor::IsEditorOnlyActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWithTickEnabledBranch) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::StartWithTickEnabledBranch(Z_Param_Actor,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWithTickEnabled) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_LevelActor::StartWithTickEnabled(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkActorsAsDirty) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_UBOOL(Z_Param_bRunConstructionScript); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::MarkActorsAsDirty(Z_Param_Actors,Z_Param_bRunConstructionScript); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkActorAsDirty) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bRunConstructionScript); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::MarkActorAsDirty(Z_Param_Actor,Z_Param_bRunConstructionScript); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunConstructionScipts) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::RunConstructionScipts(Z_Param_Actors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunConstructionScipt) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::RunConstructionScipt(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEditorOnlyActorBranch) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::IsEditorOnlyActorBranch(Z_Param_Actor,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditorOnlyActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_LevelActor::IsEditorOnlyActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWithTickEnabledBranch) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::StartWithTickEnabledBranch(Z_Param_Actor,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartWithTickEnabled) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_LevelActor::StartWithTickEnabled(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkActorsAsDirty) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_GET_UBOOL(Z_Param_bRunConstructionScript); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::MarkActorsAsDirty(Z_Param_Actors,Z_Param_bRunConstructionScript); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkActorAsDirty) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_UBOOL(Z_Param_bRunConstructionScript); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::MarkActorAsDirty(Z_Param_Actor,Z_Param_bRunConstructionScript); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunConstructionScipts) \
	{ \
		P_GET_TARRAY(AActor*,Z_Param_Actors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::RunConstructionScipts(Z_Param_Actors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunConstructionScipt) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_LevelActor::RunConstructionScipt(Z_Param_Actor); \
		P_NATIVE_END; \
	}


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_LevelActor(); \
	friend struct Z_Construct_UClass_UElgEditorBP_LevelActor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_LevelActor, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_LevelActor)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_LevelActor(); \
	friend struct Z_Construct_UClass_UElgEditorBP_LevelActor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_LevelActor, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_LevelActor)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_LevelActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_LevelActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_LevelActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_LevelActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_LevelActor(UElgEditorBP_LevelActor&&); \
	NO_API UElgEditorBP_LevelActor(const UElgEditorBP_LevelActor&); \
public:


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_LevelActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_LevelActor(UElgEditorBP_LevelActor&&); \
	NO_API UElgEditorBP_LevelActor(const UElgEditorBP_LevelActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_LevelActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_LevelActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_LevelActor)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_PRIVATE_PROPERTY_OFFSET
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_14_PROLOG
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_RPC_WRAPPERS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_INCLASS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_INCLASS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_LevelActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
