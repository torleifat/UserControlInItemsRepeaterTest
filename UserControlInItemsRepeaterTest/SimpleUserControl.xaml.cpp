#include "pch.h"
#include "SimpleUserControl.xaml.h"
#if __has_include("SimpleUserControl.g.cpp")
#include "SimpleUserControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::UserControlInItemsRepeaterTest::implementation
{
	winrt::hstring SimpleUserControl::Data()
	{
		return m_Data;
	}

	void SimpleUserControl::Data(const winrt::hstring& Value)
	{
		m_Data = Value;
		winrt::Microsoft::UI::Xaml::Controls::ToolTipService::SetToolTip(*this, winrt::box_value(Value));
	}
}
