// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FInalProjectA : ModuleRules
{
	public FInalProjectA(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"FInalProjectA",
			"FInalProjectA/Variant_Horror",
			"FInalProjectA/Variant_Horror/UI",
			"FInalProjectA/Variant_Shooter",
			"FInalProjectA/Variant_Shooter/AI",
			"FInalProjectA/Variant_Shooter/UI",
			"FInalProjectA/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
