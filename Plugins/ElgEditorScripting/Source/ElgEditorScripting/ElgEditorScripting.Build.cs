// Copyright 2019-2020 ElgSoft. All rights reserved. 

using UnrealBuildTool;
using System.IO;

public class ElgEditorScripting : ModuleRules
{
	public ElgEditorScripting(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivatePCHHeaderFile = "Public/ElgEditorScripting.h";

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/Blueprints"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/Blueprints"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public/EditorContexts"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/EditorContexts"));

        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "AssetRegistry",
                "UnrealEd",
                "UMGEditor",
                "Blutility",
                "LevelEditor",
                "InputCore",
                "Projects",
                "EditorStyle",
                "AssetTools",
                "BlueprintGraph",
                "Json",
                "JsonUtilities",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
