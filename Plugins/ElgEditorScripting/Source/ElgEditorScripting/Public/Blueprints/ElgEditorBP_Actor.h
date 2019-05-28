// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ElgEditorBP_Enum.h"
#include "ElgEditorBP_Actor.generated.h"

/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorBP_Actor : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
#pragma region Tick

	/* Is tick enabled on the actor? */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Actor", meta = (DefaultToSelf = "Actor", Keywords = "ElgEditor Actor"))
		static bool StartWithTickEnabled(AActor* Actor);

	/* Is tick enabled on the actor? */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Actor", meta = (ExpandEnumAsExecs = "Branches"))
		static void StartWithTickEnabledBranch(AActor* Actor, EBPEditorOutputBranch& Branches);

#pragma endregion

#pragma region EditorOnly

	/*   */
	UFUNCTION(BlueprintPure, Category = "ElgEditor|Actor", meta = (DefaultToSelf = "Actor", Keywords = "ElgEditor Actor"))
		static bool IsEditorOnlyActor(AActor* Actor);
	
	/*  */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|Actor", meta = (DefaultToSelf = "Actor", ExpandEnumAsExecs = "Branches"))
		static void IsEditorOnlyActorBranch(AActor* Actor, EBPEditorOutputBranch& Branches);

#pragma endregion
};
