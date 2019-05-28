// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com


#include "ElgEditorBP_Actor.h"
#include <GameFramework/Actor.h>


#pragma region Tick

bool UElgEditorBP_Actor::StartWithTickEnabled(AActor* Actor)
{
	if (Actor == nullptr) return false;
	return Actor->PrimaryActorTick.bStartWithTickEnabled;
}


void UElgEditorBP_Actor::StartWithTickEnabledBranch(AActor* Actor, EBPEditorOutputBranch& Branches)
{
	Branches = StartWithTickEnabled(Actor) ? EBPEditorOutputBranch::outTrue: EBPEditorOutputBranch::outFalse;
}

#pragma endregion

#pragma region EditorOnly

bool UElgEditorBP_Actor::IsEditorOnlyActor(AActor* Actor)
{
	if (Actor == nullptr) return false;
	return Actor->bIsEditorOnlyActor;
}

void UElgEditorBP_Actor::IsEditorOnlyActorBranch(AActor* Actor, EBPEditorOutputBranch& Branches)
{
	Branches = IsEditorOnlyActor(Actor) ? EBPEditorOutputBranch::outTrue : EBPEditorOutputBranch::outFalse;
}

#pragma endregion
