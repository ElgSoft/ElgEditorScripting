// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_LevelActor_generated_h
#error "ElgEditorBP_LevelActor.generated.h already included, missing '#pragma once' in ElgEditorBP_LevelActor.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_LevelActor_generated_h

#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_RPC_WRAPPERS \
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


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_LevelActor(); \
	friend struct Z_Construct_UClass_UElgEditorBP_LevelActor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_LevelActor, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_LevelActor)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_LevelActor(); \
	friend struct Z_Construct_UClass_UElgEditorBP_LevelActor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_LevelActor, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_LevelActor)


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_STANDARD_CONSTRUCTORS \
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


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_ENHANCED_CONSTRUCTORS \
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


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_PRIVATE_PROPERTY_OFFSET
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_13_PROLOG
#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_RPC_WRAPPERS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_INCLASS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_PRIVATE_PROPERTY_OFFSET \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_INCLASS_NO_PURE_DECLS \
	D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_LevelActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D__Projects_Unreal_ElgCodeEditor_Plugins_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_LevelActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
