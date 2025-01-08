// Copyright Lewis Scrivens. All Rights Reserved.

#include "TBSimulationEditorModule.h"

IMPLEMENT_MODULE(FTBSimulationEditorModule, TBSimulationEditor);

#define LOCTEXT_NAMESPACE "FTBSimulationEditorModule"

FTBSimulationEditorModule& FTBSimulationEditorModule::Get()
{
	return FModuleManager::GetModuleChecked<FTBSimulationEditorModule>("TBSimulationEditor");
}

void FTBSimulationEditorModule::StartupModule()
{
	///...
}

void FTBSimulationEditorModule::ShutdownModule()
{
	///...
}

#undef LOCTEXT_NAMESPACE