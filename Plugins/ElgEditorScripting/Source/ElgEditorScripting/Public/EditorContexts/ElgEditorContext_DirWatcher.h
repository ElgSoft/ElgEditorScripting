// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ElgEditorContext_DirWatcher.generated.h"


struct FFileChangeData;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FElgEditorEventsOnDirWatchSignature, const TArray<FString>&, FilesAdded, const TArray<FString>&, FilesModified, const TArray<FString>&, FilesRemoved);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnDirWatchFilesAddedSignature, const TArray<FString>&, FilesAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnDirWatchFilesModifiedSignature, const TArray<FString>&, FilesModified);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FElgEditorEventsOnDirWatchFilesRemovedSignature, const TArray<FString>&, FilesRemoved);

/**
 * 
 */
UCLASS(Blueprintable)
class ELGEDITORSCRIPTING_API UElgEditorContext_DirWatcher : public UObject
{
	GENERATED_BODY()
	
#pragma region Setup

		virtual ~UElgEditorContext_DirWatcher();

#pragma endregion;

	// Map with all directory that we are watching
	TMap<FString, FDelegateHandle> DirectoryChangedDelegateHandles;

#pragma region HandleEvent

	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnDirWatchSignature OnDirectoryWatcher;
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnDirWatchFilesAddedSignature OnDirectoryWatcherFilesAdded;
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnDirWatchFilesModifiedSignature OnDirectoryWatcherFilesModified;
	UPROPERTY(BlueprintAssignable)
		FElgEditorEventsOnDirWatchFilesRemovedSignature OnDirectoryWatcherFilesRemoved;

	void HandleOnDirectoryFileChanged(const TArray<FFileChangeData>& FileChanges);

#pragma endregion

#pragma region AddDirs

	/* Add the Directory to be watched */
	UFUNCTION(BlueprintCallable, Category="DirWatcher")
		void AddWatchDirectory(const FString Directory);

	/* Add the Directories to be watched */
	UFUNCTION(BlueprintCallable, Category = "DirWatcher")
		void AddWatchDirectories(const TArray<FString> Directories);

#pragma endregion

#pragma region RemoveDirs

	/* Remove the watch for Directory */
	UFUNCTION(BlueprintCallable, Category = "DirWatcher")
		void RemoveWatchDirectory(const FString Directory);

	/* Remove the watch for the Directories */
	UFUNCTION(BlueprintCallable, Category = "DirWatcher")
		void  RemoveWatchDirectories(const TArray<FString> Directories);

#pragma endregion

#pragma region Get

	/* Return all Directories that are watched */
	UFUNCTION(BlueprintPure, Category = "DirWatcher")
		TArray<FString> GetWatchDirectories();

#pragma endregion

};
