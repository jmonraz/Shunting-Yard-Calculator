#pragma once
#include "wx/wx.h"
#include <stack>
#include <iostream>
#include <string>
#include <queue>
#include <vector>

class CalculatorProcessor
{
private:
	std::string input = "";
	std::string error = "";
	std::queue<std::string> output;
	std::stack<std::string> operators;
	std::vector<std::string> tokens;
	std::vector<double> out;
	CalculatorProcessor() {}
	static CalculatorProcessor* _calculatorProcessor;
	
public:
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	CalculatorProcessor& operator=(CalculatorProcessor& other) = delete;
	static CalculatorProcessor* GetInstance();
	void Calculate(std::string calc);
	void GenerateTokens(std::string calc);
	std::string ConvertString(std::string str);
	double SolveRPN();
	void ClearError();
	void ClearCalculator();
};

