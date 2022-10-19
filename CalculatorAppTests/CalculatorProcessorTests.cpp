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
			float ans = CalculatorProcessor::GetInstance()->SolveRPN();
			CalculatorProcessor::GetInstance()->ClearError();
			Assert::AreEqual(0.0f, ans);
		}
		TEST_METHOD(Subtraction)
		{
			CalculatorProcessor::GetInstance()->ClearError();
			CalculatorProcessor::GetInstance()->ClearCalculator();
			std::string calculation = "2-7";
			CalculatorProcessor::GetInstance()->Calculate(calculation);
			float ans = CalculatorProcessor::GetInstance()->SolveRPN();

			Assert::AreEqual(-5.0f, ans);
		}
		TEST_METHOD(CosSinTan)
		{
			CalculatorProcessor::GetInstance()->ClearCalculator();
			std::string calculation = "Sin(10)";

			CalculatorProcessor::GetInstance()->Calculate(calculation);
			float ans = CalculatorProcessor::GetInstance()->SolveRPN();

			Assert::AreEqual(0.1736f, ans);
		}



	};
}