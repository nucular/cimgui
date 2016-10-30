// based on https://github.com/nem0/LumixEngine/blob/master/external/imgui/imgui_dock.h
// modified from https://bitbucket.org/duangle/liminal/src/tip/src/liminal/imgui_dock.h
// taken from https://github.com/slages/love-imgui/blob/master/src/libimgui/imgui_dock.h

#pragma once

#include "../imgui/imgui.h"

// Forward declarations
typedef int ImGuiWindowFlags;
typedef int ImGuiDockSlot;
typedef enum ImGuiDockSlot_ {
    ImGuiDockSlot_Left,
    ImGuiDockSlot_Right,
    ImGuiDockSlot_Top,
    ImGuiDockSlot_Bottom,
    ImGuiDockSlot_Tab,

    ImGuiDockSlot_Float,
    ImGuiDockSlot_None
};

namespace ImGui{

IMGUI_API void BeginDockspace();
IMGUI_API void EndDockspace();
IMGUI_API void ShutdownDock();
IMGUI_API void SetNextDock(ImGuiDockSlot slot);
IMGUI_API bool BeginDock(const char* label, bool* opened = NULL, ImGuiWindowFlags extra_flags = 0);
IMGUI_API void EndDock();
IMGUI_API void SetDockActive();
IMGUI_API void DockDebugWindow();

};
