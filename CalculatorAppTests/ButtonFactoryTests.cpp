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
		Window* win = new Window();
		wxFont font;
		TEST_METHOD(EqualsButton)
		{
			wxButton* button = ButtonFactory::CreateEqualsButton(win, 10, "=", wxPoint(10, 10), wxSize(25, 75));
			std::string str = button->GetLabel();
			std::string compare = "=";
			Assert::AreEqual(compare, str);
		}
		TEST_METHOD(GetClearButtonID)
		{
			wxButton* clear = ButtonFactory::CreateClearButton(win, 'C', "C", wxPoint(20,20), wxSize(25,30));
			
			int str = clear->GetId();

			Assert::AreEqual(67, str);
		}
		TEST_METHOD(CreateNegativeButton)
		{
			wxButton* negative = ButtonFactory::CreateNegativeButton(win, 'N', "+/-", wxPoint(10, 10), wxSize(40, 70), font);

			std::string str = negative->GetLabel();
			std::string compare = "NEG";
			Assert::AreNotEqual(compare, str);

		}
		TEST_METHOD(test4)
		{

		}
		TEST_METHOD(test5)
		{

		}
		TEST_METHOD(test6)
		{

		}
		TEST_METHOD(test7)
		{

		}
		TEST_METHOD(test8)
		{

		}
		TEST_METHOD(test9)
		{

		}
		TEST_METHOD(test10)
		{

		}
	};
}