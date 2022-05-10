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

	enum mathematical_operation { ADDITION = 1, SUBTRACTION = 2, MULTIPLICATION = 3, DIVISION = 4 };

	bool enter_the_date();
	bool is_char();
	int which_mathematical_operation();
	float do_mathematical_operation(int);
};