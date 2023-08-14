// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class QOL_Extension : ModuleRules
{
	public QOL_Extension(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				System.IO.Path.GetFullPath(Target.RelativeEnginePath) + "/Source/Editor/Blutility/Private"
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "LevelEditor", "ToolMenus", "Projects", "Blutility" ,  "EditorScriptingUtilities" , "UMG", "UMGEditor",
				"UnrealEd", "InputCore", "MeshDescriptionOperations", "RHI", "Engine", "GeometryCache", "LevelSequence", "CinematicCamera",
				"Niagara", "LevelEditor", "Landscape"
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
