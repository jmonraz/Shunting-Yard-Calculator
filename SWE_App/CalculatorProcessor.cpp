#include "CalculatorProcessor.h"

CalculatorProcessor* CalculatorProcessor::_calculatorProcessor = nullptr;

CalculatorProcessor* CalculatorProcessor::GetInstance()
{
	if (_calculatorProcessor == nullptr)
	{
		_calculatorProcessor = new CalculatorProcessor();
	}
	return _calculatorProcessor;
}
