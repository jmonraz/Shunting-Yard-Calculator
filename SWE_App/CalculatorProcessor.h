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
	std::string out = "";
	std::queue<std::string> output;
	std::stack<std::string> operators;
	std::vector<std::string> tokens;

	static CalculatorProcessor* _calculatorProcessor;
	CalculatorProcessor() {}
public:
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	CalculatorProcessor& operator=(CalculatorProcessor& other) = delete;
	static CalculatorProcessor* GetInstance();
	void Calculate(std::string calc);
	void GenerateTokens(std::string calc);
	std::string ConverString(std::string str);
};

