#pragma once
class CalculatorProcessor
{
private:
	static CalculatorProcessor* _calculatorProcessor;
	CalculatorProcessor() {}
public:
	CalculatorProcessor(CalculatorProcessor& other) = delete;
	CalculatorProcessor& operator=(CalculatorProcessor& other) = delete;
	static CalculatorProcessor* GetInstance();
};

