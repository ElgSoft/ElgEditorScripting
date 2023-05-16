// Copyright 2019-2023 ElgSoft. All rights reserved.
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ElgEditorBP_Class.generated.h"

/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorBP_Class : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/* Return a class by its name, if its a blueprint class make sure to have _C. */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Class", meta = (Keywords = "ElgEditor Class"))
		static UClass* GetClassByName(const FString ClassName);

};
