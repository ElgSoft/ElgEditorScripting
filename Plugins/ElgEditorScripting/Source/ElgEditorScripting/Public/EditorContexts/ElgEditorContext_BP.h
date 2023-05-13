// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/TextProperty.h"
#include "ElgEditorContext_Notification.h"
#include "ElgEditorContext_BP.generated.h"

class UElgEditorContext_LevelEditor;
class UElgEditorContext_AssetBrowser;
class UElgEditorContext_Config;
class AActor;
class UElgEditorContext_Jason;


/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorContext_BP : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

#pragma region GetContext

	/* 
		Returns a LevelEditorContext object that can be used to bind some useful events,
		OnSelectionChanged, ActorAdded, EnterPIE, Change EditorMode etc.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|LevelEditor")
		static UElgEditorContext_LevelEditor* GetLevelEditorContext();

	/* 
		Return a AssetBrowserContext object so you can bind some useful events,
		AssetSelectionChanged, AssetCreated, AssetRemoved, AssetRenamed etc.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|AssetBrowser")
		static UElgEditorContext_AssetBrowser* GetAssetBrowserContext();

	/*
		Return a ConfigContext object so you can read/write to a config files section,	
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Config")
		static UElgEditorContext_Config* GetConfigContext(FString ConfigFilename, FString ConfigSection);

	/*
		Return a NotificationContext object so you can pop up a notification in the right bottom corner.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Notification", Meta = (DefaultToSelf = "InGraphObject", AdvancedDisplay = "2", ShowNotification = "true"))
		static UElgEditorContext_Notification* GetNotificationContext(const FS_ElgNotificationInfo& Info, const bool ShowNotification, UObject* InGraphObject);

	/*
		Return a DirectoryWatcherContext object.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|DirectoryWatcher")
		static UElgEditorContext_DirWatcher* GetDirectoryWatcherContext();

	UFUNCTION(BlueprintPure, Category = "ElgEditor|Jason")
		static UElgEditorContext_Jason* GetJasonContext();

	/**
	 * Show a SlowTask UI 
	 * Construct this scope from an amount of work to do, and a message to display
	 * @param		InTotalAmountOfWork		Arbitrary number of work units to perform (can be a percentage or number of steps).
	 *										0 indicates that no progress frames are to be entered in this scope (automatically enters a frame encompassing the entire scope)
	 * @param		InDefaultMessage		A message to display to the user to describe the purpose of the scope
	 * @param		bShowProgressDialog		When false, this scope will have no effect. Allows for proper scoped objects that are conditionally hidden.
	 * @param		bShowCancelButton		Whether to show a cancel button on the dialog or not.
	 */	
	UFUNCTION(BlueprintCallable, Category= "ElgEditor|SlowTask")
		static void ShowSlowTask(UElgEditorContext_SlowTask*& OutSlowTask, float InTotalAmountOfWork = 1.0f, const FText InDefaultMessage = FText(), bool bShowProgressDialog = true, bool bShowCancelButton = false);

#pragma endregion

#pragma region Notification

	/* Show a quick notification message */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Notification", Meta = (DefaultToSelf = "InGraphObject", AdvancedDisplay = "1", Duration = "8.0"))
		static void ShowQuickNotification(const FText Text, const FS_ElgNotificationIcon Icon, EBPNotificationCompletionState State, const float Duration, FS_ElgNotificationButtons Buttons, UObject* InGraphObject);

#pragma endregion

#pragma region StateChecks

	/* Return if we currently are in the Editor and no PIE is running */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Editor")
		static void IsInEditor(bool& Result);

	/* Return if we currently playing in the Editor or not */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Editor")
		static void IsInPIE(bool& Result);

#pragma endregion

};