// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
class UObject;
struct FS_ElgAssetMetaData;
enum class EBPEditorOutputValidBranch : uint8;
class UObject; struct FS_ElgAssetMetaData;
struct FDateTime;
 
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_Assets_generated_h
#error "ElgEditorBP_Assets.generated.h already included, missing '#pragma once' in ElgEditorBP_Assets.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_Assets_generated_h

#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_ElgAssetMetaData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ELGEDITORSCRIPTING_API UScriptStruct* StaticStruct<struct FS_ElgAssetMetaData>();

#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSelectedPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UElgEditorBP_Assets::GetSelectedPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAssetRefs) \
	{ \
		P_GET_STRUCT(FAssetData,Z_Param_AssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Assets::HasAssetRefs(Z_Param_AssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependenciesByObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Dependencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDependenciesByObject(Z_Param_Object,Z_Param_Out_Dependencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependenciesByPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Dependencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDependenciesByPath(Z_Param_AssetPath,Z_Param_Out_Dependencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependencies) \
	{ \
		P_GET_STRUCT(FAssetData,Z_Param_AssetData); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Dependencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDependencies(Z_Param_AssetData,Z_Param_Out_Dependencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetReferencersByObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Referencers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetReferencersByObject(Z_Param_Object,Z_Param_Out_Referencers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetReferencersByPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Referencers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetReferencersByPath(Z_Param_AssetPath,Z_Param_Out_Referencers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetReferencers) \
	{ \
		P_GET_STRUCT(FAssetData,Z_Param_AssetData); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Referencers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetReferencers(Z_Param_AssetData,Z_Param_Out_Referencers); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetAssetObjectsByPath) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetObjectsByPath(Z_Param_Out_AssetPaths,Z_Param_Out_AssetObjects); \
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
	DECLARE_FUNCTION(execGetAssetPath) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetPath(Z_Param_Out_AssetDataStruct); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetName) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetName(Z_Param_Out_AssetDataStruct); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDatasByPath) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDatas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDatasByPath(Z_Param_Out_AssetPaths,Z_Param_Out_AssetDatas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetPathFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetPathFromObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDataFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=UElgEditorBP_Assets::GetAssetDataFromObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDataFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=UElgEditorBP_Assets::GetAssetDataFromPath(Z_Param_AssetPath); \
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


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSelectedPaths) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UElgEditorBP_Assets::GetSelectedPaths(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasAssetRefs) \
	{ \
		P_GET_STRUCT(FAssetData,Z_Param_AssetData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Assets::HasAssetRefs(Z_Param_AssetData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependenciesByObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Dependencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDependenciesByObject(Z_Param_Object,Z_Param_Out_Dependencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependenciesByPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Dependencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDependenciesByPath(Z_Param_AssetPath,Z_Param_Out_Dependencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDependencies) \
	{ \
		P_GET_STRUCT(FAssetData,Z_Param_AssetData); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Dependencies); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDependencies(Z_Param_AssetData,Z_Param_Out_Dependencies); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetReferencersByObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Referencers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetReferencersByObject(Z_Param_Object,Z_Param_Out_Referencers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetReferencersByPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Referencers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetReferencersByPath(Z_Param_AssetPath,Z_Param_Out_Referencers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetReferencers) \
	{ \
		P_GET_STRUCT(FAssetData,Z_Param_AssetData); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Referencers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetReferencers(Z_Param_AssetData,Z_Param_Out_Referencers); \
		P_NATIVE_END; \
	} \
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
	DECLARE_FUNCTION(execGetAssetObjectsByPath) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths); \
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_AssetObjects); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetObjectsByPath(Z_Param_Out_AssetPaths,Z_Param_Out_AssetObjects); \
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
	DECLARE_FUNCTION(execGetAssetPath) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetPath(Z_Param_Out_AssetDataStruct); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetName) \
	{ \
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetDataStruct); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetName(Z_Param_Out_AssetDataStruct); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDatasByPath) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_AssetPaths); \
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_AssetDatas); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Assets::GetAssetDatasByPath(Z_Param_Out_AssetPaths,Z_Param_Out_AssetDatas); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetPathFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UElgEditorBP_Assets::GetAssetPathFromObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDataFromObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=UElgEditorBP_Assets::GetAssetDataFromObject(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAssetDataFromPath) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AssetPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FAssetData*)Z_Param__Result=UElgEditorBP_Assets::GetAssetDataFromPath(Z_Param_AssetPath); \
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


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Assets(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Assets_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Assets, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Assets)


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Assets(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Assets_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Assets, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Assets)


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_STANDARD_CONSTRUCTORS \
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


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_ENHANCED_CONSTRUCTORS \
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


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_PRIVATE_PROPERTY_OFFSET
#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_57_PROLOG
#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_PRIVATE_PROPERTY_OFFSET \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_PRIVATE_PROPERTY_OFFSET \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_INCLASS_NO_PURE_DECLS \
	D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_Assets>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D___TEST__ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Assets_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
