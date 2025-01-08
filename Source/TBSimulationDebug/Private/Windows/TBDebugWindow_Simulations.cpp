// Copyright Lewis Scrivens. All Rights Reserved.

#include "Windows/TBDebugWindow_Simulations.h"

#include <imgui.h>

UTBDebugWindow_Simulations::UTBDebugWindow_Simulations()
{
	WindowSettings.WindowTitle = "Simulations";
	WindowSettings.MenuTitle = "Simulations";
	WindowSettings.MenuCategory = "Plugins.Toolbox.Simulation";
}

void UTBDebugWindow_Simulations::DrawWindowContents()
{
	const ImGui::FScopedContext ScopedContext;
	if (!ScopedContext)
	{
		return;
	}

	ImGui::Text("This is the simulations window!");
}