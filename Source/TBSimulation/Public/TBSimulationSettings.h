// Copyright Lewis Scrivens. All Rights Reserved.

#pragma once

#include <Engine/DeveloperSettings.h>

#include "TBSimulationSettings.generated.h"

/// @brief TBSimulation game user settings (Game settings)
UCLASS(Config=Game, DefaultConfig, autoexpandcategories=("General"), meta = (DisplayName = "TB Simulation"))
class TBSIMULATION_API UTBSimulationSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	
	static const UTBSimulationSettings* Get();
	
protected:
	
	///...
};