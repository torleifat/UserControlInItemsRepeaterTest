#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::UserControlInItemsRepeaterTest::implementation
{
	void MainWindow::MainFrame_Loaded(winrt::Windows::Foundation::IInspectable const&, winrt::Microsoft::UI::Xaml::RoutedEventArgs const&)
	{
		MainFrame().Navigate(winrt::xaml_typename<winrt::UserControlInItemsRepeaterTest::MainPage>());
	}
}
