// Copyright 2019-2022 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElgEditorContext_Manager.generated.h"

class UElgEditorContext_LevelEditor;
class UElgEditorContext_AssetBrowser;
class UElgEditorContext_Config;
class UElgEditorContext_Notification;
struct FS_ElgNotificationInfo;
class UElgEditorContext_DirWatcher;

/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorContext_Manager : public UObject
{
	GENERATED_BODY()

public:
	UElgEditorContext_LevelEditor* GetLevelEditorContext();
	
	UElgEditorContext_AssetBrowser* GetAssetBrowserContext();

	/* get a Config object for the filename and section */
	UElgEditorContext_Config* GetConfigContext(FString ConfigFilename, FString ConfigSection);

	UElgEditorContext_Notification* GetNotificationContext(const FS_ElgNotificationInfo& Info, UObject* InGraphObject, const bool ShowNotification);

	UElgEditorContext_DirWatcher* GetDirectoryWatcherContext();


protected:
	UPROPERTY()
		UElgEditorContext_LevelEditor* LevelEditorContext;

	UPROPERTY()
		UElgEditorContext_AssetBrowser* AssetBrowserContext;

	/* Array with the different config */
	UPROPERTY()
		TArray<UElgEditorContext_Config*> ConfigContexts;

	UPROPERTY()
		UElgEditorContext_DirWatcher* DirectoryWatcherContext;
};
