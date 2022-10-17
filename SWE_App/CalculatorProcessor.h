#pragma once
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
	std::vector<float> out;
	
	static CalculatorProcessor* _calculatorProcessor;
	CalculatorProcessor() {}
public:
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	CalculatorProcessor& operator=(CalculatorProcessor& other) = delete;
	static CalculatorProcessor* GetInstance();
	void Calculate(std::string calc);
	void GenerateTokens(std::string calc);
	std::string ConvertString(std::string str);
	float SolveRPN();
	void ClearCalculator();
};

