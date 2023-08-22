#include "panels/AppMetrics.h"
#include "ImGui/imgui_demo.cpp"

namespace wi::Venturi
{
    void AppMetrics::PushLocalStyle()
    {
    }

    void AppMetrics::OnUIRender(const char* name, bool& open)
    {
        ImGui::ShowMetricsWindow(&open);
    }
}