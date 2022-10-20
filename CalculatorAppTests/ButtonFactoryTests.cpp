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
		TEST_METHOD(CrateNumberButton)
		{
			wxButton* nine = ButtonFactory::CreateButton(win, '9', "9", wxPoint(10, 10), wxSize(20, 20), font);

			int id = nine->GetId();

			Assert::AreEqual(57, id);
		}
		TEST_METHOD(CreatePlusButton)
		{
			wxButton* plus = ButtonFactory::CreateButton(win, '+', "+", wxPoint(10, 10), wxSize(20, 20), font);

			std::string str = plus->GetLabel();

			Assert::IsTrue(str == "+");
		}
		TEST_METHOD(CreateLeftParenthesis)
		{
			wxButton* leftParenthesis = ButtonFactory::CreateButton(win, '(', "(", wxPoint(10, 10), wxSize(100, 10), font);

			std::string str = leftParenthesis->GetLabel();
			std::string compare = "(";

			Assert::AreEqual(compare, str);
		}
		TEST_METHOD(CreateModButton)
		{
			wxButton* modButton = ButtonFactory::CreateButton(win, 89, "%", wxPoint(10, 10), wxSize(100, 10), font);

			std::string str = modButton->GetLabel();
			std::string compare = "%";

			Assert::AreEqual(compare, str);
		}
		TEST_METHOD(CreateZeroButton)
		{
			wxButton* zeroButton = ButtonFactory::CreateButton(win, 400, "0", wxPoint(10, 10), wxSize(100, 10), font);

			int id = zeroButton->GetId();

			Assert::AreEqual(400, id);
		}
		TEST_METHOD(CreateDivisionButton)
		{
			wxButton* divisionButton = ButtonFactory::CreateButton(win, '/', "/", wxPoint(10, 10), wxSize(100, 10), font);

			std::string str = divisionButton->GetLabel();
			std::string compare = "/";

			Assert::AreEqual(compare, str);
		}
		TEST_METHOD(CreateMultiplicationButton)
		{
			wxButton* multiplicationButton = ButtonFactory::CreateButton(win, 400, "*", wxPoint(10, 10), wxSize(100, 10), font);

			std::string str = multiplicationButton->GetLabel();
			std::string compare = "+";

			Assert::IsFalse(compare == str);
		}
	};
}