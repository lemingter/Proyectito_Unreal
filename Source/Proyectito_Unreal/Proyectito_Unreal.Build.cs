// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Proyectito_Unreal : ModuleRules
{
	public Proyectito_Unreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
