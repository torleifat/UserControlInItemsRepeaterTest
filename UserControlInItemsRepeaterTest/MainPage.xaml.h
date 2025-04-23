#pragma once

#include "MainPage.g.h"

namespace winrt::UserControlInItemsRepeaterTest::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        winrt::Windows::Foundation::Collections::IObservableVector<hstring> Items();
        
        void Repeater_SizeChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::SizeChangedEventArgs const& e);
        //void ItemsView_SizeChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::SizeChangedEventArgs const& e);

    private:
        winrt::Windows::Foundation::Collections::IObservableVector<hstring> m_Items;
    };
}

namespace winrt::UserControlInItemsRepeaterTest::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>{};
}
