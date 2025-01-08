// Copyright Lewis Scrivens. All Rights Reserved.

using UnrealBuildTool;

public class TBSimulationEditor : ModuleRules
{
    public TBSimulationEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "UnrealEd",
            "Slate",
            "SlateCore"
        });
    }
}