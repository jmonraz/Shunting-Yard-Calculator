#include "pch.h"
#include "../SWE_App/CalculatorProcessor.h"
#include "CppUnitTest.h"
#include <iostream>
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorProcessorTests
{
	TEST_CLASS(CalculatorAppTests)
	{
	public:
		
		TEST_METHOD(Addition)
		{
			std::string calculation = "(2+6)-(2+3)";
			CalculatorProcessor::GetInstance()->Calculate(calculation);
			float ans = CalculatorProcessor::GetInstance()->SolveRPN();
			Assert::AreEqual(3.0f, ans);
			
		}
		TEST_METHOD(MissingParenthesis)
		{
			std::string calculation = "(2+3)-(9*5";
			CalculatorProcessor::GetInstance()->Calculate(calculation);
			double ans = CalculatorProcessor::GetInstance()->SolveRPN();
			CalculatorProcessor::GetInstance()->ClearError();
			Assert::AreEqual(0.0, ans);
		}
		TEST_METHOD(Subtraction)
		{
			CalculatorProcessor::GetInstance()->ClearError();
			CalculatorProcessor::GetInstance()->ClearCalculator();
			std::string calculation = "2-7";
			CalculatorProcessor::GetInstance()->Calculate(calculation);
			double ans = CalculatorProcessor::GetInstance()->SolveRPN();

			Assert::AreEqual(-5.0, ans);
		}
		TEST_METHOD(CosSinTan)
		{
			CalculatorProcessor::GetInstance()->ClearCalculator();
			std::string calculation = "Sin(90)";

			CalculatorProcessor::GetInstance()->Calculate(calculation);
			double ans = CalculatorProcessor::GetInstance()->SolveRPN();

			Assert::AreEqual(0.425218, ans);
		}
		TEST_METHOD(Problem1)
		{
			std::string calculation = "10*5";

			CalculatorProcessor::GetInstance()->Calculate(calculation);
			double ans = CalculatorProcessor::GetInstance()->SolveRPN();

			Assert::AreEqual(50.0, ans);
		}
		TEST_METHOD(Problem2)
		{
			std::string calculation = "10*5-(90+3)/(10*3)";

			CalculatorProcessor::GetInstance()->Calculate(calculation);
			double ans = CalculatorProcessor::GetInstance()->SolveRPN();

			Assert::AreEqual(46.9, ans);
		}
		TEST_METHOD(MissingLeftParenthesis)
		{
			std::string calculation = "10*3)-(4+2)";

			CalculatorProcessor::GetInstance()->Calculate(calculation);
			double ans = CalculatorProcessor::GetInstance()->SolveRPN();

			Assert::AreNotEqual(24.0, ans);
		}
	};
}