// Copyright 2019-2023 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorBP_UBlueprint.h"
#include "ElgEditorBP_Enum.h"
#include <Engine/Blueprint.h>
#include "Modules/ModuleManager.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Engine/SCS_Node.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Editor/BlueprintGraph/Classes/K2Node_FunctionEntry.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include <K2Node_CallFunction.h>
#include "Editor/BlueprintGraph/Classes/K2Node_VariableGet.h"
#include "Editor/BlueprintGraph/Classes/K2Node_VariableSet.h"
#include "Editor/BlueprintGraph/Classes/K2Node_Event.h"
#include "Editor/BlueprintGraph/Classes/K2Node_CustomEvent.h"
#include "Editor/BlueprintGraph/Classes/K2Node_Knot.h"
#include "Editor/BlueprintGraph/Classes/K2Node_ComponentBoundEvent.h"
#include "Editor/BlueprintGraph/Classes/K2Node_MacroInstance.h"


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



TArray<UBlueprint*> UElgEditorBP_UBlueprint::GetBlueprintsFromObjects(TArray<UObject*> Objects)
{
	TArray<UBlueprint*> blueprints;
	for (UObject* object : Objects) {
		if (UBlueprint* blueprint = Cast<UBlueprint>(object)) {
			blueprints.Add(blueprint);
		}
	}
	return blueprints;
}


TArray<UBlueprint*> UElgEditorBP_UBlueprint::GetBlueprintsByPath(const FName Path, const bool RecursivePaths/*=true*/)
{
	TArray<UBlueprint*> blueprints;

	FAssetRegistryModule& assetRegistryModule = FModuleManager::Get().LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

	// Form a filter for the root dir
	FARFilter assetFilter;
	assetFilter.bRecursivePaths = RecursivePaths;
	assetFilter.PackagePaths.Add(Path);

	assetFilter.ClassPaths.Add(FTopLevelAssetPath(UBlueprint::StaticClass()->GetPathName()));
	assetFilter.bRecursiveClasses = true;

	// Query for a list of assets in the selected paths
	TArray<FAssetData> assetList;
	assetRegistryModule.Get().GetAssets(assetFilter, assetList);

	if (assetList.Num() > 0) {
		for (const auto& asset : assetList) {
			FAssetData assetData = assetRegistryModule.Get().GetAssetByObjectPath(asset.GetSoftObjectPath(), false);
			if (assetData.IsValid()) {
				auto blueprint = CastChecked<UBlueprint>(assetData.GetAsset());
				blueprints.Add(blueprint);
			}
		}
	}
	return blueprints;
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
	BlueprintAddComponentWithName(Blueprint, ComponentClass, ComponentClass->GetFName());
#endif
}

void UElgEditorBP_UBlueprint::BlueprintAddComponentWithName(UBlueprint* Blueprint, TSubclassOf<UActorComponent> ComponentClass, FName InName)
{
	if (Blueprint == nullptr || ComponentClass == nullptr) return;

#if WITH_EDITOR

	// make sure the blueprint type support components before we continue to add one...
	if (!FBlueprintEditorUtils::DoesSupportComponents(Blueprint)) return;

	USimpleConstructionScript* blueprintSCS = Blueprint->SimpleConstructionScript;

	if (USCS_Node* newCompNode = blueprintSCS->CreateNode(ComponentClass, InName))
	{
		blueprintSCS->AddNode(newCompNode);
	}
	else {
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

	FTopLevelAssetPath assetPath = FTopLevelAssetPath(InterfaceClass->StaticClass()->GetPathName());
	FBlueprintEditorUtils::ImplementNewInterface(Blueprint, assetPath);

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

	// if the blueprint don't support interface don't even try to remove it.
	if (!FBlueprintEditorUtils::DoesSupportImplementingInterfaces(Blueprint)) return;

	FTopLevelAssetPath assetPath = FTopLevelAssetPath(InterfaceClass->StaticClass()->GetPathName());
	FBlueprintEditorUtils::RemoveInterface(Blueprint, assetPath, bPreserveFunctions);

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


TSubclassOf<class UObject> UElgEditorBP_UBlueprint::GetNativeClass(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return nullptr;

	return FBlueprintEditorUtils::GetNativeParent(Blueprint);
}


bool UElgEditorBP_UBlueprint::IsChildOfClass(UBlueprint* Blueprint, TSubclassOf<class UObject> ChildClass)
{
	if (Blueprint == nullptr) return false;

	return Blueprint->GeneratedClass->IsChildOf(ChildClass);
}


void UElgEditorBP_UBlueprint::IsChildOfClassBranch(UBlueprint* Blueprint, TSubclassOf<class UObject> ChildClass, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;

	if (IsChildOfClass(Blueprint, ChildClass)) {
		Branches = EBPEditorOutputBranch::outTrue;
	}
}


void UElgEditorBP_UBlueprint::CompileBlueprint(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return;

#if WITH_EDITOR
	FKismetEditorUtilities::CompileBlueprint(Blueprint);
#endif

}

void UElgEditorBP_UBlueprint::CompileBlueprints(TArray<UBlueprint*> InBlueprints)
{
	if (InBlueprints.Num() == 0) return;

#if WITH_EDITOR
	for (UBlueprint* bp : InBlueprints) {
		FKismetEditorUtilities::CompileBlueprint(bp);
	}
#endif
}

#pragma endregion

#pragma region Tick

bool UElgEditorBP_UBlueprint::IsStartingWithTick(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return false;

	AActor* actor = GetDefaultObjectActor(Blueprint);

	if (actor) {
		return actor->PrimaryActorTick.bStartWithTickEnabled;
	}
	return false;
}

void UElgEditorBP_UBlueprint::IsStartingWithTickBranch(UBlueprint* Blueprint, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;
	if (IsStartingWithTick(Blueprint)) {
		Branches = EBPEditorOutputBranch::outTrue;
	}
}


void UElgEditorBP_UBlueprint::SetStartingWithTick(UBlueprint* Blueprint, const bool bEnabled/*=false*/)
{
	if (Blueprint == nullptr) return;

	AActor* actor = GetDefaultObjectActor(Blueprint);
	if (actor) {
		actor->PrimaryActorTick.bStartWithTickEnabled = bEnabled;
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	}
}


bool UElgEditorBP_UBlueprint::CanEverTick(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return false;

	AActor* actor = GetDefaultObjectActor(Blueprint);
	if (actor) {
		return actor->PrimaryActorTick.bCanEverTick;
	}
	return false;
}


void UElgEditorBP_UBlueprint::CanEverTickBranch(UBlueprint* Blueprint, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;
	if (CanEverTick(Blueprint)) {
		Branches = EBPEditorOutputBranch::outTrue;
	}
}

void UElgEditorBP_UBlueprint::SetCanEverTick(UBlueprint* Blueprint, const bool bEnabled /*= false*/)
{
	if (Blueprint == nullptr) return;

	AActor* actor = GetDefaultObjectActor(Blueprint);
	if (actor) {
		actor->PrimaryActorTick.bCanEverTick = bEnabled;
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	}
}


#pragma endregion

#pragma region ConstructionScript

bool UElgEditorBP_UBlueprint::IsRunConstructionScriptOnDrag(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return false;

	return Blueprint->bRunConstructionScriptOnDrag;
}


void UElgEditorBP_UBlueprint::IsRunConstructionScriptOnDragBranch(UBlueprint* Blueprint, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;
	if (IsRunConstructionScriptOnDrag(Blueprint)) {
		Branches = EBPEditorOutputBranch::outTrue;
	}
}


void UElgEditorBP_UBlueprint::SetRunConstructionScriptOnDrag(UBlueprint* Blueprint, const bool bEnabled/*=true*/)
{
	if (Blueprint == nullptr) return;
	Blueprint->bRunConstructionScriptOnDrag = bEnabled;
	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
}


bool UElgEditorBP_UBlueprint::IsConstructionScriptConnected(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return false;

	if (!FBlueprintEditorUtils::SupportsConstructionScript(Blueprint)) return false;

	UEdGraph* graph = FBlueprintEditorUtils::FindUserConstructionScript(Blueprint);

	if (graph) {
		FText nodeName = FText::FromString("ConstructionScript");
		FName pinName = FName::FName("then");

		for (UEdGraphNode* node : graph->Nodes) {
			FText name = node->GetNodeTitle(ENodeTitleType::ListView);
			if (name.EqualTo(nodeName)) {  // node with the right name			
				for (UEdGraphPin* pin : node->Pins) {
					if (pin->PinName == pinName) { // pin with the right name
						if (pin->LinkedTo.Num() > 0) {
							return true;
						}
						else {
							return false;
						}
					}
				}
			}
		}
	}
	return false;
}


void UElgEditorBP_UBlueprint::IsConstructionScriptConnectedBranch(UBlueprint* Blueprint, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;

	if (IsConstructionScriptConnected(Blueprint)) {
		Branches = EBPEditorOutputBranch::outTrue;
	}
}

#pragma endregion

#pragma region Node	

bool UElgEditorBP_UBlueprint::HasNode(UBlueprint* Blueprint, const FString NodeName)
{
	if (Blueprint == nullptr) return false;

	FText nodeName = FText::FromString(NodeName);
	for (UEdGraph* graph : Blueprint->UbergraphPages) {
		for (UEdGraphNode* node : graph->Nodes) {
			FText name = node->GetNodeTitle(ENodeTitleType::ListView);
			if (name.EqualTo(nodeName)) { 
				return true;
			}
		}
	}
	return false;
}



void UElgEditorBP_UBlueprint::HasNodeBranch(UBlueprint* Blueprint, const FString NodeName, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;

	if (HasNode(Blueprint, NodeName)) {
		Branches = EBPEditorOutputBranch::outTrue;
	}
}


bool UElgEditorBP_UBlueprint::IsNodePinConnected(UBlueprint* Blueprint, const FString NodeName, const FString PinName)
{
	if (Blueprint == nullptr) return false;

	FText nodeName = FText::FromString(NodeName);
	FName pinName = FName::FName(*PinName);
	for (UEdGraph* graph : Blueprint->UbergraphPages) {
		for (UEdGraphNode* node : graph->Nodes) {
			FText name = node->GetNodeTitle(ENodeTitleType::ListView);
			if (name.EqualTo(nodeName)) {  // node with the right name			
				for (UEdGraphPin* pin : node->Pins) {
					if (pin->PinName == pinName) { // pin with the right name
						if (pin->LinkedTo.Num() > 0) {
							return true;
						} else {
							return false;
						}
					}
				}
			}
		}
	}
	return false;
}


void UElgEditorBP_UBlueprint::IsNodePinConnectedBranch(UBlueprint* Blueprint, const FString NodeName, const FString PinName, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;

	if (IsNodePinConnected(Blueprint, NodeName, PinName)) {
		Branches = EBPEditorOutputBranch::outTrue;
	}
}


void UElgEditorBP_UBlueprint::GetNodeUsage(UBlueprint* Blueprint, TMap<FString, int32>& NodeUsageMap)
{
	NodeUsageMap.Empty();
	if (Blueprint == nullptr) return;

	for (UEdGraph* graph : Blueprint->UbergraphPages) {
		for (UEdGraphNode* node : graph->Nodes) {
			FString displayName;
			FString nodeName;
			GetNodeNameAndType(node, displayName, nodeName);			
			NodeUsageMap.FindOrAdd(nodeName) += 1;
		}
	}
	int32 count = NodeUsageMap.Num();
}


FS_ElgBlueprintNodeStats UElgEditorBP_UBlueprint::GetBlueprintNodeStat(UBlueprint* Blueprint)
{
	FS_ElgBlueprintNodeStats NodeStats;
	CreateNodeStatsStruct(Blueprint, NodeStats);
	return NodeStats;
}


FS_ElgBlueprintNodeStats UElgEditorBP_UBlueprint::GetBlueprintNodeStatNameFilter(UBlueprint* Blueprint, const FString NodeName, const bool bNodeType)
{
	FS_ElgBlueprintNodeStats NodeStats;
	CreateNodeStatsStruct(Blueprint, NodeStats, NodeName, bNodeType);
	return NodeStats;
}


FS_ElgBlueprintNodeStats UElgEditorBP_UBlueprint::GetBlueprintNodeStatNameFilterBranch(UBlueprint* Blueprint, const FString NodeName, EBPEditorOutputBranch& Branches, const bool bNodeType)
{
	Branches = EBPEditorOutputBranch::outFalse;
	FS_ElgBlueprintNodeStats NodeStats;
	if (CreateNodeStatsStruct(Blueprint, NodeStats, NodeName, bNodeType)) Branches = EBPEditorOutputBranch::outTrue;
	return NodeStats;
}


FS_ElgBlueprintsNodeStats UElgEditorBP_UBlueprint::GetBlueprintsNodeStat(TArray<UBlueprint*> Blueprints)
{
	FS_ElgBlueprintsNodeStats NodeStats;
	TMap<FString, int32> tempMapForCountSort;

	for (UBlueprint* blueprint : Blueprints) {
		FS_ElgBlueprintNodeStats nodeStats = GetBlueprintNodeStat(blueprint);

		NodeStats.Stats.Add(nodeStats);
		NodeStats.BlueprintCount += 1;
		NodeStats.NodeCount += nodeStats.NodeCount;

		for (auto& Elem : nodeStats.NodeTypeCountMap) {
			NodeStats.NodeTypeCountMap.FindOrAdd(Elem.Key) += Elem.Value;
			tempMapForCountSort.FindOrAdd(Elem.Key) += Elem.Value;
		}
	}
	NodeStats.NodeTypeCountMap.GetKeys(NodeStats.NodeTypeSorted);
	NodeStats.NodeTypeSorted.Sort();

	// sort on the node count
	tempMapForCountSort.ValueSort([](int32 A, int32 B) {
		return A > B;
	});
	tempMapForCountSort.GetKeys(NodeStats.NodeCountSorted);
	return NodeStats;
}


FS_ElgBlueprintsNodeStats UElgEditorBP_UBlueprint::GetNodeStatsByPath(const FName Path)
{	
	TArray<UBlueprint*> blueprints = GetBlueprintsByPath(Path, true);
	return GetBlueprintsNodeStat(blueprints);
}


TMap<FString, FS_ElgBlueprintNodes> UElgEditorBP_UBlueprint::GetBlueprintsWithNodeByPath(const FName Path, const FString NodeName, const bool bCheckOnType)
{
	TArray<UBlueprint*> blueprints = GetBlueprintsByPath(Path, true);
	return GetBlueprintsWithNode(blueprints, NodeName, bCheckOnType);
}


TMap<FString, FS_ElgBlueprintNodes> UElgEditorBP_UBlueprint::GetBlueprintsWithNode(TArray<UBlueprint*> InBlueprints, const FString NodeName, const bool bCheckOnType)
{
	TMap<FString, FS_ElgBlueprintNodes> resultMap;
	for (auto bp : InBlueprints) {
		FS_ElgBlueprintNodes blueprintNodes;
		if (CreateBlueprintNodesStruct(bp, blueprintNodes, NodeName, bCheckOnType)) {
			resultMap.Add(bp->GetName(), blueprintNodes);
		}
	}
	return resultMap;
}



void UElgEditorBP_UBlueprint::DeleteNodesByName(UBlueprint* Blueprint, const FString NodeName)
{
	if (Blueprint == nullptr) return;

	TArray<UEdGraphNode*> nodesToDelete;

	FText nodeName = FText::FromString(NodeName);
	for (UEdGraph* graph : Blueprint->UbergraphPages) {
		for (UEdGraphNode* node : graph->Nodes) {
			FText name = node->GetNodeTitle(ENodeTitleType::ListView);
			if (name.EqualTo(nodeName)) {  // node with the right name			
				nodesToDelete.Add(node);
			}
		}
	}

	if (nodesToDelete.Num() > 0) {
		for (UEdGraphNode* node : nodesToDelete) {
			FBlueprintEditorUtils::RemoveNode(Blueprint, node, true);
		}
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	}	
}

bool UElgEditorBP_UBlueprint::HasCompilerError(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return true;

	if (Blueprint->Status == EBlueprintStatus::BS_Error) {
		return true;
	}
	return false;
}


void UElgEditorBP_UBlueprint::HasCompilerErrorBranch(UBlueprint* Blueprint, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;
	if (HasCompilerError(Blueprint)) {
		Branches = EBPEditorOutputBranch::outTrue;
	}
}

void UElgEditorBP_UBlueprint::HasCommentWith(UBlueprint* Blueprint, const FString InComment, const bool Contains, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;
	if (Blueprint == nullptr) return;

	FText nodeName = FText::FromString("Comment");
	for (UEdGraph* graph : Blueprint->UbergraphPages) {
		for (UEdGraphNode* node : graph->Nodes) {
			FText name = node->GetNodeTitle(ENodeTitleType::ListView);
			if (name.EqualTo(nodeName)) {
				FString comment = node->NodeComment;
				if (comment.IsEmpty()) continue;
				if (Contains) {
					if (comment.Contains(InComment)) {
						Branches = EBPEditorOutputBranch::outTrue;
						return;
					}
				}
				else {
					if (comment.Equals(InComment)) {
						Branches = EBPEditorOutputBranch::outTrue;
						return;
					}
				}
			}
		}
	}
}

void UElgEditorBP_UBlueprint::HasNodeCommentWith(UBlueprint* Blueprint, const FString InComment, const bool Contains, EBPEditorOutputBranch& Branches)
{
	Branches = EBPEditorOutputBranch::outFalse;
	if (Blueprint == nullptr) return;
	for (UEdGraph* graph : Blueprint->UbergraphPages) {
		for (UEdGraphNode* node : graph->Nodes) {
			FText name = node->GetNodeTitle(ENodeTitleType::ListView);
			FString comment = node->NodeComment;
			if (comment.IsEmpty()) continue;
			if (Contains) {
				if (comment.Contains(InComment)) {
					Branches = EBPEditorOutputBranch::outTrue;
					return;
				}
			}
			else {
				if (comment.Equals(InComment)) {
					Branches = EBPEditorOutputBranch::outTrue;
					return;
				}
			}
		}
	}
}

FS_ElgBlueprintNodes UElgEditorBP_UBlueprint::GetNodes(UBlueprint* Blueprint)
{
	FS_ElgBlueprintNodes nodes;
	if (!Blueprint) return nodes;

	nodes.Blueprint = Blueprint;
	nodes.BlueprintName = Blueprint->GetName();

	for (UEdGraph* graph : Blueprint->UbergraphPages) {
		for (UEdGraphNode* node : graph->Nodes) {
			FS_ElgBlueprintNode nodeStruct = GetNodeStruct(Blueprint, node, graph);
			nodes.NodeMap.Add(nodeStruct.NodeGuid, nodeStruct);
		}
	}
	return nodes;
}

#pragma endregion

#pragma region LocalVariables

void UElgEditorBP_UBlueprint::GetVariableNames(UBlueprint* Blueprint, TArray<FString>& VariableNames)
{
	VariableNames.Empty();
	if (Blueprint == nullptr) return;

	for (FBPVariableDescription var : Blueprint->NewVariables) {
		VariableNames.Add(var.VarName.ToString());
	}
}



void UElgEditorBP_UBlueprint::GetLocalVariableNames(UBlueprint* Blueprint, TArray<FString>& VariableNames)
{
	VariableNames.Empty();
	if (Blueprint == nullptr) return;

	for (UEdGraph* graph : Blueprint->FunctionGraphs) {
		TArray<UK2Node_FunctionEntry*> functionEntryNodes;
		graph->GetNodesOfClass(functionEntryNodes);

		for (UK2Node_FunctionEntry* node : functionEntryNodes) {
			FText nameNode = node->GetNodeTitle(ENodeTitleType::ListView);
			for (FBPVariableDescription var : node->LocalVariables) {
				FString name = var.VarName.ToString() + " @ " + nameNode.ToString();
				VariableNames.Add(name);
			}
		}
	}
}


void UElgEditorBP_UBlueprint::GetUnusedLocalVariableNames(UBlueprint* Blueprint, TArray<FString>& VariableNames)
{
	VariableNames.Empty();
	if (Blueprint == nullptr) return;
	for (UEdGraph* graph : Blueprint->FunctionGraphs) {
		TArray<UK2Node_FunctionEntry*> functionEntryNodes;
		graph->GetNodesOfClass(functionEntryNodes);

		for (UK2Node_FunctionEntry* node : functionEntryNodes) {
			for (FBPVariableDescription var : node->LocalVariables) {
				if (!FBlueprintEditorUtils::IsVariableUsed(Blueprint, var.VarName, graph)) {
					FText nameNode = node->GetNodeTitle(ENodeTitleType::ListView);
					FString name = var.VarName.ToString() + " @ " + nameNode.ToString();
					VariableNames.Add(name);
				}				
			}
		}
	}
}


void UElgEditorBP_UBlueprint::RemoveUnusedLocalVariables(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return;

	TArray<FName> names;
	TArray<UEdGraph*> graphs;

	for (UEdGraph* graph : Blueprint->FunctionGraphs) {
		TArray<UK2Node_FunctionEntry*> functionEntryNodes;
		graph->GetNodesOfClass(functionEntryNodes);

		for (UK2Node_FunctionEntry* node : functionEntryNodes) {
			for (int32 index = 0; index < node->LocalVariables.Num(); ++index) {
				FBPVariableDescription var = node->LocalVariables[index];
				if (!FBlueprintEditorUtils::IsVariableUsed(Blueprint, var.VarName, graph)) {
					node->LocalVariables.RemoveAt(index);
					FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
				}
			}
		}
	}
}


void UElgEditorBP_UBlueprint::RenameLocalVariable(UBlueprint* Blueprint, const FString FunctionName, const FString OldVariableName, const FString NewVariableName)
{
	if (Blueprint == nullptr) return;
	if (FunctionName == "" || OldVariableName == "" || NewVariableName == "") return;
	if (OldVariableName == NewVariableName) return;

	UStruct* scope = GetFunctionScope(Blueprint, FunctionName);
	if (!scope) return;

	FBlueprintEditorUtils::RenameLocalVariable(Blueprint, scope, FName(*OldVariableName), FName(*NewVariableName));

}


void UElgEditorBP_UBlueprint::RemoveLocalVariable(UBlueprint* Blueprint, const FString FunctionName, const FString VariableName)
{
	if (Blueprint == nullptr) return;
	if (VariableName == "" || FunctionName == "") return;

	UStruct* scope = GetFunctionScope(Blueprint, FunctionName);

	if (!scope) return;

	FBlueprintEditorUtils::RemoveLocalVariable(Blueprint, scope, FName(*VariableName));
}

#pragma endregion


#pragma region BPEditor

void UElgEditorBP_UBlueprint::OpenInEditor(UBlueprint* Blueprint)
{
	if (!Blueprint) return;
	FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(Blueprint, false);
}


void UElgEditorBP_UBlueprint::OpenNodeInEditor(UBlueprint* Blueprint, FGuid NodeID)
{
	if (!Blueprint || !NodeID.IsValid()) return;
	if (UEdGraphNode* graphNode = FBlueprintEditorUtils::GetNodeByGUID(Blueprint, NodeID)) {
		FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(graphNode, false);
	}
}

void UElgEditorBP_UBlueprint::OpenNodeStructInEditor(FS_ElgBlueprintNode NodeStruct)
{
	OpenNodeInEditor(NodeStruct.Blueprint, NodeStruct.NodeGuid);
}

#pragma endregion

#pragma region CheckConnection

void UElgEditorBP_UBlueprint::CheckIfPinTypeIsConnected(TArray<UBlueprint*> InBlueprints, const FName InPinTypeName)
{
	for (UBlueprint* blueprint : InBlueprints) {
		TArray<UEdGraph*> graphs = blueprint->UbergraphPages;
		graphs.Append(blueprint->FunctionGraphs);
		for (UEdGraph* graph : graphs) {
			for (UEdGraphNode* node : graph->Nodes) {
				for (UEdGraphPin* pin : node->Pins) {
					FString pinName = pin->GetName();
					if (pinName != "Perforce") continue;
					
					bool isRightType = false;
					if (pin->PinType.PinCategory == InPinTypeName) {
						isRightType = true;
					} else if (pin->PinType.PinSubCategoryObject != nullptr) {
						if (pin->PinType.PinSubCategoryObject->GetFName() == InPinTypeName){
							isRightType = true;
						}
					}
					if (!isRightType) continue;

					bool hasConnections = pin->HasAnyConnections();
					bool test = true;
				}
			}
		}
	}
}


FS_ElgBlueprintNodes UElgEditorBP_UBlueprint::GetNodesWithUnconnectedPinType(UBlueprint* InBlueprint, const FName InPinTypeName, const FName InPinName)
{
	bool checkPinName = false;
	if (!InPinName.IsNone()) checkPinName = true;

	FS_ElgBlueprintNodes blueprintNodes;
	blueprintNodes.Blueprint = InBlueprint;
	blueprintNodes.BlueprintName = InBlueprint->GetName();

	TArray<UEdGraph*> graphs = InBlueprint->UbergraphPages;
	graphs.Append(InBlueprint->FunctionGraphs);

	for (UEdGraph* graph : graphs) {
		for (UEdGraphNode* node : graph->Nodes) {			
			for (UEdGraphPin* pin : node->Pins) {
				if (pin->Direction.GetValue() == EEdGraphPinDirection::EGPD_Output) continue; // only check input pins
				if (checkPinName && pin->GetFName() != InPinName) continue;

				bool isRightType = false;
				if (pin->PinType.PinCategory == InPinTypeName) {
					isRightType = true;
				}
				else if (pin->PinType.PinSubCategoryObject != nullptr) {
					if (pin->PinType.PinSubCategoryObject->GetFName() == InPinTypeName) {
						isRightType = true;
					}
				}
				if (!isRightType) continue;

				if (!pin->HasAnyConnections()) {
					FS_ElgBlueprintNode nodeStruct = GetNodeStruct(InBlueprint, node, graph);
					blueprintNodes.NodeMap.Add(nodeStruct.NodeGuid, nodeStruct);
					break;
				}
			}
		}
	}
	return blueprintNodes;
}

TMap<FString, FS_ElgBlueprintNodes> UElgEditorBP_UBlueprint::GetAllNodesWithUnconnectedPinType(
	TArray<UBlueprint*> InBlueprints, const FName InPinTypeName, const FName InPinName)
{
	TMap<FString, FS_ElgBlueprintNodes> returnMap;
	
	bool checkPinName = false;
	if (!InPinName.IsNone()) checkPinName = true;

	for (UBlueprint* blueprint : InBlueprints) {
		FS_ElgBlueprintNodes blueprintNodes = GetNodesWithUnconnectedPinType(blueprint, InPinTypeName, InPinName);
		if (!blueprintNodes.HasNodes()) continue;
		returnMap.Add(blueprintNodes.BlueprintName, blueprintNodes);
	}

	return returnMap;
}


bool UElgEditorBP_UBlueprint::HasStructNodes(FS_ElgBlueprintNodes InNodesStruct)
{
	if (InNodesStruct.NodeMap.Num() == 0) return false;
	return true;
}

#pragma endregion


#pragma region Helpers

AActor* UElgEditorBP_UBlueprint::GetDefaultObjectActor(UBlueprint* Blueprint)
{
	if (Blueprint == nullptr) return nullptr;

	UClass* generatedClassAsClass = Blueprint->GeneratedClass;
	UBlueprintGeneratedClass* generatedClass = (UBlueprintGeneratedClass*)(generatedClassAsClass);
	UObject* defaultObject = generatedClass->GetDefaultObject();

	AActor* actor = Cast<AActor>(defaultObject);
	return actor;
}


UStruct* UElgEditorBP_UBlueprint::GetNodeScope(UK2Node* Node)
{
	UFunction* func = FFunctionFromNodeHelper::FunctionFromNode(Node);
	UStruct* graphStruct = Cast<UStruct>(func);
	return graphStruct;
}


UStruct* UElgEditorBP_UBlueprint::GetFunctionScope(UBlueprint* Blueprint, const FString FunctionName)
{
	FText functionName = FText::FromString(FunctionName);

	UStruct* scope = nullptr;

	for (UEdGraph* graph : Blueprint->FunctionGraphs) {
		TArray<UK2Node_FunctionEntry*> functionEntryNodes;
		graph->GetNodesOfClass(functionEntryNodes);

		for (UK2Node_FunctionEntry* node : functionEntryNodes) {
			FText nameNode = node->GetNodeTitle(ENodeTitleType::ListView);
			if (nameNode.EqualTo(functionName)) {
				scope = GetNodeScope(node);
				return scope;
			}
		}
	}

	return scope;
}


void UElgEditorBP_UBlueprint::GetNodeNameAndType(UEdGraphNode* Node, FString& NodeName, FString& NodeType)
{
	NodeName = Node->GetNodeTitle(ENodeTitleType::ListView).ToString();

	if (UK2Node_CallFunction* node_CallFunction = Cast<UK2Node_CallFunction>(Node)) {

		if (UClass* parent = node_CallFunction->FunctionReference.GetMemberParentClass())			
		{	
			NodeType = parent->GetFName().ToString() + "." + node_CallFunction->FunctionReference.GetMemberName().ToString();
		} else if (!node_CallFunction->FunctionReference.GetMemberGuid().IsValid()) {
			if (UFunction* TargetFunction = node_CallFunction->GetTargetFunction()) {
				NodeType = TargetFunction->GetOuterUClass()->GetName() + "." + TargetFunction->GetName();
			} else {
				NodeType = node_CallFunction->FunctionReference.GetMemberName().ToString();
			}
		} else {
			NodeType = "CallLocalFunction";
		}
	}
	else if (Cast<UK2Node_VariableGet>(Node)) {
		NodeType = "VariableGet";
	} else if (Cast<UK2Node_VariableSet>(Node)) {
		NodeType = "VariableSet";
	} else if (Cast<UK2Node_CustomEvent>(Node))	{
		NodeType = "EventCustom";
	} else if (UK2Node_MacroInstance* node_MacroInstance = Cast<UK2Node_MacroInstance>(Node)) {
		NodeType = node_MacroInstance->GetSourceBlueprint()->GetFName().ToString() + "." + node_MacroInstance->GetMacroGraph()->GetFName().ToString();
	} else if (Cast<UK2Node_ComponentBoundEvent>(Node))	{
		NodeType = Node->GetClass()->GetFName().ToString();
	} else if (UK2Node_Event* node_Event = Cast<UK2Node_Event>(Node)) {
		NodeType = node_Event->GetFunctionName().ToString();
		if (UClass* parent = node_Event->EventReference.GetMemberParentClass()) {
			NodeType = "Event." + parent->GetFName().ToString() + "." + NodeType;
		}
	} else if (Cast<UK2Node_Knot>(Node)) {
		NodeType = "RerouteNode";
	} else if (Cast<UK2Node_FunctionEntry>(Node)) {
		NodeType = Node->GetClass()->GetFName().ToString();
		NodeName += ".FunctionEntry";
	} else {
		// maybe remove the "K2Node_" part?
		NodeType = Node->GetClass()->GetFName().ToString();
	}
}


bool UElgEditorBP_UBlueprint::CreateNodeStatsStruct(UBlueprint* InBlueprint, FS_ElgBlueprintNodeStats& OutNodeStats, const FString OnlyNodeName, const bool bCheckNodeType)
{
	if (InBlueprint == nullptr) return false;

	bool bCheckNodeName = false;
	bool bUseWildcard = false;
	if (!OnlyNodeName.IsEmpty()) {
		bCheckNodeName = true;
		if (OnlyNodeName.Contains("*")) bUseWildcard = true;
	}

	TMap<FString, int32> tempMapForNameCountSort;
	TMap<FString, int32> tempMapForTypeCountSort;

	OutNodeStats.Blueprint = InBlueprint;
	OutNodeStats.BlueprintName = InBlueprint->GetName();

	FString displayName;
	FString nodeType;

	// Iterate on all the Graphs and the Construction Script and Functions.
	TArray<UEdGraph*> graphs = InBlueprint->UbergraphPages;
	graphs.Append(InBlueprint->FunctionGraphs);
	for (UEdGraph* graph : graphs) {
		for (UEdGraphNode* node : graph->Nodes) {
			GetNodeNameAndType(node, displayName, nodeType);

			if (bCheckNodeName){
				FString nameToCheck = nodeType;
				if (!bCheckNodeType) {
					nameToCheck = displayName;
				}
				if (bUseWildcard) {
					if (!nameToCheck.MatchesWildcard(OnlyNodeName)) continue;
				} else {
					if (!nameToCheck.Equals(OnlyNodeName)) continue;
				}
			}

			OutNodeStats.NodeIDMap.Add(node->NodeGuid, nodeType);

			OutNodeStats.DisplayNameCountMap.FindOrAdd(displayName) += 1;
			tempMapForNameCountSort.FindOrAdd(displayName) += 1;
			OutNodeStats.NodeTypeCountMap.FindOrAdd(nodeType) += 1;
			tempMapForTypeCountSort.FindOrAdd(nodeType) += 1;
			OutNodeStats.DisplayNamesSorted.AddUnique(displayName);
			OutNodeStats.NodeTypeSorted.AddUnique(nodeType);
			OutNodeStats.DisplayTypeMap.Add(displayName, nodeType);
			OutNodeStats.NodeCount += 1;
		}
	}

	// if we are checking for specific node(s) and we didn't find any return out here.
	if (bCheckNodeName && OutNodeStats.NodeCount == 0) {
		OutNodeStats = FS_ElgBlueprintNodeStats(); // make sure the struct is empty and not have any old data.
		return false;
	}

	OutNodeStats.DisplayNamesSorted.Sort();
	OutNodeStats.NodeTypeSorted.Sort();

	// sort on the node count
	tempMapForNameCountSort.ValueSort([](int32 A, int32 B) {
		return A > B;
	});
	tempMapForNameCountSort.GetKeys(OutNodeStats.DisplayNamesCountSorted);

	// sort on the node count
	tempMapForTypeCountSort.ValueSort([](int32 A, int32 B) {
		return A > B;
	});
	tempMapForTypeCountSort.GetKeys(OutNodeStats.NodeTypeCountSorted);

	return true;
}


bool UElgEditorBP_UBlueprint::CreateBlueprintNodesStruct(UBlueprint* InBlueprint, FS_ElgBlueprintNodes& OutNodes, const FString OnlyNodeName /*= ""*/, const bool bCheckNodeType /*= true*/)
{
	if (InBlueprint == nullptr) return false;

	bool bCheckNodeName = false;
	bool bUseWildcard = false;
	if (!OnlyNodeName.IsEmpty()) {
		bCheckNodeName = true;
		if (OnlyNodeName.Contains("*")) bUseWildcard = true;
	}

	OutNodes.Blueprint = InBlueprint;
	OutNodes.BlueprintName = InBlueprint->GetName();

	FString displayName;
	FString nodeType;

	// Iterate on all the Graphs and the Construction Script and Functions.
	TArray<UEdGraph*> graphs = InBlueprint->UbergraphPages;
	graphs.Append(InBlueprint->FunctionGraphs);
	for (UEdGraph* graph : graphs) {
		for (UEdGraphNode* node : graph->Nodes) {

			if (bCheckNodeName) {
				GetNodeNameAndType(node, displayName, nodeType);
				FString nameToCheck = nodeType;
				if (!bCheckNodeType) {
					nameToCheck = displayName;
				}
				if (bUseWildcard) {
					if (!nameToCheck.MatchesWildcard(OnlyNodeName)) continue;
				}
				else {
					if (!nameToCheck.Equals(OnlyNodeName)) continue;
				}
			}
			
			FS_ElgBlueprintNode nudeStruct;
			nudeStruct = GetNodeStruct(InBlueprint, node, graph);
			OutNodes.NodeMap.Add(nudeStruct.NodeGuid, nudeStruct);
		}
	}

	// if we are checking for specific node(s) and we didn't find any return out here.
	if (bCheckNodeName && OutNodes.NodeMap.Num() == 0) {
		OutNodes = FS_ElgBlueprintNodes(); // make sure the struct is empty and not have any old data.
		return false;
	}

	return true;
}


FS_ElgBlueprintNode UElgEditorBP_UBlueprint::GetNodeStruct(UBlueprint* Blueprint, UEdGraphNode* Node, UEdGraph* InGraph/* = nullptr*/)
{
	FS_ElgBlueprintNode nodeInfo;
	if (!Blueprint || !Node) return nodeInfo;

	FString display, nodeType;
	GetNodeNameAndType(Node, display, nodeType);
	nodeInfo.DisplayName = display;
	nodeInfo.TypeName = nodeType;
	nodeInfo.NodeGuid = Node->NodeGuid;
	nodeInfo.NodeComment = Node->NodeComment;
	nodeInfo.ErrorMsg = Node->ErrorMsg;
	nodeInfo.Blueprint = Blueprint;
	nodeInfo.BlueprintName = Blueprint->GetName();

	if (InGraph) nodeInfo.GraphName = InGraph->GetName();

	return nodeInfo;
}

#pragma endregion

