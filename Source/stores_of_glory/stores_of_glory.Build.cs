// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class stores_of_glory : ModuleRules
{
	public stores_of_glory(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
