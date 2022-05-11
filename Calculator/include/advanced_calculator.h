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
	c_calculator cal;
	c_standard_calculator std_cal;

	enum mathematical_operation { ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION };
	static const int tab_size = 4;
	char tab_advanced_math_sign[tab_size] = { '+', '-', '*', '/' };

	bool enter_the_date();
	float do_mathematical_operation(int);
};