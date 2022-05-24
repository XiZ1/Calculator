#pragma once

#include "calculator.h"
#include "standard_calculator.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class c_calculator;
class c_standard_calculator;

class c_advanced_calculator
{
public:
	void start_advanced_calculator();

private:
	c_standard_calculator std_cal;

	enum mathematical_operation { ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, MODULO, SQUARE_ROOT, CUBE_ROOT, EXPONENTIATION, LOGARITHM, SIN, COS, TAN};
	static constexpr int tab_size = 12;
	char tab_advanced_math_sign[tab_size] = { '+', '-', '*', '/', '%', '$', '#', '^', 'L', 'S', 'C', 'T'};

	float do_mathematical_operation(int);

	float cube_root()
	{
		return std_cal.result = std_cal.first_number * cbrt(std_cal.second_number);
	}
	float exponentiation()
	{
		return std_cal.result = pow(std_cal.first_number, std_cal.second_number);
	}
	float logarithm()
	{
		return std_cal.result = std_cal.first_number * log10(std_cal.second_number);
	}
	float sin()
	{
		return std_cal.result = std_cal.first_number * std::sin(std_cal.second_number);
	}
	float cos()
	{
		return std_cal.result = std_cal.first_number * std::cos(std_cal.second_number);
	}
	float tan()
	{
		return std_cal.result = std_cal.first_number * std::tan(std_cal.second_number);
	}
};