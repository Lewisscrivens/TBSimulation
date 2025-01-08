// Copyright Lewis Scrivens. All Rights Reserved.

using EpicGames.Core;
using UnrealBuildTool;

public class TBSimulationDebug : ModuleRules
{
    public TBSimulationDebug(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core", 
            "CoreUObject", 
            "Slate",
            "SlateCore",
            "DebugToolbox",
            "ImGui"
        });
    }
}