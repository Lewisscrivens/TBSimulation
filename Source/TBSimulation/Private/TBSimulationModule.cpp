// Copyright Lewis Scrivens. All Rights Reserved.

#include "TBSimulationModule.h"

IMPLEMENT_MODULE(FTBSimulationModule, TBSimulation);

#define LOCTEXT_NAMESPACE "TBSimulationModule"

FTBSimulationModule& FTBSimulationModule::Get()
{
	return FModuleManager::GetModuleChecked<FTBSimulationModule>("TBSimulation");
}

void FTBSimulationModule::StartupModule()
{
#if !UE_BUILD_SHIPPING
	FModuleManager& ModuleManager = FModuleManager::Get();
	if (ModuleManager.IsModuleLoaded("DebugToolbox"))
	{
		ModuleManager.LoadModule("TBSimulationDebug");
		ModuleManager.OnModulesChanged().AddLambda([] (FName ModuleName, EModuleChangeReason ChangeReason)
		{
			if (ModuleName == "DebugToolbox" && ChangeReason == EModuleChangeReason::ModuleUnloaded)
			{
				FModuleManager& ModuleManager = FModuleManager::Get();
				ModuleManager.UnloadModule("TBSimulationDebug");
			}
		});
	}
#endif
}

void FTBSimulationModule::ShutdownModule()
{
	///...
}

#undef LOCTEXT_NAMESPACE