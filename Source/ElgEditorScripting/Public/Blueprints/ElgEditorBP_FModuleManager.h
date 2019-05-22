// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ElgEditorBP_FModuleManager.generated.h"



#pragma region Struct

USTRUCT(BlueprintType)
struct FS_ElgModuleStatus
{
	GENERATED_USTRUCT_BODY()

	/*  */
	UPROPERTY(BlueprintReadOnly, Category = "Module")
		FString Name;
	/*  */
	UPROPERTY(BlueprintReadOnly, Category = "Module")
		FString FilePath;

	UPROPERTY(BlueprintReadWrite, Category = "Module")
		bool bIsLoaded;

	UPROPERTY(BlueprintReadOnly, Category = "Module")
		bool bIsGameModule;

	UPROPERTY(BlueprintReadOnly, Category = "Module")
		bool bIsProjectModule;
	
	UPROPERTY(BlueprintReadOnly, Category = "Module")
		bool bCanShutDown;

	UPROPERTY(BlueprintReadOnly, Category = "Module")
		bool bCanRecompile;

	UPROPERTY(BlueprintReadOnly, Category = "Module")
		bool bCanHotReload;

	UPROPERTY(BlueprintReadOnly, Category = "Module")
		bool bCanDynamicReload;


	FS_ElgModuleStatus(FString ModuleName, FString ModulePath, bool ModuleIsLoaded, bool IsGameModule, 
		bool IsLocalModule, bool CanShutdown, bool CanRecompile, bool CanHotReload, bool CanDynamicReload)
	{
		Name = ModuleName;
		FilePath = ModulePath;
		bIsLoaded = ModuleIsLoaded;
		bIsGameModule = IsGameModule;
		bIsProjectModule = IsLocalModule;
		bCanShutDown = CanShutdown;
		bCanRecompile = CanRecompile;
		bCanHotReload = CanHotReload;
		bCanDynamicReload = CanDynamicReload;
	}

	FS_ElgModuleStatus() {
		Name = "";
		FilePath = "";
		bIsLoaded = false;
		bIsGameModule = false;
		bIsProjectModule = false;
		bCanShutDown = false;
		bCanRecompile = false;
		bCanHotReload = false;
		bCanDynamicReload = false;
	}
};

#pragma endregion



/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorBP_FModuleManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

#pragma region Getters

	/* Get an sorted array of the Module names */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static void GetModuleNames(TArray<FString>& Modules, const bool bProjectOnly = true);

	/* Return an sorted array with the names of the modules and a map with the struct with info about the modules */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static void GetModulesStatus(TArray<FString>& ModuleNames, TMap<FString, FS_ElgModuleStatus>& ModulesMap, const bool bProjectOnly = true);

	/* Get the status struct for a module */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static void GetModuleStatus(const FString ModuleName, bool& Success, FS_ElgModuleStatus& ModuleStatus);

#pragma endregion

#pragma region Actions

	/* Recompile a module */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static void RecompileModule(const FString ModuleName);
	
	/* Load a module */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static void LoadModule(const FString ModuleName);

	/* Unload a module */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static void UnloadModule(const FString ModuleName);

	/* Reload a module */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static void ReloadModule(const FString ModuleName);

#pragma endregion

#pragma region StateCheck

	/* Return if the module can be shutdown */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static bool CanShutdownModule(const FString ModuleName);

	/* Return if the module can be recompile
		Checks if the can be hot reloaded or dynamic reloaded or not loaded.
	*/
	UFUNCTION(BlueprintPure, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static bool CanRecompileModule(const FString ModuleName);

	/* Return if the module is loaded or not */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static bool IsModuleLoaded(const FString ModuleName);

	/* Return if the module can be hot reloaded */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static bool CanHotReloadModule(const FString ModuleName);

	/* Return if the module can be dynamic reloaded */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|ModuleManager", meta = (Keywords = "ElgSoft Editor ModuleManager"))
		static bool CanDynamicReloadModule(const FString ModuleName);

#pragma endregion

};
