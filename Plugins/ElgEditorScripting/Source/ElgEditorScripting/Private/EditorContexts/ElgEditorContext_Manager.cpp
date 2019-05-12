// Copyright 2019 ElgSoft. All rights reserved. 
// Elg001.ElgEditorScripting - ElgSoft.com

#include "ElgEditorContext_Manager.h"
#include "ElgEditorContext_LevelEditor.h"
#include "ElgEditorContext_AssetBrowser.h"
#include "ElgEditorContext_Config.h"



UElgEditorContext_LevelEditor* UElgEditorContext_Manager::GetLevelEditorContext()
{
	if (LevelEditorContext == nullptr) {
		LevelEditorContext = NewObject<UElgEditorContext_LevelEditor>();
		LevelEditorContext->Setup();
	}
	return LevelEditorContext;
}


UElgEditorContext_AssetBrowser* UElgEditorContext_Manager::GetAssetBrowserContext()
{
	if (AssetBrowserContext == nullptr) {
		AssetBrowserContext = NewObject<UElgEditorContext_AssetBrowser>();
		AssetBrowserContext->Setup();
	}
	return AssetBrowserContext;
}


UElgEditorContext_Config* UElgEditorContext_Manager::GetConfigContext(FString ConfigFilename, FString ConfigSection)
{
	// check if we already has a config for the file and section.
	for (UElgEditorContext_Config* config : ConfigContexts) {
		if (config->Name == ConfigFilename && config->Section == ConfigSection) {
			return config;
		}
	}

	// create a new config object for the file and section
	UElgEditorContext_Config* config = NewObject<UElgEditorContext_Config>();;
	config->Setup(ConfigFilename, ConfigSection);
	ConfigContexts.Add(config);
	return config;
}
