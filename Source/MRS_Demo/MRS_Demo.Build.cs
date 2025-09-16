// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MRS_Demo : ModuleRules
{
	public MRS_Demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
