#include "pch.h"
#include "MainPage.xaml.h"
#if __has_include("MainPage.g.cpp")
#include "MainPage.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::UserControlInItemsRepeaterTest::implementation
{
    MainPage::MainPage()
    {
        m_Items = winrt::single_threaded_observable_vector<hstring>();

        m_Items.Append(L"🐖");
        m_Items.Append(L"🐖");
        m_Items.Append(L"🐖");
        m_Items.Append(L"🐖");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
        m_Items.Append(L"🥕");
    }

    winrt::Windows::Foundation::Collections::IObservableVector<hstring> MainPage::Items()
    {
        return m_Items;
    }


    void MainPage::Repeater_SizeChanged(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::SizeChangedEventArgs const&)
    {
        if (Scroller().ScrollableWidth() > 0)
        {
           Scroller().ChangeView(Scroller().ScrollableWidth(), nullptr, nullptr);
        }
    }

    void MainPage::ItemsView_SizeChanged(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::SizeChangedEventArgs const& e)
    {
        auto itemsView = sender.as<winrt::Microsoft::UI::Xaml::Controls::ItemsView>();
        //itemsView.ScrollView().ScrollTo(itemsView.ScrollView().ScrollableWidth(), 0);
    }
}
