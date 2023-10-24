// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com


#include "ElgEditorBP_Assets.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include <AssetToolsModule.h>
#include "AssetRegistry/AssetData.h"
#include "Misc/Paths.h"
#include <Engine/World.h>
#include "HAL\FileManager.h"
#include "UObject\MetaData.h"
#include <FileHelpers.h>
#include <ContentBrowserModule.h>
#include "Modules\ModuleManager.h"
#include <IContentBrowserSingleton.h>
#include <HAL/PlatformFilemanager.h>

#include <Editor.h>


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
	assetFilter.ClassPaths.Add(GetClassPathName(UObjectRedirector::StaticClass()));

	// Query for a list of assets in the selected paths
	TArray<FAssetData> assetList;
	assetRegistryModule.Get().GetAssets(assetFilter, assetList);

	if (assetList.Num() > 0)
	{
		TArray<UObjectRedirector*> redirectors;
		for (const auto& asset : assetList) {
			FAssetData assetData = assetRegistryModule.Get().GetAssetByObjectPath(asset.GetSoftObjectPath(), false);
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
	for (TPair<FName, FAssetTagValueRef> Itt : AssetDataStruct.TagsAndValues) {
		Tags.Add(Itt.Key, Itt.Value.AsString());
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
	const bool bIsWorldAsset = (AssetDataStruct.AssetClassPath == GetClassPathName(UWorld::StaticClass()));
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


FAssetData UElgEditorBP_Assets::GetAssetDataFromPath(const FString& AssetPath)
{
	FAssetData AssetData = FAssetData();
	if (AssetPath.IsEmpty())
	{
		return AssetData;
	}

	if (FEditorFileUtils::IsMapPackageAsset(AssetPath)) {
		return AssetData;
	}

	FSoftObjectPath softObjectPath = FSoftObjectPath(AssetPath);
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	AssetData = AssetRegistryModule.Get().GetAssetByObjectPath(softObjectPath);
	return AssetData;
}


FAssetData UElgEditorBP_Assets::GetAssetDataFromObject(const UObject* Object)
{
	FString assetPath = GetAssetPathFromObject(Object);
	return GetAssetDataFromPath(assetPath);
}


FString UElgEditorBP_Assets::GetAssetPathFromObject(const UObject* AssetObject)
{
	FString path;
	if (AssetObject == nullptr) return path;

	AssetObject->GetPathName().Split("/", &path, nullptr, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
	return FString::Printf(TEXT("%s/%s"), *path, *AssetObject->GetName());
}

void UElgEditorBP_Assets::GetAssetDatasByPath(const TArray<FString>& AssetPaths, TArray<FAssetData>& AssetDatas)
{
	AssetDatas.Empty();

	for (FString path : AssetPaths) {
		FAssetData assetData = GetAssetDataFromPath(path);
		if (!assetData.IsValid()) continue;
		AssetDatas.AddUnique(assetData);
	}
}

FString UElgEditorBP_Assets::GetAssetName(const FAssetData& AssetDataStruct)
{	
	if (!AssetDataStruct.IsValid()) return "";
	return AssetDataStruct.AssetName.ToString();
}


FString UElgEditorBP_Assets::GetAssetPath(const FAssetData& AssetDataStruct)
{
	if (!AssetDataStruct.IsValid()) return "";
	return AssetDataStruct.GetSoftObjectPath().ToString();
}

bool UElgEditorBP_Assets::IsAssetUWorldType(const FAssetData& AssetDataStruct)
{
	if (!AssetDataStruct.IsValid()) return false;
	return (AssetDataStruct.AssetClassPath == GetClassPathName(UWorld::StaticClass()));
}

UPackage* UElgEditorBP_Assets::GetPackage(const FAssetData& AssetDataStruct)
{
	if (!AssetDataStruct.IsValid()) return nullptr;
	return AssetDataStruct.GetPackage();
}

#pragma endregion

#pragma region GetAssets

void UElgEditorBP_Assets::GetAssetObjectByPath(const FString InAssetPath, UObject*& AssetObject)
{
	AssetObject = nullptr;
	FAssetData assetData = GetAssetDataFromPath(InAssetPath);
	if (assetData.IsValid()) {
		AssetObject = assetData.GetAsset();
	}
}



void UElgEditorBP_Assets::GetAssetObjects(const TArray<FAssetData>& AssetDataStructs, TArray<UObject*>& AssetObjects)
{
	AssetObjects.Empty();

	for (FAssetData assetData : AssetDataStructs) {
		AssetObjects.Add(assetData.GetAsset());
	}
}


void UElgEditorBP_Assets::GetAssetObjectsByPath(const TArray<FString>& AssetPaths, TArray<UObject*>& AssetObjects)
{
	AssetObjects.Empty();

	for (FString path : AssetPaths) {
		FAssetData assetData = GetAssetDataFromPath(path);
		if (!assetData.IsValid()) continue;
		AssetObjects.AddUnique(assetData.GetAsset());
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
			keys.Sort([](FName A, FName B) {return A.FastLess(B);});
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
			keys.Sort([](FName A, FName B) {return A.FastLess(B); });

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
		keys.Sort([](FName A, FName B) {return A.FastLess(B); });
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

#pragma region References


void UElgEditorBP_Assets::GetAssetReferencers(const FAssetData AssetData, TArray<FString>& Referencers)
{
	if (!AssetData.IsValid()) return;	

	GetReferenceDependencies(AssetData, true, true, true, Referencers);
}

void UElgEditorBP_Assets::GetAssetReferencersByPath(const FString AssetPath, TArray<FString>& Referencers)
{
	FAssetData assetData = GetAssetDataFromPath(AssetPath);
	if (!assetData.IsValid()) return;

	GetReferenceDependencies(assetData, true, true, true, Referencers);
}


void UElgEditorBP_Assets::GetAssetReferencersByObject(const UObject* Object, TArray<FString>& Referencers)
{
	FAssetData assetData = GetAssetDataFromObject(Object);
	GetAssetReferencers(assetData, Referencers);
}


void UElgEditorBP_Assets::GetAssetDependencies(const FAssetData AssetData, TArray<FString>& Dependencies)
{
	if (!AssetData.IsValid()) return;

	GetReferenceDependencies(AssetData, false, true, true, Dependencies);
}


void UElgEditorBP_Assets::GetAssetDependenciesByPath(const FString AssetPath, TArray<FString>& Dependencies)
{
	FAssetData assetData = GetAssetDataFromPath(AssetPath);
	if (!assetData.IsValid()) return;

	GetAssetDependencies(assetData, Dependencies);
}


void UElgEditorBP_Assets::GetAssetDependenciesByObject(const UObject* Object, TArray<FString>& Dependencies)
{
	FAssetData assetData = GetAssetDataFromObject(Object);
	GetAssetDependencies(assetData, Dependencies);
}


bool UElgEditorBP_Assets::HasAssetRefs(const FAssetData AssetData)
{
	if (!AssetData.IsValid()) return false;

	TArray<FString> Dependencies;
	GetReferenceDependencies(AssetData, false, true, false, Dependencies);

	if (Dependencies.Num() == 0) {
		return false;
	}
	return true;
}


void UElgEditorBP_Assets::GetReferenceDependencies(const FAssetData AssetData, const bool bReferencers, const bool bExcludeNativePackage, const bool bExcludeSelf,  TArray<FString>& Referencers)
{
	// load the asset
	UObject* FoundObject = AssetData.GetAsset();

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetIdentifier> ReferenceNames;

	if (bReferencers) {		
		AssetRegistryModule.Get().GetReferencers(AssetData.PackageName, ReferenceNames, UE::AssetRegistry::EDependencyCategory::All);
	}
	else {
		AssetRegistryModule.Get().GetDependencies(AssetData.PackageName, ReferenceNames, UE::AssetRegistry::EDependencyCategory::All);
	}

	// skip ourself in the referencer list 
	// should skip /Script/ paths also or maybe has a option
	FString packageName = AssetData.PackageName.ToString();
	for (const FAssetIdentifier& assetId : ReferenceNames) {
		const FString name = assetId.PackageName.ToString();
		
		if (bExcludeSelf && name.Equals(packageName)) continue;
		if (bExcludeNativePackage && name.StartsWith("/Script")) continue;

		Referencers.AddUnique(assetId.PackageName.ToString());
	}
}

#pragma endregion

#pragma region ContentBrowser

TArray<FString> UElgEditorBP_Assets::GetSelectedPaths()
{
	TArray<FString> selectedPath;
	FContentBrowserModule& ContentBrowserModule = FModuleManager::GetModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	ContentBrowserModule.Get().GetSelectedPathViewFolders(selectedPath);
	return selectedPath;
}
#pragma endregion

#pragma region Paths

FString UElgEditorBP_Assets::AssetPathToDiskPath(const FString& InAssetPath)
{
	FAssetData assetData = GetAssetDataFromPath(InAssetPath);
	if (!assetData.IsValid()) {
		UE_LOG(LogTemp, Warning, TEXT("AssetPathToDiskPath:: No AssetData found for [%s], try NewAssetPathToDiskPath if the asset don't exist yet."), *InAssetPath);
		return "";
	}
	return GetAssetDiskPath(assetData);	
}

TArray<FString> UElgEditorBP_Assets::AssetPathsToDiskPaths(TArray<FString> InAssetPaths)
{
	TArray<FString> paths;
	for (FString path : InAssetPaths) {
		paths.Add(AssetPathToDiskPath(path));
	}
	return paths;
}

FString UElgEditorBP_Assets::NewAssetPathToDiskPath(const FString& InAssetPath, const bool& bIsWorldAsset /*= false*/)
{
	const FString extension = bIsWorldAsset ? FPackageName::GetMapPackageExtension() : FPackageName::GetAssetPackageExtension();
	const FString filePath = FPackageName::LongPackageNameToFilename(InAssetPath, extension);
	const FString fullFilePath = FPaths::ConvertRelativePathToFull(filePath);
	return fullFilePath;
}

FTopLevelAssetPath UElgEditorBP_Assets::GetClassPathName(const UClass* InClass)
{
	if (InClass) {
		return InClass->GetClassPathName();	
	}
	return FTopLevelAssetPath();
}

FTopLevelAssetPath UElgEditorBP_Assets::GetObjectPathName(const UObject* InObject)
{
	if (InObject) {
		return GetClassPathName(InObject->GetClass());
	}
	return FTopLevelAssetPath();
}

FString UElgEditorBP_Assets::FileNameToLongPackageName(const FString InFileName)
{
	return FPackageName::FilenameToLongPackageName(InFileName);
}

#pragma endregion

#pragma region DiffAssets

void UElgEditorBP_Assets::DiffAssets(UObject* OldAsset, UObject* NewAsset, const FString OldAssetRevisionString)
{
	if (!OldAsset || !NewAsset) {
		UE_LOG(LogTemp, Warning, TEXT("Need two valid Asset objects to diff..."));
		return;
	}

	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));
	
	FRevisionInfo OldRevision;
	OldRevision.Revision = OldAssetRevisionString;

	FRevisionInfo NewRevision;
	NewRevision.Revision = TEXT("");

	AssetToolsModule.Get().DiffAssets(OldAsset, NewAsset, OldRevision, NewRevision);
}

void UElgEditorBP_Assets::DiffAssetData(const FAssetData OldAsset, const FAssetData NewAsset, const FString OldAssetRevisionString)
{
	if (!OldAsset.IsValid() || !NewAsset.IsValid()) {
		UE_LOG(LogTemp, Warning, TEXT("Need two valid Asset data to diff..."));
		return;
	}
	UObject* oldAsset = OldAsset.GetAsset();
	UObject* newAsset = NewAsset.GetAsset();
	DiffAssets(oldAsset, newAsset, OldAssetRevisionString);
}

void UElgEditorBP_Assets::DiffAssetPath(const FString OldAssetPath, const FString NewAssetPath, const FString OldAssetRevisionString)
{
	if (OldAssetPath.IsEmpty() || NewAssetPath.IsEmpty()) {
		UE_LOG(LogTemp, Warning, TEXT("Need two valid Asset Path to diff..."));
		return;
	}
	FAssetData oldAsset = GetAssetDataFromPath(OldAssetPath);
	FAssetData newAsset = GetAssetDataFromPath(NewAssetPath);
	DiffAssetData(oldAsset, newAsset, OldAssetRevisionString);
}

void UElgEditorBP_Assets::DiffAssetWithExternalAsset(UObject* NewAsset, const FString ExternalAssetFilePath, const FString ExternalAssetName)
{
	if (!NewAsset) {
		UE_LOG(LogTemp, Warning, TEXT("Need a valid asset to diff"));
		return;
	}
	if (ExternalAssetName.IsEmpty()) {
		UE_LOG(LogTemp, Warning, TEXT("Need a valid ExternalAssetName to diff"));
		return;
	}
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*ExternalAssetFilePath)) {
		UE_LOG(LogTemp, Warning, TEXT("Failed to find any file at %s"), *ExternalAssetFilePath);
		return;
	}

	FString path = FPaths::ConvertRelativePathToFull(ExternalAssetFilePath);
	UPackage* tempPackage = LoadPackage(nullptr, *path, LOAD_ForDiff | LOAD_DisableCompileOnLoad);
	if (tempPackage != nullptr) {
		UObject* oldObject = FindObject<UObject>(tempPackage, *ExternalAssetName);
		if (oldObject != nullptr) {
			DiffAssets(oldObject, NewAsset, ExternalAssetName);
		} 
		else  {
			UE_LOG(LogTemp, Warning, TEXT("Failed to find any asset with name %s in the package"), *ExternalAssetName);
			return;
		}
	} else {
		UE_LOG(LogTemp, Warning, TEXT("Failed to load the package at %s"), *path);
		return;
	}
}

#pragma endregion
