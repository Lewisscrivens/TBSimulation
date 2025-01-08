// Copyright Lewis Scrivens. All Rights Reserved.

#pragma once

#include <UObject/Object.h>

#include "TBSimulation.generated.h"

UCLASS()
class TBSIMULATION_API UTBSimulation : public UObject
{
	GENERATED_BODY()

public:

	/// TODO: InitialiseState
	/// TODO: PreUpdateState
	/// TODO: UpdateState (Re-sim, simulation state etc.) 
	/// TODO: OnRollback
	/// TODO: FinalizeState
	/// TODO: RestoreState
	/// TODO: FTBSimulationConfig Equivelant to ConfigureInstance
};

// MAKE USE OF TEMPLATES AND CONCEPTS WHERE NECESSARY
// MAKE USE OF GAMEPLAY MESSAGES, INSTANCED STRUCTS AND CUSTOM SIMULATION CUEUE'S THAT CALL GAMEPLAY CUEUE'S AS AN OPTION.