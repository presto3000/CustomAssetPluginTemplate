// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PrestoCustomAssetsEditor : ModuleRules
{
	public PrestoCustomAssetsEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        
        			PublicDependencyModuleNames.AddRange(
        			new string[] {
        			"Core",
        			"Projects",
        			"Engine",
        			"CoreUObject",
        			"PlacementMode",
        		});
        
        			if (Target.WithAutomationTests)
        			{
        
        				PublicDependencyModuleNames.AddRange(
        					new string[]
        					{
        						"LevelEditor"
        					}
        				);
        			}
        
        			PrivateDependencyModuleNames.AddRange(
        				new string[]
        				{
					        "PrestoCustomAssetsRuntime"
				        }
        			);
        
        			PrivateDependencyModuleNames.AddRange(
        				new string[]{
        					"AppFramework",
        					"ApplicationCore",
        					"AssetDefinition",
        					"AssetTools",
        					"AssetRegistry",
        					"BlueprintGraph",
        					"ContentBrowser",
        					"DesktopWidgets",
        					"DetailCustomizations",
        					"EditorFramework",
        					"EditorScriptingUtilities",
        					"EditorStyle",
        					"EditorSubsystem",
        					"EditorWidgets",
        					"GraphEditor",
        					"InputCore",
        					"Kismet",
        					"KismetWidgets",
        					"PropertyEditor",
        					"Slate",
        					"SlateCore",
        					"SourceControl",
        					"StructUtils",
        					"StructUtilsEditor",
        					"ToolMenus",
        					"ToolWidgets",
        					"TypedElementFramework",
        					"TypedElementRuntime",
        					"UnrealEd",
        				}
        			);
        
        			PrivateIncludePaths.AddRange(
        				new string[] {
        				});
	}
}
