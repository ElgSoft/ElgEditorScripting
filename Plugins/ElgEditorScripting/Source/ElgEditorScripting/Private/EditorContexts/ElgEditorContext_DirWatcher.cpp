// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com


#include "ElgEditorContext_DirWatcher.h"
#include "Developer/DirectoryWatcher/Public/DirectoryWatcherModule.h"
#include <IDirectoryWatcher.h>
#include "Runtime/Core/Public/HAL/FileManager.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"

#pragma region Setup

UElgEditorContext_DirWatcher::~UElgEditorContext_DirWatcher()
{
	// If the directory module is still loaded, unregister any delegates
	if (FModuleManager::Get().IsModuleLoaded("DirectoryWatcher")) {
		FDirectoryWatcherModule& DirectoryWatcherModule = FModuleManager::GetModuleChecked<FDirectoryWatcherModule>("DirectoryWatcher");
		IDirectoryWatcher* DirectoryWatcher = DirectoryWatcherModule.Get();
		if (DirectoryWatcher) {
			for (auto& Elem : DirectoryChangedDelegateHandles) {
				DirectoryWatcher->UnregisterDirectoryChangedCallback_Handle(Elem.Key, Elem.Value);
			}
		}
	}
}

#pragma endregion;

#pragma region HandleEvent

void UElgEditorContext_DirWatcher::HandleOnDirectoryFileChanged(const TArray<FFileChangeData>& FileChanges)
{
	TArray<FString> added;
	TArray<FString> modified;
	TArray<FString> removed;

	for (auto fileChange : FileChanges) {
		if (fileChange.Action == FFileChangeData::FCA_Added) {
			added.AddUnique(fileChange.Filename);
		} else if (fileChange.Action == FFileChangeData::FCA_Modified) {
			if (!added.Contains(fileChange.Filename)) {
				modified.AddUnique(fileChange.Filename);
			}			
		} else if (fileChange.Action == FFileChangeData::FCA_Removed) {
			removed.AddUnique(fileChange.Filename);
		}
	}

	if (added.Num() > 0) {
		added.Sort();
		OnDirectoryWatcherFilesAdded.Broadcast(added);
	}
	if (modified.Num() > 0) {
		modified.Sort();
		OnDirectoryWatcherFilesModified.Broadcast(modified);
	}
	if (removed.Num() > 0) {
		removed.Sort();
		OnDirectoryWatcherFilesRemoved.Broadcast(removed);
	}
	OnDirectoryWatcher.Broadcast(added, modified, removed);
}

#pragma endregion


#pragma region Add

void UElgEditorContext_DirWatcher::AddWatchDirectory(const FString Directory)
{
	if (!IFileManager::Get().DirectoryExists(*Directory)) {
		UE_LOG(LogTemp, Warning, TEXT("Watch directory [%s] does not exist"), *Directory);
		return;
	}
	if (DirectoryChangedDelegateHandles.Contains(Directory))
	{
		UE_LOG(LogTemp, Warning, TEXT("Watch directory [%s] is already registered"), *Directory);
		return;
	}

	FDirectoryWatcherModule& DirectoryWatcherModule = FModuleManager::LoadModuleChecked<FDirectoryWatcherModule>(TEXT("DirectoryWatcher"));
	IDirectoryWatcher* DirectoryWatcher = DirectoryWatcherModule.Get();

	if (DirectoryWatcher)
	{
		FDelegateHandle NewHandle;
		DirectoryWatcher->RegisterDirectoryChangedCallback_Handle(Directory,
			IDirectoryWatcher::FDirectoryChanged::CreateUObject(this, &UElgEditorContext_DirWatcher::HandleOnDirectoryFileChanged),
			NewHandle, IDirectoryWatcher::WatchOptions::IncludeDirectoryChanges);

		DirectoryChangedDelegateHandles.Add(Directory, NewHandle);
	}
}

void UElgEditorContext_DirWatcher::AddWatchDirectories(const TArray<FString> Directories)
{
	for (FString dir : Directories) {
		AddWatchDirectory(dir);
	}
}

#pragma endregion

#pragma region Remove

void UElgEditorContext_DirWatcher::RemoveWatchDirectory(const FString Directory)
{
	if (!DirectoryChangedDelegateHandles.Contains(Directory)) {
		UE_LOG(LogTemp, Warning, TEXT("Watch directory [%s] is not registered"), *Directory);
		return;
	}

	if (FModuleManager::Get().IsModuleLoaded("DirectoryWatcher")) {
		FDirectoryWatcherModule& DirectoryWatcherModule = FModuleManager::GetModuleChecked<FDirectoryWatcherModule>("DirectoryWatcher");
		IDirectoryWatcher* DirectoryWatcher = DirectoryWatcherModule.Get();
		if (DirectoryWatcher) {
			FDelegateHandle* handle = DirectoryChangedDelegateHandles.Find(Directory);
			DirectoryWatcher->UnregisterDirectoryChangedCallback_Handle(Directory, *handle);
			DirectoryChangedDelegateHandles.Remove(Directory);
			return;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Failed to remove watch directory [%s] "), *Directory);
}

void UElgEditorContext_DirWatcher::RemoveWatchDirectories(const TArray<FString> Directories)
{
	for (FString dir : Directories) {
		RemoveWatchDirectory(dir);
	}
}

#pragma endregion

#pragma region Get

TArray<FString> UElgEditorContext_DirWatcher::GetWatchDirectories()
{
	TArray<FString> keys;
	DirectoryChangedDelegateHandles.GetKeys(keys);
	keys.Sort();
	return keys;
}

#pragma endregion
