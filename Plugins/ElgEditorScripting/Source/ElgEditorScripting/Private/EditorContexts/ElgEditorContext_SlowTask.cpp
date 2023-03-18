// Copyright 2023 ElgSoft. All rights reserved.


#include "ElgEditorContext_SlowTask.h"

#include "Editor.h"
#include "Misc/ScopedSlowTask.h"

void UElgEditorContext_SlowTask::Begin(float InTotalAmountOfWork, const FText InDefaultMessage, bool bShowProgressDialog, bool bShowCancelButton)
{
	if (bIsRunning) {
		UE_LOG(LogTemp, Error, TEXT("A SlowTask is alreay running!!"));
		return;
	}

	if (GEditor && GEditor->GetPIEWorldContext()) {
		UE_LOG(LogTemp, Error, TEXT("The editor is in PIE mode...will not start a slowTask !!"));
		return;
	}	

	TUniquePtr<FScopedSlowTask> newScope(new FScopedSlowTask(InTotalAmountOfWork, InDefaultMessage, true));
	
	if (bShowProgressDialog) {
		newScope->MakeDialog(bShowCancelButton, false);
	}
	ElgEditorSlowTaskPtr = MoveTemp(newScope);
	bIsRunning = true;
}

void UElgEditorContext_SlowTask::End()
{
	if (!bIsRunning) return;
	
	if (ElgEditorSlowTaskPtr.IsValid()) {
		ElgEditorSlowTaskPtr = nullptr;
	}

	bIsRunning = false;
}


void UElgEditorContext_SlowTask::EnterProgressFrame(float InExpectedWorkThisFrame, const FText InText)
{
	if (bIsRunning && !bIsCompleted && ElgEditorSlowTaskPtr.IsValid()) {
		const float completedWork = ElgEditorSlowTaskPtr->CompletedWork;// + ElgEditorSlowTaskPtr->CurrentFrameScope;
		const float workRemaining = ElgEditorSlowTaskPtr->TotalAmountOfWork - completedWork;
		if (workRemaining > InExpectedWorkThisFrame) {
			ElgEditorSlowTaskPtr->EnterProgressFrame(InExpectedWorkThisFrame, InText);
			if (ElgEditorSlowTaskPtr->TotalAmountOfWork - ElgEditorSlowTaskPtr->CompletedWork <= 0.1f) {
				bIsCompleted = true;
			}
		} else {
			bIsCompleted = true;
		}
	}
}

bool UElgEditorContext_SlowTask::ShouldCancel() const
{
	if (!bIsRunning) return true; 
	if (ElgEditorSlowTaskPtr.IsValid()) {
		return ElgEditorSlowTaskPtr->ShouldCancel();
	}
	return false;
}

void UElgEditorContext_SlowTask::ShouldCancelBranch(EBPEditorOutputBranch& Branches)
{
	if (ShouldCancel()) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}

bool UElgEditorContext_SlowTask::IsCompleted() const
{
	if (!bIsRunning) return true;
	return bIsCompleted;
}

void UElgEditorContext_SlowTask::IsCompletedBranch(EBPEditorOutputBranch& Branches)
{
	if (IsCompleted()) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}

void UElgEditorContext_SlowTask::SetTotalAmountOfWork(const float InTotalAmountOfWork)
{
	if (ElgEditorSlowTaskPtr.IsValid()) {
		ElgEditorSlowTaskPtr->TotalAmountOfWork = InTotalAmountOfWork;
	}
}

float UElgEditorContext_SlowTask::GetTotalAmountOfWork() const
{
	if (ElgEditorSlowTaskPtr.IsValid()) {
		return ElgEditorSlowTaskPtr->TotalAmountOfWork;
	}
	return 0.0f;
}

float UElgEditorContext_SlowTask::GetCompletedWork() const
{
	if (ElgEditorSlowTaskPtr.IsValid()) {
		return ElgEditorSlowTaskPtr->CompletedWork + ElgEditorSlowTaskPtr->CurrentFrameScope;
	}
	return 0.0f;
}

float UElgEditorContext_SlowTask::GetWorkRemaining()
{
	if (ElgEditorSlowTaskPtr.IsValid()) {
		return ElgEditorSlowTaskPtr->TotalAmountOfWork - (ElgEditorSlowTaskPtr->CompletedWork + ElgEditorSlowTaskPtr->CurrentFrameScope);
	}
	return 0.0f;
}

float UElgEditorContext_SlowTask::GetCurrentFrameScope() const
{
	if (ElgEditorSlowTaskPtr.IsValid()) {
		return ElgEditorSlowTaskPtr->CurrentFrameScope;
	}
	return 0.0f;
}

bool UElgEditorContext_SlowTask::GetIsRunning() const
{
	return  bIsRunning;
}

UElgEditorContext_SlowTask::UElgEditorContext_SlowTask()
{
	bIsRunning = false;
}

UElgEditorContext_SlowTask::~UElgEditorContext_SlowTask()
{
	if (ElgEditorSlowTaskPtr.IsValid()) {
		ElgEditorSlowTaskPtr = nullptr;
	}
	bIsRunning = false;
}
