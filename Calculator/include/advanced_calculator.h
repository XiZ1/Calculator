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

	enum mathematical_operation { ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, ELEMENT, INVOLUTION };
	static constexpr int tab_size = 6;
	char tab_advanced_math_sign[tab_size] = { '+', '-', '*', '/', '|', '^'};

	float do_mathematical_operation(int);

	float element()
	{
		return std_cal.first_number * sqrt(std_cal.second_number);
	}
	float involution()
	{
		return pow(std_cal.first_number, std_cal.second_number);
	}
};