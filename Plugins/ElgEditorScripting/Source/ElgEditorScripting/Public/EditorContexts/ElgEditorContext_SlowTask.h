// Copyright 2019 ElgSoft. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "ElgEditorBP_Enum.h"
#include "Misc/ScopedSlowTask.h"
#include "UObject/Object.h"
#include "ElgEditorContext_SlowTask.generated.h"

/**
 * Context object for slow tasks 
 */
UCLASS(Blueprintable)
class ELGEDITORSCRIPTING_API UElgEditorContext_SlowTask : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Construct this scope from an amount of work to do, and a message to display
	 * @param		InTotalAmountOfWork		Arbitrary number of work units to perform (can be a percentage or number of steps).
	 *										0 indicates that no progress frames are to be entered in this scope (automatically enters a frame encompassing the entire scope)
	 * @param		InDefaultMessage		A message to display to the user to describe the purpose of the scope
	 * @param		bShowProgressDialog		When false, this scope will have no effect. Allows for proper scoped objects that are conditionally hidden.
	 * @param		bShowCancelButton		Whether to show a cancel button on the dialog or not.
	 */
	//UFUNCTION(BlueprintCallable, Category= "ElgEditor|SlowTask")
	void Begin(float InTotalAmountOfWork = 1.0f, const FText InDefaultMessage = FText(), bool bShowProgressDialog = true, bool bShowCancelButton = false);

	/** Function that finishes any remaining work and removes itself from the global scope stack */
	UFUNCTION(BlueprintCallable, Category= "ElgEditor|SlowTask")
	void End();
	
	/**
	 * Indicate that we are to enter a frame that will take up the specified amount of work. Completes any previous frames (potentially contributing to parent scopes' progress).
	 * @param		InExpectedWorkThisFrame	The amount of work that will happen between now and the next frame, as a numerator of TotalAmountOfWork.
	 * @param		InText					Optional text to describe this frame's purpose.
	 */
	UFUNCTION(BlueprintCallable, Category= "ElgEditor|SlowTask", meta=(Keywords="Update"))
	void EnterProgressFrame(float InExpectedWorkThisFrame = 1.f, const FText InText = FText());

	/**
	 * True if the user has requested that the slow task be canceled
	 */
	UFUNCTION(BlueprintPure, Category= "ElgEditor|SlowTask")
	bool ShouldCancel() const;

	/* Check if the SlowTask has been cancel by the user */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|SlowTask", meta=(ExpandEnumAsExecs = "Branches"))
		void ShouldCancelBranch(EBPEditorOutputBranch& Branches);

	/**
	 * True if progress has reach 100%.
	 */
	UFUNCTION(BlueprintPure, Category= "ElgEditor|SlowTask")
	bool IsCompleted() const;

	/* Check if the SlowTask has been completed by the user */
	UFUNCTION(BlueprintCallable, Category = "ElgEditor|SlowTask", meta=(ExpandEnumAsExecs = "Branches"))
		void IsCompletedBranch(EBPEditorOutputBranch& Branches);

	/*
	 *  Set how much work that should be done during the SlowTask
	 */
	UFUNCTION(BlueprintCallable, Category= "ElgEditor|SlowTask")
	void SetTotalAmountOfWork(const float InTotalAmountOfWork);

	/*
	 *  Return how much work that should be done during the SlowTask
	 */
	UFUNCTION(BlueprintPure, Category= "ElgEditor|SlowTask")
	float GetTotalAmountOfWork() const;

	/*
	 * Return how much work that has been completed.
	 */
	UFUNCTION(BlueprintPure, Category= "ElgEditor|SlowTask")
	float GetCompletedWork() const;

	/*
	 * Return how much work that still need to be done.
	 */
	UFUNCTION(BlueprintPure, Category="ElgEditor|SlowTask")
	float GetWorkRemaining();

	float GetCurrentFrameScope() const;

	bool GetIsRunning() const;
	
	
protected:

	friend FScopedSlowTask;
	TUniquePtr<FScopedSlowTask> ElgEditorSlowTaskPtr;
	
private:

#pragma region Setup

	UElgEditorContext_SlowTask();
	virtual ~UElgEditorContext_SlowTask() override;

#pragma endregion 
	bool bIsRunning = false;
	bool bIsCompleted = false;
	
};
