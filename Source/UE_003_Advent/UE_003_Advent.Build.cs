// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_003_Advent : ModuleRules
{
	public UE_003_Advent(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
