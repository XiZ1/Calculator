#pragma once

#include "calculator.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class c_calculator;
class c_advanced_calculator;

class c_standard_calculator
{
public:
	friend class c_advanced_calculator;

	explicit c_standard_calculator(float f_number = 0.0, float s_number = 0.0, float res = 0.0, char = ' ');

	void start_standard_calculator();

private:
	enum mathematical_operation { ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION };
	float first_number, second_number, result;
	char math_sign;
	static constexpr int tab_size = 4;
	char tab_standard_math_sign[tab_size] = { '+', '-', '*', '/' };

	bool enter_the_date(char* tab_math_sign, int tab_size);
	bool check_input();
	bool is_char(char* tab_math_sign, int tab_size);
	bool is_division_by_zero();
	int which_mathematical_operation(char* tab_math_sign, int tab_size);
	float do_mathematical_operation(int);

	float addition()
	{
		return result = first_number + second_number;
	}
	float subtraction()
	{
		return result = first_number - second_number;
	}
	float multiplication()
	{
		return result = first_number * second_number;
	}
	float division()
	{
		return result = first_number / second_number;
	}

	void show_result();
};