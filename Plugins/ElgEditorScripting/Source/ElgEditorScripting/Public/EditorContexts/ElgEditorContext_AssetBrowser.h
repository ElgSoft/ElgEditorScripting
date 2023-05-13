// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "AssetRegistry/AssetData.h"
#include "AssetRegistry/ARFilter.h"
#include "ElgEditorContext_AssetBrowser.generated.h"


#pragma region Delegates

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnAssetChangedSignature, const FAssetData&, AssetData);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElgEditorEventsOnAssetRenamedSignature, const FAssetData&, AssetData, const FString&, OldPath);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FElgEditorEventsAssetSignature);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElgEditorEventsOnAssetSelectionChangedSignature, const TArray<FAssetData>&, SelectedAssets, bool, bIsPrimaryBrowser);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElgEditorEventsOnFilterChangedSignature, const FARFilter&, NewFilter, bool, bIsPrimaryBrowser);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FElgEditorEventsOnSearchBoxChangedSignature, const FText&, SearchText, bool, bIsPrimaryBrowser);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnAssetPathChangedSignature, const FString&, NewPath);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnAssetSelectionSignature, const FAssetData&, AssetData);

#pragma endregion

/**
 * 
 */
UCLASS(Blueprintable)
class ELGEDITORSCRIPTING_API UElgEditorContext_AssetBrowser : public UObject
{
	GENERATED_BODY()

public:

#pragma region Setup

	virtual ~UElgEditorContext_AssetBrowser();

	void Setup();

#pragma endregion	

#pragma region AssetRegistry

	/** Event for when assets are added to the registry */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnAssetChangedSignature OnAssetAdded;	
	void HandleOnAssetAdded(const FAssetData& InAsset);

	/** Event for when assets are removed from the registry */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnAssetChangedSignature OnAssetRemoved;
	void HandleOnAssetRemoved(const FAssetData& InAsset);

	/** Event for when assets are updated in the registry */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnAssetChangedSignature OnAssetUpdated;
	void HandleOnAssetUpdated(const FAssetData& InAsset);

	/** Event for when assets are renamed in the registry */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnAssetRenamedSignature OnAssetRenamed;
	void HandleOnAssetRenamed(const FAssetData& InAsset, const FString& InOldObjectPath);

	/** Event for when the asset registry is done loading files */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsAssetSignature OnFilesLoaded;
	void HandleOnFilesLoaded();

#pragma endregion

#pragma region ContenBrowser

	/* Event for when the asset selection in the Content Browser change */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnAssetSelectionChangedSignature OnAssetSelectionChanged;
	void HandleOnAssetSelectionChanged(const TArray<FAssetData>& NewSelectedAssets, bool bIsPrimaryBrowser);

	/* Event for when a asset is selected in the Content Browser */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnAssetSelectionSignature OnAssetSelected;

	/* Event for when a asset is deselected in the Content Browser */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnAssetSelectionSignature OnAssetDeselected;
	
	TArray<FAssetData> OldAssetSelection;

	/* Event for when the Content path is changed in the Content Browser */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnAssetPathChangedSignature OnAssetPathChanged;
	void HandleOnAssetPathChanged(const FString& NewPath);

	/* Event for when the Filter is changed in the Content Browser */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnFilterChangedSignature OnFilterChanged;
	void HandleOnFilterChanged(const FARFilter& NewFilter, bool bIsPrimaryBrowser);

	/* Event for when the Search text is changed in the Content Browser */
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnSearchBoxChangedSignature OnSearchBoxChanged;
	void HandleOnSearchBoxChanged(const FText& InSearchText, bool bIsPrimaryBrowser);


#pragma endregion

};
