// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PrestoCustomAssetsRuntime : ModuleRules
{
	public PrestoCustomAssetsRuntime(ReadOnlyTargetRules Target) : base(Target)
{
	PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

	PublicDependencyModuleNames.AddRange(
		new string[] {
			"Chaos",
			"Core",
			"CoreUObject",
			"DeveloperSettings",
			"Engine",
			"Landscape",
			"Foliage",
			"PhysicsCore",
			"Projects",
			"RenderCore",
			"RHI",
			"StructUtils"
		});

	PrivateDependencyModuleNames.AddRange(
		new string[]
		{

		}
	);

	if (Target.bBuildEditor == true)
	{
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				//"UnrealEd",
				//"Settings",
				//"SourceControl",
			}
		);
	}
}

}

