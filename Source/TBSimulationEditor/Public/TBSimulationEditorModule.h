// Copyright Lewis Scrivens. All Rights Reserved.

#pragma once

#include <Modules/ModuleManager.h>

class FTBSimulationEditorModule : public IModuleInterface
{
	
public:

    static FTBSimulationEditorModule& Get();
	
    /// Begin IModuleInterface Override
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    /// End IModuleInterface Override
};