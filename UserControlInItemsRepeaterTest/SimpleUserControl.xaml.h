#pragma once

#include "SimpleUserControl.g.h"

namespace winrt::UserControlInItemsRepeaterTest::implementation
{
    struct SimpleUserControl : SimpleUserControlT<SimpleUserControl>
    {
        SimpleUserControl(){}

        winrt::hstring Data();
        void Data(const winrt::hstring& Value);

    private:
        winrt::hstring m_Data;
    };
}

namespace winrt::UserControlInItemsRepeaterTest::factory_implementation
{
    struct SimpleUserControl : SimpleUserControlT<SimpleUserControl, implementation::SimpleUserControl>
    {
    };
}
