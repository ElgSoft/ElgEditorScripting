// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_Class_generated_h
#error "ElgEditorBP_Class.generated.h already included, missing '#pragma once' in ElgEditorBP_Class.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_Class_generated_h

#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_SPARSE_DATA
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetClassByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UElgEditorBP_Class::GetClassByName(Z_Param_ClassName); \
		P_NATIVE_END; \
	}


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetClassByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ClassName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UElgEditorBP_Class::GetClassByName(Z_Param_ClassName); \
		P_NATIVE_END; \
	}


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Class(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Class_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Class, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Class)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Class(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Class_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Class, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Class)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Class(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Class) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Class); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Class); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Class(UElgEditorBP_Class&&); \
	NO_API UElgEditorBP_Class(const UElgEditorBP_Class&); \
public:


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Class(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Class(UElgEditorBP_Class&&); \
	NO_API UElgEditorBP_Class(const UElgEditorBP_Class&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Class); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Class); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Class)


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_PRIVATE_PROPERTY_OFFSET
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_13_PROLOG
#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_RPC_WRAPPERS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_INCLASS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_PRIVATE_PROPERTY_OFFSET \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_SPARSE_DATA \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_INCLASS_NO_PURE_DECLS \
	PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_Class>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginBuild_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Class_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
