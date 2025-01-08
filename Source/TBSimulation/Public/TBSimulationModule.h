// Copyright Lewis Scrivens. All Rights Reserved.

#pragma once

#include <Modules/ModuleManager.h>

class FTBSimulationModule : public IModuleInterface
{
	
public:

	static FTBSimulationModule& Get();

	/// Begin IModuleInterface Override
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	/// End IModuleInterface Override
	
};