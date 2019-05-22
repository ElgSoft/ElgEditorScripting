// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ElgEditorBP_Enum.h"
#include "AssetData.h"
#include "ElgEditorBP_Assets.generated.h"

struct FAssetData;



#pragma region Struct

USTRUCT(BlueprintType)
struct ELGEDITORSCRIPTING_API FS_ElgAssetMetaData
{
	GENERATED_USTRUCT_BODY()

	/* The owner object of the meta data */
	UPROPERTY(BlueprintReadOnly, Category = "AssetMetaData")
		UObject* Object;

	/* Sorted Meta Data keys */
	UPROPERTY(BlueprintReadOnly, Category = "AssetMetaData")
		TArray<FName> Keys;

	/* The real Meta Data map */
	UPROPERTY(BlueprintReadOnly, Category = "AssetMetaData")
		TMap<FName, FString> MetaData;

	FS_ElgAssetMetaData(UObject* TheObject, TArray<FName> MetaDataKeys, TMap<FName, FString> TheMetaData)
	{
		Object = TheObject;
		Keys = MetaDataKeys;
		MetaData = TheMetaData;
	}

	FS_ElgAssetMetaData()
	{
		Object = nullptr;
		Keys.Empty();
		MetaData.Empty();
	}
};

#pragma endregion



/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorBP_Assets : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

#pragma region Redirectors

	/* Fix all redirectors in the Content folder /Game/...  */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Asset")
		static void FixRedirectors();

	/* Fix all redirectors in the specified path and its sub folders  */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Asset")
		static void FixRedirectorsByPath(const FName Path, const bool RecursivePaths=true);

#pragma endregion

#pragma region AssetData

	/* Return all the TagsAndValues the asset has. */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Asset")
		static void GetAssetTags(const FAssetData& AssetDataStruct, TMap<FName, FString>& Tags);
	
	/* Get the DateTime object for the asset */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Asset")
		static void GetAssetDateModified(const FAssetData& AssetDataStruct, FDateTime& AssetDateTime);

	/* Get the DateTime as a string for the asset */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Asset")
		static void GetAssetDateModifiedAsString(const FAssetData& AssetDataStruct, FString& AssetDateTime);

	/* Get the full disk path for the asset */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Asset")
		static FString GetAssetDiskPath(const FAssetData& AssetDataStruct);

	/* Get the assets meta data struct, Success is true if it has meta data. */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Asset")
		static void GetAssetMetaData(const FAssetData& AssetDataStruct, bool& Success, FS_ElgAssetMetaData& MetaData);

	/* Get the assets meta data struct branch */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Asset", meta=(ExpandEnumAsExecs = "Branches"))
		static void GetAssetMetaDataBranch(const FAssetData& AssetDataStruct, FS_ElgAssetMetaData& MetaData, EBPEditorOutputValidBranch& Branches);

#pragma endregion

#pragma region GetAssetObjects

	/* Get the asset data as asset objects array*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Asset")
		static void GetAssetObjects(const TArray<FAssetData>& AssetDataStructs, TArray<UObject*>& AssetObjects);


#pragma endregion

#pragma region MetaData

	/* Get all MetaData for the AssetObjects in a struct with an sorted Keys array */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Asset")
		static TMap<UObject*, FS_ElgAssetMetaData> GetAssetObjectsMetaData(const TArray<UObject*>& AssetObjects, const bool SkipWithoutMetaData=true);

	/* Get all AssetObjects that has a Meta Data Key */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Asset")
		static TMap<UObject*, FS_ElgAssetMetaData> GetAssetObjectsWithMetaDataKey(const TArray<UObject*>& AssetObjects, const FName MetaDataKey);

	/* Return the meta data for the key with branch output pins */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Asset", meta = (Keywords = "ElgSoft Editor Blueprint", ExpandEnumAsExecs = "Branches"))
		static FString GetMetaDataKeyBranch(UObject* AssetObject, FName Key, EBPEditorOutputValidBranch& Branches);

	/* Get the asset objects meta data struct, Success is true if it has meta data. */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Asset")
		static void GetAssetObjectMetaData(UObject* AssetObject, bool& Success, FS_ElgAssetMetaData& MetaData);

	/* Get the asset objects meta data struct branch */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Asset", meta = (ExpandEnumAsExecs = "Branches"))
		static void GetAssetObjectMetaDataBranch(UObject* AssetObject, FS_ElgAssetMetaData& MetaData, EBPEditorOutputValidBranch& Branches);


#pragma endregion

};


