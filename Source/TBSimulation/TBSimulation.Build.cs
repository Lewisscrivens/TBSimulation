// Copyright Lewis Scrivens. All Rights Reserved.

using UnrealBuildTool;

public class TBSimulation : ModuleRules
{
	public TBSimulation(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine",
			"DeveloperSettings",
			"AssetRegistry",
			"GameplayTags",
			"StructUtils"
		});
		
		if (Target.bBuildEditor)
		{
			PublicDependencyModuleNames.AddRange(new string[]
			{
				"Slate",
				"SlateCore",
				"UnrealEd",
				"DataValidation"
			});
		}
	}
}