// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FACADE_USFX : ModuleRules
{
	public FACADE_USFX(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
        PublicDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore"});


    }
}
