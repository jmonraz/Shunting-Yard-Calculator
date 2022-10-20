#include "pch.h"
#include "../SWE_App/CalculatorProcessor.h"
#include "CppUnitTest.h"
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorProcessorTests
{
	TEST_CLASS(CalculatorAppTests)
	{
	public:
		
		TEST_METHOD(Addition)
		{
			std::string calculation = "(2+6)-(2+3)";
			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);
			
			Assert::AreEqual(3.0, ans);
			
		}
		
		TEST_METHOD(Subtraction)
		{
			std::string calculation = "2-7";
			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);

			Assert::AreEqual(-5.0, ans);
		}
		TEST_METHOD(ComplexProblem2)
		{
			std::string calculation = "2+7*(5*10)/5+(15-13)+30-5/2*(20+20)/(13-3)";
			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);

			Assert::AreEqual(94.0, ans);
		}
		TEST_METHOD(Multiplication)
		{
			std::string calculation = "10*5";

			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);

			Assert::AreEqual(50.0, ans);
		}
		TEST_METHOD(ComplexProblem1)
		{
			std::string calculation = "10*5-(90+3)/(10*3)";

			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);

			Assert::AreEqual(46.9, ans);
		}
		
		TEST_METHOD(Mod)
		{
			std::string calculation = "5%3";
			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);
			
			Assert::AreEqual(2.0, ans);
		}
		TEST_METHOD(Tan)
		{
			std::string calculation = "Tan(45)";
			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);

			
			Assert::IsTrue(ans >= 1.61978 <= 1.61978);
			
		}
		TEST_METHOD(Division)
		{
			std::string calculation = "(10+10*3)/(60-10*2)";
			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);

			Assert::AreEqual(1.0, ans);
		}
		TEST_METHOD(MissingLeftParenthesis)
		{
			std::string calculation = "10*3)-(4+2)";

			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);

			Assert::AreNotEqual(24.0, ans);
		}
		TEST_METHOD(SimpleCalculation)
		{
			std::string calculation = "2+3-6/2*5";
			double ans = CalculatorProcessor::GetInstance()->Calculate(calculation);

			Assert::IsTrue(ans == -10);
		}
	};
}