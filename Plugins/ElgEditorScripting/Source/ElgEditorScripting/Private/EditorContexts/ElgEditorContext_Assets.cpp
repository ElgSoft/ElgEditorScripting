// Copyright 2019-2020 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorContext_AssetBrowser.h"
#include "Core\Public\Modules\ModuleManager.h"
#include <AssetRegistryModule.h>
#include <ContentBrowserModule.h>


#pragma region Setup

UElgEditorContext_AssetBrowser::~UElgEditorContext_AssetBrowser()
{
	if (FModuleManager::Get().IsModuleLoaded(TEXT("AssetRegistry"))) { // fix for some crash on exit as it couldn't get the module
		FAssetRegistryModule& assetRegistryModule = FModuleManager::Get().GetModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
		IAssetRegistry& assetRegistry = assetRegistryModule.Get();

		assetRegistry.OnAssetAdded().RemoveAll(this);
		assetRegistry.OnAssetRemoved().RemoveAll(this);
		assetRegistry.OnAssetRenamed().RemoveAll(this);
		assetRegistry.OnAssetUpdated().RemoveAll(this);
		assetRegistry.OnFilesLoaded().RemoveAll(this);
	}
	FContentBrowserModule& ContentBrowserModule = FModuleManager::GetModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	ContentBrowserModule.GetOnAssetSelectionChanged().RemoveAll(this);
	ContentBrowserModule.GetOnAssetPathChanged().RemoveAll(this);
	ContentBrowserModule.GetOnFilterChanged().RemoveAll(this);
	ContentBrowserModule.GetOnSearchBoxChanged().RemoveAll(this);
}

void UElgEditorContext_AssetBrowser::Setup()
{
	//FAssetRegistryModule& assetRegistryModule = FModuleManager::Get().LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	FAssetRegistryModule& assetRegistryModule = FModuleManager::Get().GetModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
	IAssetRegistry& assetRegistry = assetRegistryModule.Get();

	assetRegistry.OnAssetAdded().AddUObject(this, &UElgEditorContext_AssetBrowser::HandleOnAssetAdded);
	assetRegistry.OnAssetRemoved().AddUObject(this, &UElgEditorContext_AssetBrowser::HandleOnAssetRemoved);
	assetRegistry.OnAssetRenamed().AddUObject(this, &UElgEditorContext_AssetBrowser::HandleOnAssetRenamed);
	assetRegistry.OnAssetUpdated().AddUObject(this, &UElgEditorContext_AssetBrowser::HandleOnAssetUpdated);
	assetRegistry.OnFilesLoaded().AddUObject(this, &UElgEditorContext_AssetBrowser::HandleOnFilesLoaded);

	FContentBrowserModule& ContentBrowserModule = FModuleManager::GetModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	ContentBrowserModule.GetOnAssetSelectionChanged().AddUObject(this, &UElgEditorContext_AssetBrowser::HandleOnAssetSelectionChanged);
	ContentBrowserModule.GetOnAssetPathChanged().AddUObject(this, &UElgEditorContext_AssetBrowser::HandleOnAssetPathChanged);
	ContentBrowserModule.GetOnFilterChanged().AddUObject(this, &UElgEditorContext_AssetBrowser::HandleOnFilterChanged);
	ContentBrowserModule.GetOnSearchBoxChanged().AddUObject(this, &UElgEditorContext_AssetBrowser::HandleOnSearchBoxChanged);
}

#pragma endregion

#pragma region AssetRegistry

void UElgEditorContext_AssetBrowser::HandleOnAssetAdded(const FAssetData& InAsset)
{
	OnAssetAdded.Broadcast(InAsset);
}


void UElgEditorContext_AssetBrowser::HandleOnAssetRemoved(const FAssetData& InAsset)
{
	OnAssetRemoved.Broadcast(InAsset);
}


void UElgEditorContext_AssetBrowser::HandleOnAssetRenamed(const FAssetData& InAsset, const FString& InOldObjectPath)
{
	OnAssetRenamed.Broadcast(InAsset, InOldObjectPath);
}


void UElgEditorContext_AssetBrowser::HandleOnAssetUpdated(const FAssetData& InAsset)
{
	OnAssetUpdated.Broadcast(InAsset);
}


void UElgEditorContext_AssetBrowser::HandleOnFilesLoaded()
{
	OnFilesLoaded.Broadcast();
}

#pragma endregion

#pragma region ContentBrowser

void UElgEditorContext_AssetBrowser::HandleOnAssetSelectionChanged(const TArray<FAssetData>& NewSelectedAssets, bool bIsPrimaryBrowser)
{
	OnAssetSelectionChanged.Broadcast(NewSelectedAssets, bIsPrimaryBrowser);

	for (FAssetData asset : NewSelectedAssets) {
		bool found = false;
		for (FAssetData oldAsset : OldAssetSelection) {
			if (asset == oldAsset) {
				found = true;
				OldAssetSelection.Remove(asset); // asset is still selected so we can ignore it!
				break;
			}
		}
		if (!found) {
			OnAssetSelected.Broadcast(asset);  // new selection so let the world know about it!
		}
	}

	// if there still are old assets they are no longer selected so broadcast that
	if (OldAssetSelection.Num() > 0) {
		for (FAssetData asset : OldAssetSelection) {
			OnAssetDeselected.Broadcast(asset);
		}
	}

	OldAssetSelection = NewSelectedAssets;
}

void UElgEditorContext_AssetBrowser::HandleOnAssetPathChanged(const FString& NewPath)
{
	OnAssetPathChanged.Broadcast(NewPath);
}


void UElgEditorContext_AssetBrowser::HandleOnFilterChanged(const FARFilter& NewFilter, bool bIsPrimaryBrowser)
{
	OnFilterChanged.Broadcast(NewFilter, bIsPrimaryBrowser);
}

void UElgEditorContext_AssetBrowser::HandleOnSearchBoxChanged(const FText& InSearchText, bool bIsPrimaryBrowser)
{
	OnSearchBoxChanged.Broadcast(InSearchText, bIsPrimaryBrowser);
}

#pragma endregion
