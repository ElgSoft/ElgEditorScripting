// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FS_ElgAssetMetaData;
enum class EBPEditorOutputValidBranch : uint8;
class UObject; struct FS_ElgAssetMetaData;
struct FAssetData;
struct FDateTime;
 
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_Assets_generated_h
#error "ElgEditorBP_Assets.generated.h already included, missing '#pragma once' in ElgEditorBP_Assets.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_Assets_generated_h

#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgAssetMetaData>();

#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAssetObjectMetaDataBranch) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetObject); \
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetObjectMetaDataBranch(Z_Param_AssetObject,Z_Param_Out_MetaData,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetObjectMetaData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetObject); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetObjectMetaData(Z_Param_AssetObject,Z_Param_Out_Success,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetaDataKeyBranch) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetMetaDataKeyBranch(Z_Param_AssetObject,Z_Param_Key,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetObjectsWithMetaDataKey) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MetaDataKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<UObject*,FS_ElgAssetMetaData>*)Z_Param__Result=UElgEditorBP_Assets::GetAssetObjectsWithMetaDataKey(Z_Param_Out_AssetObjects,Z_Param_MetaDataKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetObjectsMetaData) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects); \
		P_GET_UBOOL(Z_Param_SkipWithoutMetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<UObject*,FS_ElgAssetMetaData>*)Z_Param__Result=UElgEditorBP_Assets::GetAssetObjectsMetaData(Z_Param_Out_AssetObjects,Z_Param_SkipWithoutMetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetObjects) \
	{ \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataStructs); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetObjects(Z_Param_Out_AssetDataStructs,Z_Param_Out_AssetObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetMetaDataBranch) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetMetaDataBranch(Z_Param_Out_AssetDataStruct,Z_Param_Out_MetaData,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetMetaData) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetMetaData(Z_Param_Out_AssetDataStruct,Z_Param_Out_Success,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDiskPath) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetDiskPath(Z_Param_Out_AssetDataStruct); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDateModifiedAsString) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AssetDateTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDateModifiedAsString(Z_Param_Out_AssetDataStruct,Z_Param_Out_AssetDateTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDateModified) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_AssetDateTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDateModified(Z_Param_Out_AssetDataStruct,Z_Param_Out_AssetDateTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetTags) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Tags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetTags(Z_Param_Out_AssetDataStruct,Z_Param_Out_Tags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFixRedirectorsByPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL(Z_Param_RecursivePaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::FixRedirectorsByPath(Z_Param_Path,Z_Param_RecursivePaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFixRedirectors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::FixRedirectors(); \
		P_NATIVE_END; \
	}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAssetObjectMetaDataBranch) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetObject); \
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetObjectMetaDataBranch(Z_Param_AssetObject,Z_Param_Out_MetaData,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetObjectMetaData) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetObject); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetObjectMetaData(Z_Param_AssetObject,Z_Param_Out_Success,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetaDataKeyBranch) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_AssetObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Key); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetMetaDataKeyBranch(Z_Param_AssetObject,Z_Param_Key,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetObjectsWithMetaDataKey) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects); \
		P_GET_PROPERTY(UNameProperty,Z_Param_MetaDataKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<UObject*,FS_ElgAssetMetaData>*)Z_Param__Result=UElgEditorBP_Assets::GetAssetObjectsWithMetaDataKey(Z_Param_Out_AssetObjects,Z_Param_MetaDataKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetObjectsMetaData) \
	{ \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects); \
		P_GET_UBOOL(Z_Param_SkipWithoutMetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<UObject*,FS_ElgAssetMetaData>*)Z_Param__Result=UElgEditorBP_Assets::GetAssetObjectsMetaData(Z_Param_Out_AssetObjects,Z_Param_SkipWithoutMetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetObjects) \
	{ \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDataStructs); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetObjects(Z_Param_Out_AssetDataStructs,Z_Param_Out_AssetObjects); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetMetaDataBranch) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData); \
		P_GET_ENUM_REF(EBPEditorOutputValidBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetMetaDataBranch(Z_Param_Out_AssetDataStruct,Z_Param_Out_MetaData,(EBPEditorOutputValidBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetMetaData) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_UBOOL_REF(Z_Param_Out_Success); \
		P_GET_STRUCT_REF(FS_ElgAssetMetaData,Z_Param_Out_MetaData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetMetaData(Z_Param_Out_AssetDataStruct,Z_Param_Out_Success,Z_Param_Out_MetaData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDiskPath) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetDiskPath(Z_Param_Out_AssetDataStruct); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDateModifiedAsString) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_AssetDateTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDateModifiedAsString(Z_Param_Out_AssetDataStruct,Z_Param_Out_AssetDateTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDateModified) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_AssetDateTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDateModified(Z_Param_Out_AssetDataStruct,Z_Param_Out_AssetDateTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetTags) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_Tags); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetTags(Z_Param_Out_AssetDataStruct,Z_Param_Out_Tags); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFixRedirectorsByPath) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Path); \
		P_GET_UBOOL(Z_Param_RecursivePaths); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::FixRedirectorsByPath(Z_Param_Path,Z_Param_RecursivePaths); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFixRedirectors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::FixRedirectors(); \
		P_NATIVE_END; \
	}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Assets(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Assets_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Assets, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Assets)


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Assets(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Assets_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Assets, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Assets)


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Assets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Assets) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Assets); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Assets); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Assets(UElgEditorBP_Assets&&); \
	NO_API UElgEditorBP_Assets(const UElgEditorBP_Assets&); \
public:


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Assets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Assets(UElgEditorBP_Assets&&); \
	NO_API UElgEditorBP_Assets(const UElgEditorBP_Assets&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Assets); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Assets); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Assets)


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_PRIVATE_PROPERTY_OFFSET
#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_57_PROLOG
#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_PRIVATE_PROPERTY_OFFSET \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_PRIVATE_PROPERTY_OFFSET \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS_NO_PURE_DECLS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_Assets>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
