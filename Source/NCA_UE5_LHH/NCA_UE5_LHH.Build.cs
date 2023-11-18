// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NCA_UE5_LHH : ModuleRules
{
	public NCA_UE5_LHH(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
