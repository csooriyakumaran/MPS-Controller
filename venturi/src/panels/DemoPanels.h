#pragma once

#include "oak.h"


namespace wi::Venturi
{
    class DemoPanels : public Oak::Panel
    {
    public:
        DemoPanels() {}
        ~DemoPanels() = default;

        void PushLocalStyle() override;
        void OnUIRender(const char* name, bool& open) override;
    
    };
}