// Copyright Lewis Scrivens. All Rights Reserved.

#pragma once

#include <Debug/Windows/TBDebugWindow_Base.h>

#include "TBDebugWindow_Simulations.generated.h"

UCLASS()
class TBSIMULATIONDEBUG_API UTBDebugWindow_Simulations : public UTBDebugWindow_Base
{
	GENERATED_BODY()

public:

	UTBDebugWindow_Simulations();

	/// Begin UTBDebugWindow Override
	virtual void DrawWindowContents() override;
	/// End UTBDebugWindow Override
};