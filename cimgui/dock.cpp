#include "../imgui_dock/imgui_dock.h"
#include "cimgui.h"

CIMGUI_API void igBeginDockspace()
{
	ImGui::BeginDockspace();
}

CIMGUI_API void igEndDockspace()
{
	ImGui::EndDockspace();
}

CIMGUI_API void igShutdownDock()
{
	ImGui::ShutdownDock();
}

CIMGUI_API void igSetNextDock(ImGuiDockSlot slot)
{
	ImGui::SetNextDock(slot);
}

CIMGUI_API bool igBeginDock(CONST char* label, bool* opened, ImGuiWindowFlags extra_flags)
{
	return ImGui::BeginDock(label, opened, extra_flags);
}

CIMGUI_API void igEndDock()
{
	ImGui::EndDock();
}

CIMGUI_API void igSetDockActive()
{
	ImGui::SetDockActive();
}

CIMGUI_API void igDockDebugWindow()
{
	ImGui::DockDebugWindow();
}
