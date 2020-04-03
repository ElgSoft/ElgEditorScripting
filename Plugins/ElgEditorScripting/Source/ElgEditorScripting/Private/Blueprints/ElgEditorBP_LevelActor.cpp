// Copyright 2019-2020 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorBP_LevelActor.h"
#include <GameFramework/Actor.h>
#include <Editor.h>


#pragma region ConstructionScript

void UElgEditorBP_LevelActor::RunConstructionScipt(AActor* Actor)
{
	if (Actor == nullptr) return;

	Actor->UnregisterAllComponents();
	Actor->RerunConstructionScripts();
	Actor->RegisterAllComponents();
}


void UElgEditorBP_LevelActor::RunConstructionScipts(TArray<AActor*> Actors)
{
	for (AActor* actor : Actors) {
		RunConstructionScipt(actor);
	}
}

#pragma endregion

#pragma region Dirty

void UElgEditorBP_LevelActor::MarkActorAsDirty(AActor* Actor, const bool bRunConstructionScript)
{
	if (Actor == nullptr) return;

	Actor->Modify();

	FScopedLevelDirtied		LevelDirtyCallback;
	if (bRunConstructionScript) {
		RunConstructionScipt(Actor);
	}

	FVector NewLocation = FVector::ZeroVector;
	NewLocation = Actor->GetActorLocation();
	GEditor->SetPivot(NewLocation, false, true);

	Actor->MarkPackageDirty();
	LevelDirtyCallback.Request();

}


void UElgEditorBP_LevelActor::MarkActorsAsDirty(TArray<AActor*> Actors, const bool bRunConstructionScript)
{
	for (AActor* actor : Actors) {
		MarkActorAsDirty(actor, bRunConstructionScript);
	}
}

#pragma endregion

#pragma region Tick

bool UElgEditorBP_LevelActor::StartWithTickEnabled(AActor* Actor)
{
	if (Actor == nullptr) return false;
	return Actor->PrimaryActorTick.bStartWithTickEnabled;
}


void UElgEditorBP_LevelActor::StartWithTickEnabledBranch(AActor* Actor, EBPEditorOutputBranch& Branches)
{
	Branches = StartWithTickEnabled(Actor) ? EBPEditorOutputBranch::outTrue : EBPEditorOutputBranch::outFalse;
}

#pragma endregion

#pragma region EditorOnly

bool UElgEditorBP_LevelActor::IsEditorOnlyActor(AActor* Actor)
{
	if (Actor == nullptr) return false;
	return Actor->bIsEditorOnlyActor;
}

void UElgEditorBP_LevelActor::IsEditorOnlyActorBranch(AActor* Actor, EBPEditorOutputBranch& Branches)
{
	Branches = IsEditorOnlyActor(Actor) ? EBPEditorOutputBranch::outTrue : EBPEditorOutputBranch::outFalse;
}

#pragma endregion
