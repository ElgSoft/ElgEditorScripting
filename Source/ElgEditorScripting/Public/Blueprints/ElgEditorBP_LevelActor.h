// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ElgEditorBP_LevelActor.generated.h"

/**
 * 
 */
UCLASS()
class ELGEDITORSCRIPTING_API UElgEditorBP_LevelActor : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

#pragma region ConstructionScript

	/* Run the actor Construction Script */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelActor")
		static void RunConstructionScipt(AActor* Actor);

	/* Run the actors Construction Script */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelActor")
		static void RunConstructionScipts(TArray<AActor*> Actors);

#pragma endregion

#pragma region Dirty

	/* Let the editor know that the actor has change */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelActor")
		static void MarkActorAsDirty(AActor* Actor, const bool bRunConstructionScript);

	/* Let the editor know that the actor has change */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|LevelActor")
		static void MarkActorsAsDirty(TArray<AActor*> Actors, const bool bRunConstructionScript);

#pragma endregion

};
