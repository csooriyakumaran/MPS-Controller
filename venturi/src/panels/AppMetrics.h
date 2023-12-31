#pragma once

#include "oak.h"

namespace wi::Venturi
{
    class AppMetrics : public Oak::Panel
    {
    public:
        AppMetrics() {}
        ~AppMetrics() = default;

        void PushLocalStyle();
        void OnUIRender(const char* name, bool& open);
    private:

    };
}