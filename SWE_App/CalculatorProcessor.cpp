#include "CalculatorProcessor.h"
#include <stack>
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <sstream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iterator>

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
	std::string str = ConvertString(calc);

	GenerateTokens(str);
	
	for (int i = 0; i < tokens.size(); i++)
	{
		if (tokens[i][0] == '0' ||
			tokens[i][0] == '1' ||
			tokens[i][0] == '2' ||
			tokens[i][0] == '3' ||
			tokens[i][0] == '4' ||
			tokens[i][0] == '5' ||
			tokens[i][0] == '6' ||
			tokens[i][0] == '7' ||
			tokens[i][0] == '8' ||
			tokens[i][0] == '9')
		{
			output.push(tokens[i]);
		}
		if (tokens[i] == "Sin" ||
			tokens[i] == "Cos" ||
			tokens[i] == "Tan")
		{
			operators.push(tokens[i]);
		}
		if (tokens[i] == "+" ||
			tokens[i] == "-" ||
			tokens[i] == "*" ||
			tokens[i] == "/" ||
			tokens[i] == "%")
		{
			if (!operators.empty())
			{
				while (operators.top() == "+" ||
					operators.top() == "-" ||
					operators.top() == "/" ||
					operators.top() == "*" ||
					operators.top() == "%" &&
					operators.top() != "(")
				{
					if (tokens[i] == "*" &&
						operators.top() == "+")
					{
						break;
					}
					if (tokens[i] == "*" &&
						operators.top() == "-")
					{
						break;
					}
					if (tokens[i] == "*" &&
						operators.top() == "/")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "*" &&
						operators.top() == "%")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "*" &&
						operators.top() == "*")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "+" &&
						operators.top() == "-")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "+" &&
						operators.top() == "+")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "+" &&
						operators.top() == "*")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "+" &&
						operators.top() == "/")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "+" &&
						operators.top() == "%")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "-" &&
						operators.top() == "+")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "-" &&
						operators.top() == "-")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "-" &&
						operators.top() == "*")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "-" &&
						operators.top() == "/")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "-" &&
						operators.top() == "%")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "/" &&
						operators.top() == "+")
					{
						break;
					}
					if (tokens[i] == "/" &&
						operators.top() == "-")
					{
						break;
					}
					if (tokens[i] == "/" &&
						operators.top() == "*")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "/" &&
						operators.top() == "%")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "/" &&
						operators.top() == "/")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "%" &&
						operators.top() == "+")
					{
						break;
					}
					if (tokens[i] == "%" &&
						operators.top() == "-")
					{
						break;
					}
					if (tokens[i] == "%" &&
						operators.top() == "*")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "%" &&
						operators.top() == "/")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (tokens[i] == "%" &&
						operators.top() == "%")
					{
						std::string value = operators.top();
						operators.pop();
						output.push(value);
						break;
					}
					if (operators.empty())
					{
						break;
					}
				}
			}

			operators.push(tokens[i]);
		}
		if (tokens[i] == "(")
		{
			operators.push(tokens[i]);
		}
		if (tokens[i] == ")")
		{
			while (operators.top() != "(")
			{
				if(!operators.empty())
				{
					std::string value = operators.top();
					operators.pop();
					output.push(value);
				}
				if (operators.empty())
				{
					out = "Error!! Error!!";
					break;
				}
			}
			if (operators.top() == "(")
			{
				operators.pop();
			}
			if (!operators.empty())
			{
				if (operators.top() == "Sin" ||
					operators.top() == "Cos" ||
					operators.top() == "Tan")
				{
					std::string value = operators.top();
					operators.pop();
					output.push(value);
				}
			}
		}


	}
	while (!operators.empty())
	{
		if (operators.top() == ")" || operators.top() == "(")
		{
			out = "Error!";
			break;
		}
		if (operators.top() != "(")
		{
			std::string value = operators.top();
			operators.pop();
			output.push(value);
		}
	}

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

std::string CalculatorProcessor::ConvertString(std::string str)
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
			temp[i] == '-' )
		{
			temp.insert(i, 1, ' ');
			temp.insert(i + 2, 1, ' ');
			i += 2;
		}
	}
	return temp;
}

float CalculatorProcessor::SolveRPN()
{
	

	return 0.0f;
}
