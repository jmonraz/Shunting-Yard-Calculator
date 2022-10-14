#include "CalculatorProcessor.h"
#include <stack>
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <sstream>

CalculatorProcessor* CalculatorProcessor::_calculatorProcessor = nullptr;

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (_calculatorProcessor == nullptr)
	{
		_calculatorProcessor = new CalculatorProcessor();
	}
	return _calculatorProcessor;
}

void CalculatorProcessor::Calculate(std::string calc)
{
	std::string str = ConverString(calc);

	GenerateTokens(str);



}

void CalculatorProcessor::GenerateTokens(std::string calc)
{
	std::istringstream iss(calc);

	std::string s;
	while (iss >> s)
	{
		tokens.push_back(s);
	}
}

std::string CalculatorProcessor::ConverString(std::string str)
{
	std::string temp = str;

	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] == '+' ||
			temp[i] == '*' ||
			temp[i] == '(' ||
			temp[i] == ')' ||
			temp[i] == '/' ||
			temp[i] == '%' ||
			temp[i] == '-')
		{
			temp.insert(i, 1, ' ');
			temp.insert(i + 2, 1, ' ');
			i += 2;
		}
	}
	return temp;
}
