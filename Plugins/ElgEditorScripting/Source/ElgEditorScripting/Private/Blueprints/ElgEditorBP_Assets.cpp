// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com


#include "ElgEditorBP_Assets.h"
#include <AssetRegistryModule.h>
#include <AssetToolsModule.h>
#include <AssetData.h>
#include "Misc/Paths.h"
#include <Engine/World.h>
#include "HAL\FileManager.h"
#include "UObject\MetaData.h"


#pragma region Redirectors

void UElgEditorBP_Assets::FixRedirectors()
{
	FixRedirectorsByPath("/Game/", true);
}

void UElgEditorBP_Assets::FixRedirectorsByPath(const FName Path, const bool RecursivePaths/*=true*/)
{
	FAssetRegistryModule& assetRegistryModule = FModuleManager::Get().LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

	// Form a filter for the root dir
	FARFilter assetFilter;
	assetFilter.bRecursivePaths = RecursivePaths;
	assetFilter.PackagePaths.Add(Path);
	assetFilter.ClassNames.Add(TEXT("ObjectRedirector"));

	// Query for a list of assets in the selected paths
	TArray<FAssetData> assetList;
	assetRegistryModule.Get().GetAssets(assetFilter, assetList);

	if (assetList.Num() > 0)
	{
		TArray<UObjectRedirector*> redirectors;
		
		for (const auto& asset : assetList)		
		{
			FString path = asset.ObjectPath.ToString();

			FAssetData assetData = assetRegistryModule.Get().GetAssetByObjectPath(*path, false);
			if (assetData.IsValid() && assetData.IsRedirector()) {				
				auto redirector = CastChecked<UObjectRedirector>(assetData.GetAsset());
				redirectors.Add(redirector);
			}
		}

		if (redirectors.Num() > 0) {
			// Load the asset tools module
			FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));
			AssetToolsModule.Get().FixupReferencers(redirectors);
		}
	}
}

#pragma endregion

#pragma region AssetData

void UElgEditorBP_Assets::GetAssetTags(const FAssetData& AssetDataStruct, TMap<FName, FString>& Tags)
{
	Tags.Empty();
	const FAssetDataTagMap& map = AssetDataStruct.TagsAndValues.GetMap();
	for (const TPair<FName, FString>& pair : map) {
		Tags.Add(pair.Key, pair.Value);
	}
}


void UElgEditorBP_Assets::GetAssetDateModified(const FAssetData& AssetDataStruct, FDateTime& AssetDateTime)
{
	if (!AssetDataStruct.IsValid()) return;

	const FString fullFilePath = GetAssetDiskPath(AssetDataStruct);
	if (!IFileManager::Get().FileExists(*fullFilePath)) {
		UE_LOG(LogTemp, Warning, TEXT("GetAssetDateModified:: Failed to find the file at [%s]"), *fullFilePath);
		return;
	}
	AssetDateTime = IFileManager::Get().GetTimeStamp(*fullFilePath);
}


void UElgEditorBP_Assets::GetAssetDateModifiedAsString(const FAssetData& AssetDataStruct, FString& AssetDateTime)
{
	FDateTime dateTime;
	GetAssetDateModified(AssetDataStruct, dateTime);
	AssetDateTime = dateTime.ToString();
}


FString UElgEditorBP_Assets::GetAssetDiskPath(const FAssetData& AssetDataStruct)
{
	if (!AssetDataStruct.IsValid()) return "";

	const FString PackageName = AssetDataStruct.PackageName.ToString();
	const bool bIsWorldAsset = (AssetDataStruct.AssetClass == UWorld::StaticClass()->GetFName());
	const FString Extension = bIsWorldAsset ? FPackageName::GetMapPackageExtension() : FPackageName::GetAssetPackageExtension();
	const FString FilePath = FPackageName::LongPackageNameToFilename(PackageName, Extension);
	const FString FullFilePath = FPaths::ConvertRelativePathToFull(FilePath);

	return FullFilePath;
}


void UElgEditorBP_Assets::GetAssetMetaData(const FAssetData& AssetDataStruct, bool& Success, FS_ElgAssetMetaData& MetaData)
{
	Success = false;
	MetaData.Keys.Empty();
	MetaData.MetaData.Empty();
	MetaData.Object = nullptr;
	
	if (!AssetDataStruct.IsValid()) return;
	
	GetAssetObjectMetaData(AssetDataStruct.GetAsset(), Success, MetaData);
}


void UElgEditorBP_Assets::GetAssetMetaDataBranch(const FAssetData& AssetDataStruct, FS_ElgAssetMetaData& MetaData, EBPEditorOutputValidBranch& Branches)
{
	bool hasMetaData;
	GetAssetMetaData(AssetDataStruct, hasMetaData, MetaData);
	if (hasMetaData) {
		Branches = EBPEditorOutputValidBranch::Valid;
	} else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}


#pragma endregion

#pragma region GetAssets

void UElgEditorBP_Assets::GetAssetObjects(const TArray<FAssetData>& AssetDataStructs, TArray<UObject*>& AssetObjects)
{
	AssetObjects.Empty();

	for (FAssetData assetData : AssetDataStructs) {
		AssetObjects.Add(assetData.GetAsset());
	}
}


#pragma endregion

#pragma region MetaData

TMap<UObject*, FS_ElgAssetMetaData> UElgEditorBP_Assets::GetAssetObjectsMetaData(const TArray<UObject*>& AssetObjects, const bool SkipWithoutMetaData)
{
	TMap<UObject*, FS_ElgAssetMetaData> objectMetaDataMap;

#if WITH_EDITORONLY_DATA
	for (UObject* object : AssetObjects) {
		if (object == nullptr) continue;

		FS_ElgAssetMetaData meta;
		meta.Object = object;

		TMap<FName, FString>* metaData = UMetaData::GetMapForObject(object);		
		if (metaData) {
			TArray<FName> keys;
			metaData->GetKeys(keys);
			keys.Sort();
			meta.Keys = keys;
			meta.MetaData = *metaData;
		} else if (SkipWithoutMetaData) {
			continue;
		}

		objectMetaDataMap.Add(object, meta);

	}
#endif // WITH_EDITORONLY_DATA
	return objectMetaDataMap;
}


TMap<UObject*, FS_ElgAssetMetaData> UElgEditorBP_Assets::GetAssetObjectsWithMetaDataKey(const TArray<UObject*>& AssetObjects, const FName MetaDataKey)
{
	TMap<UObject*, FS_ElgAssetMetaData> objectMetaDataMap;

#if WITH_EDITORONLY_DATA
	for (UObject* object : AssetObjects) {
		if (object == nullptr) continue;

		TMap<FName, FString>* metaData = UMetaData::GetMapForObject(object);
		if (metaData == nullptr) continue;

		if (metaData->Find(MetaDataKey)) {
			TArray<FName> keys;
			metaData->GetKeys(keys);
			keys.Sort();

			FS_ElgAssetMetaData meta;
			meta.Object = object;
			meta.Keys = keys;
			meta.MetaData = *metaData;
			objectMetaDataMap.Add(object, meta);
		}
	}
#endif // WITH_EDITORONLY_DATA
	return objectMetaDataMap;
}


FString UElgEditorBP_Assets::GetMetaDataKeyBranch(UObject* AssetObject, FName Key, EBPEditorOutputValidBranch& Branches)
{
	FString value = FString();
	Branches = EBPEditorOutputValidBranch::Invalid;

#if WITH_EDITORONLY_DATA
	if (AssetObject)
	{
		value = AssetObject->GetOutermost()->GetMetaData()->GetValue(AssetObject, Key);		
		if (!value.IsEmpty()) {
			Branches = EBPEditorOutputValidBranch::Valid;
		}
	}
#endif // WITH_EDITORONLY_DATA
	return value;
}

void UElgEditorBP_Assets::GetAssetObjectMetaData(UObject* AssetObject, bool& Success, FS_ElgAssetMetaData& MetaData)
{
	Success = false;
	MetaData.Keys.Empty();
	MetaData.MetaData.Empty();
	MetaData.Object = nullptr;

	if (AssetObject == nullptr) return;

	MetaData.Object = AssetObject;

	TMap<FName, FString>* metaData = UMetaData::GetMapForObject(AssetObject);
	if (metaData) {
		TArray<FName> keys;
		metaData->GetKeys(keys);
		keys.Sort();
		MetaData.Keys = keys;
		MetaData.MetaData = *metaData;
		Success = true;
	}
}

void UElgEditorBP_Assets::GetAssetObjectMetaDataBranch(UObject* AssetObject, FS_ElgAssetMetaData& MetaData, EBPEditorOutputValidBranch& Branches)
{
	bool hasMetaData;
	GetAssetObjectMetaData(AssetObject, hasMetaData, MetaData);
	if (hasMetaData) {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	else {
		Branches = EBPEditorOutputValidBranch::Invalid;
	}
}

#pragma endregion
