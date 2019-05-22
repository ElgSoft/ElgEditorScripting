// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorBP_UBlueprint.h"
#include "ElgEditorBP_Enum.h"
#include <Engine/Blueprint.h>
#include "Modules/ModuleManager.h"
#include "AssetRegistryModule.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Engine/SCS_Node.h"
#include "Kismet2/KismetEditorUtilities.h"


#pragma region Getters

UBlueprint* UElgEditorBP_UBlueprint::GetBlueprintFromAssetData(const FAssetData& AssetDataStruct, EBPEditorOutputValidBranch& Branches)
{
	Branches = EBPEditorOutputValidBranch::Invalid;

#if WITH_EDITOR
	
	// get the object
	UObject* object = AssetDataStruct.GetAsset(); 
	if (object == nullptr) return nullptr;

	// get the blueprint object
	UBlueprint* blueprint = Cast<UBlueprint>(object);
	if (blueprint == nullptr) return nullptr;

	Branches = EBPEditorOutputValidBranch::Valid;
	return blueprint;

#endif

	return nullptr;
}



UBlueprint* UElgEditorBP_UBlueprint::GetBlueprintFromObject(UObject* Object, EBPEditorOutputValidBranch& Branches)
{
	Branches = EBPEditorOutputValidBranch::Invalid;
	
	if (Object == nullptr) return nullptr;

#if WITH_EDITOR

	UBlueprint* blueprint = Cast<UBlueprint>(Object);
	if (blueprint == nullptr) return nullptr;

	Branches = EBPEditorOutputValidBranch::Valid;
	return blueprint;

#endif

	return nullptr;
}

#pragma endregion

#pragma region Components

TArray<UActorComponent*> UElgEditorBP_UBlueprint::GetBlueprintComponents(UBlueprint* Blueprint, const bool ExcludeInherited)
{
	TArray<UActorComponent*> components;

	if (Blueprint == nullptr) return components;

#if WITH_EDITOR

	// set the array with the components the object has from c++
	components = Blueprint->ComponentTemplates;

	// check for any components that has been added in the editor/Blueprints.
	UClass* blueprintClass = Blueprint->GeneratedClass.Get();

	// iterate all the inherent classes and add their components to the array.
	do {
		UBlueprintGeneratedClass* bpGenerated = Cast<UBlueprintGeneratedClass>(blueprintClass);
		if (bpGenerated == nullptr) return components;

		// might need to iterate all the parents too
		const TArray<USCS_Node*>& nodes = bpGenerated->SimpleConstructionScript->GetAllNodes();
		for (USCS_Node* node : nodes) {
			components.Add(node->ComponentTemplate);
		}

		if (ExcludeInherited) return components;

		// get the parent blueprint class so we can check it
		blueprintClass = Cast<UClass>(blueprintClass->GetSuperClass());

	} while (blueprintClass != AActor::StaticClass());


#endif
	return components;
}


UActorComponent* UElgEditorBP_UBlueprint::GetBlueprintComponentOfClass(UBlueprint* Blueprint, TSubclassOf<UActorComponent> ComponentClass, const bool ExcludeInherited)
{
	if (Blueprint == nullptr || ComponentClass == nullptr) return nullptr;

	TArray<UActorComponent*> components = GetBlueprintComponents(Blueprint, ExcludeInherited);

	for (UActorComponent* component : components) {
		if (component->IsA(ComponentClass))
		{
			return component;
		}
	}

	return nullptr;
} 


UActorComponent* UElgEditorBP_UBlueprint::GetBlueprintComponentOfClassBranch(UBlueprint* Blueprint, TSubclassOf<UActorComponent> ComponentClass, const bool ExcludeInherited, EBPEditorOutputValidBranch& Branches)
{	
	UActorComponent* component = GetBlueprintComponentOfClass(Blueprint, ComponentClass, ExcludeInherited);

	if (component == nullptr) {
		Branches = EBPEditorOutputValidBranch::Invalid;
	} else {
		Branches = EBPEditorOutputValidBranch::Valid;
	}
	return component;
}


TArray<UActorComponent*> UElgEditorBP_UBlueprint::GetBlueprintComponentsOfClass(UBlueprint* Blueprint, TSubclassOf<UActorComponent> ComponentClass, const bool ExcludeInherited)
{
	TArray<UActorComponent*> componentsOfClass;

	if (Blueprint == nullptr || ComponentClass == nullptr) return componentsOfClass;

	TArray<UActorComponent*> components = GetBlueprintComponents(Blueprint, ExcludeInherited);

	for (UActorComponent* component : components) {
		if (component->IsA(ComponentClass))
		{
			componentsOfClass.Add(component);
		}
	}

	return componentsOfClass;
}


TArray<UActorComponent*> UElgEditorBP_UBlueprint::GetBlueprintComponentsOfClassBranch(UBlueprint* Blueprint, TSubclassOf<UActorComponent> ComponentClass, const bool ExcludeInherited, EBPEditorOutputValidBranch& Branches)
{
	TArray<UActorComponent*> components = GetBlueprintComponentsOfClass(Blueprint, ComponentClass, ExcludeInherited);

	if (components.Num() == 0) {
		Branches = EBPEditorOutputValidBranch::Invalid;
	} else {
		Branches = EBPEditorOutputValidBranch::Valid;
	}

	return components;

}


void UElgEditorBP_UBlueprint::BlueprintAddComponent(UBlueprint* Blueprint, TSubclassOf<UActorComponent> ComponentClass)
{
	if (Blueprint == nullptr || ComponentClass == nullptr) return;

#if WITH_EDITOR

	// make sure the blueprint type support components before we continue to add one...
	if (!FBlueprintEditorUtils::DoesSupportComponents(Blueprint)) return;

	USimpleConstructionScript* blueprintSCS = Blueprint->SimpleConstructionScript;

	if (USCS_Node* newCompNode = blueprintSCS->CreateNode(ComponentClass, ComponentClass->GetFName()))
	{
		blueprintSCS->AddNode(newCompNode);
	} else {
		UE_LOG(LogTemp, Warning, TEXT("BlueprintAddComponent:: Failed to create an new component node!"))
	}

#endif

}

void UElgEditorBP_UBlueprint::BlueprintRemoveComponent(UBlueprint* Blueprint, TSubclassOf<UActorComponent> ComponentClass, const bool bOnlyFirst /*= false*/)
{
	if (Blueprint == nullptr || ComponentClass == nullptr) return;

#if WITH_EDITOR

	USimpleConstructionScript* blueprintSCS = Blueprint->SimpleConstructionScript;

	TArray<USCS_Node*> compNodesToRemove;
	
	// find the node we want to remove
	const TArray<USCS_Node*>& nodes = blueprintSCS->GetAllNodes();
	for (USCS_Node* node : nodes) {
		if (node->ComponentClass == ComponentClass) {
			compNodesToRemove.Add(node);			
		}
	}

	for (USCS_Node* node : compNodesToRemove) {
		blueprintSCS->RemoveNodeAndPromoteChildren(node);
		if (bOnlyFirst) { // if we only should remove the first one we found break out here.
			return;
		}
	}

#endif
}


bool UElgEditorBP_UBlueprint::BlueprintSupportComponent(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return false;

	return FBlueprintEditorUtils::DoesSupportComponents(Blueprint);
}


void UElgEditorBP_UBlueprint::BlueprintSupportComponentBranch(UBlueprint* Blueprint, EBPEditorOutputBranch& Branches)
{	
	if (BlueprintSupportComponent(Blueprint)) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}

#pragma endregion

#pragma region Interfaces

TArray<TSubclassOf<UInterface>> UElgEditorBP_UBlueprint::GetBlueprintInterfaces(UBlueprint* Blueprint, const bool ExcludeInherited)
{
	TArray<TSubclassOf<UInterface>> interfaces;

	if (Blueprint == nullptr) return interfaces;

#if WITH_EDITOR

	// get the interfaces added to this BP class.
	for (const FBPInterfaceDescription& ImplementedInterface : Blueprint->ImplementedInterfaces)
	{
		interfaces.AddUnique(ImplementedInterface.Interface);
	}

	// get all interfaces its parents has
	if (!ExcludeInherited) {  

		UClass* blueprintParent = Blueprint->ParentClass;
		while (blueprintParent)
		{
			for (const FImplementedInterface& interfaceDesc : blueprintParent->Interfaces) {
				interfaces.AddUnique(interfaceDesc.Class);
			}
			// get the new parent
			blueprintParent = blueprintParent->GetSuperClass();
		}
	}

#endif
	return interfaces;

}


void UElgEditorBP_UBlueprint::BlueprintImplementInterface(UBlueprint* Blueprint, TSubclassOf<UInterface> InterfaceClass, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;
	if (Blueprint == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("BlueprintAddInterface: No Blueprint was set"));
		return;
	}
	if (InterfaceClass == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("BlueprintAddInterface: No InterfaceClass was set"));
		return;
	}
	
	for (TSubclassOf<UInterface> theInterface : GetBlueprintInterfaces(Blueprint, false)) {
		if (theInterface == InterfaceClass) {
			Branches = EBPEditorOutputBranch::outTrue;
		}
	}	
}


void UElgEditorBP_UBlueprint::BlueprintAddInterface(UBlueprint* Blueprint, TSubclassOf<UInterface> InterfaceClass)
{
#if WITH_EDITOR
	if (Blueprint == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("BlueprintAddInterface: No Blueprint was set"));
		return;
	}
	if (InterfaceClass == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("BlueprintAddInterface: No InterfaceClass was set"));
		return;
	}

	// make sure the blueprint can have interfaces before we continue to add one...
	if (!FBlueprintEditorUtils::DoesSupportImplementingInterfaces(Blueprint)) return;

	FName className = InterfaceClass->StaticClass()->GetFName();
	if (className == (TEXT("Class"))) {
		className = InterfaceClass->GetFName();
	}
	
	FBlueprintEditorUtils::ImplementNewInterface(Blueprint, className);

#endif
}


void UElgEditorBP_UBlueprint::BlueprintRemoveInterface(UBlueprint* Blueprint, TSubclassOf<UInterface> InterfaceClass, const bool bPreserveFunctions /*= false*/)
{
#if WITH_EDITOR

	if (Blueprint == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("BlueprintRemoveInterface: No Blueprint was set"));
		return;
	}
	if (InterfaceClass == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("BlueprintRemoveInterface: No InterfaceClass was set"));
		return;
	}

	// if the blueprint dont support interface dont even try to remove it.
	if (!FBlueprintEditorUtils::DoesSupportImplementingInterfaces(Blueprint)) return;

	FName className = InterfaceClass->StaticClass()->GetFName();
	if (className == (TEXT("Class"))) {
		className = InterfaceClass->GetFName();
	}

	FBlueprintEditorUtils::RemoveInterface(Blueprint, className, bPreserveFunctions);

#endif
}


bool UElgEditorBP_UBlueprint::BlueprintSupportInterface(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return false;

	return FBlueprintEditorUtils::DoesSupportImplementingInterfaces(Blueprint);
}


void UElgEditorBP_UBlueprint::BlueprintSupportInterfaceBranch(UBlueprint* Blueprint, EBPEditorOutputBranch& Branches)
{
	if (BlueprintSupportInterface(Blueprint)) {
		Branches = EBPEditorOutputBranch::outTrue;
	} else {
		Branches = EBPEditorOutputBranch::outFalse;
	}
}


#pragma endregion

#pragma region Misc

TSubclassOf<class UObject> UElgEditorBP_UBlueprint::GetParentClass(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return nullptr;

	return Blueprint->ParentClass;
}


void UElgEditorBP_UBlueprint::CompileBlueprint(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return;

#if WITH_EDITOR
	FKismetEditorUtilities::CompileBlueprint(Blueprint);
#endif

}

#pragma endregion