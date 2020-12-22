// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HelloUE425 : ModuleRules
{
	public HelloUE425(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
