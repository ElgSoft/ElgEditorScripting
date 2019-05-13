// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssetData;
struct FARFilter;
#ifdef ELGEDITORSCRIPTING_ElgEditorContext_AssetBrowser_generated_h
#error "ElgEditorContext_AssetBrowser.generated.h already included, missing '#pragma once' in ElgEditorContext_AssetBrowser.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorContext_AssetBrowser_generated_h

#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_24_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnAssetSelectionSignature_Parms \
{ \
	FAssetData AssetData; \
}; \
static inline void FElgEditorEventsOnAssetSelectionSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnAssetSelectionSignature, FAssetData const& AssetData) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnAssetSelectionSignature_Parms Parms; \
	Parms.AssetData=AssetData; \
	ElgEditorEventsOnAssetSelectionSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_22_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnAssetPathChangedSignature_Parms \
{ \
	FString NewPath; \
}; \
static inline void FElgEditorEventsOnAssetPathChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnAssetPathChangedSignature, const FString& NewPath) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnAssetPathChangedSignature_Parms Parms; \
	Parms.NewPath=NewPath; \
	ElgEditorEventsOnAssetPathChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_21_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnSearchBoxChangedSignature_Parms \
{ \
	FText SearchText; \
	bool bIsPrimaryBrowser; \
}; \
static inline void FElgEditorEventsOnSearchBoxChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnSearchBoxChangedSignature, FText const& SearchText, bool bIsPrimaryBrowser) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnSearchBoxChangedSignature_Parms Parms; \
	Parms.SearchText=SearchText; \
	Parms.bIsPrimaryBrowser=bIsPrimaryBrowser ? true : false; \
	ElgEditorEventsOnSearchBoxChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_20_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnFilterChangedSignature_Parms \
{ \
	FARFilter NewFilter; \
	bool bIsPrimaryBrowser; \
}; \
static inline void FElgEditorEventsOnFilterChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnFilterChangedSignature, FARFilter const& NewFilter, bool bIsPrimaryBrowser) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnFilterChangedSignature_Parms Parms; \
	Parms.NewFilter=NewFilter; \
	Parms.bIsPrimaryBrowser=bIsPrimaryBrowser ? true : false; \
	ElgEditorEventsOnFilterChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_19_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnAssetSelectionChangedSignature_Parms \
{ \
	TArray<FAssetData> SelectedAssets; \
	bool bIsPrimaryBrowser; \
}; \
static inline void FElgEditorEventsOnAssetSelectionChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnAssetSelectionChangedSignature, TArray<FAssetData> const& SelectedAssets, bool bIsPrimaryBrowser) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnAssetSelectionChangedSignature_Parms Parms; \
	Parms.SelectedAssets=SelectedAssets; \
	Parms.bIsPrimaryBrowser=bIsPrimaryBrowser ? true : false; \
	ElgEditorEventsOnAssetSelectionChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_17_DELEGATE \
static inline void FElgEditorEventsAssetSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsAssetSignature) \
{ \
	ElgEditorEventsAssetSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_16_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnAssetRenamedSignature_Parms \
{ \
	FAssetData AssetData; \
	FString OldPath; \
}; \
static inline void FElgEditorEventsOnAssetRenamedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnAssetRenamedSignature, FAssetData const& AssetData, const FString& OldPath) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnAssetRenamedSignature_Parms Parms; \
	Parms.AssetData=AssetData; \
	Parms.OldPath=OldPath; \
	ElgEditorEventsOnAssetRenamedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_15_DELEGATE \
struct _Script_ElgEditorScripting_eventElgEditorEventsOnAssetChangedSignature_Parms \
{ \
	FAssetData AssetData; \
}; \
static inline void FElgEditorEventsOnAssetChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& ElgEditorEventsOnAssetChangedSignature, FAssetData const& AssetData) \
{ \
	_Script_ElgEditorScripting_eventElgEditorEventsOnAssetChangedSignature_Parms Parms; \
	Parms.AssetData=AssetData; \
	ElgEditorEventsOnAssetChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_RPC_WRAPPERS
#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorContext_AssetBrowser(); \
	friend struct Z_Construct_UClass_UElgEditorContext_AssetBrowser_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_AssetBrowser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_AssetBrowser)


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorContext_AssetBrowser(); \
	friend struct Z_Construct_UClass_UElgEditorContext_AssetBrowser_Statics; \
public: \
	DECLARE_CLASS(UElgEditorContext_AssetBrowser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorContext_AssetBrowser)


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_AssetBrowser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_AssetBrowser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_AssetBrowser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_AssetBrowser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_AssetBrowser(UElgEditorContext_AssetBrowser&&); \
	NO_API UElgEditorContext_AssetBrowser(const UElgEditorContext_AssetBrowser&); \
public:


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorContext_AssetBrowser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorContext_AssetBrowser(UElgEditorContext_AssetBrowser&&); \
	NO_API UElgEditorContext_AssetBrowser(const UElgEditorContext_AssetBrowser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorContext_AssetBrowser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorContext_AssetBrowser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorContext_AssetBrowser)


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_PRIVATE_PROPERTY_OFFSET
#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_31_PROLOG
#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_PRIVATE_PROPERTY_OFFSET \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_RPC_WRAPPERS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_INCLASS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_PRIVATE_PROPERTY_OFFSET \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_INCLASS_NO_PURE_DECLS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorContext_AssetBrowser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_EditorContexts_ElgEditorContext_AssetBrowser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
