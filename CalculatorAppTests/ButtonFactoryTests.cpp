#include "pch.h"
#include "../SWE_App/ButtonFactory.h"
#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ButtonFactoryTests
{
	TEST_CLASS(CalculatorAppTests)
	{
	public:

		TEST_METHOD(EqualsButton)
		{
			/*wxButton* button = ButtonFactory::CreateEqualsButton(nullptr, 10, "=", wxPoint(10,10), wxSize(25,75));
			std::string str = button->GetLabel();
			std::string compare = "=";
			Assert::AreNotEqual(compare, str);*/
		}
	};
}