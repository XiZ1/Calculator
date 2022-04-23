#pragma once

#include <iostream>
#include <cctype>
#include <string>

using std::cout;
using std::cin;
using std::string;

class c_standard_calculator
{
private:
	enum mathematical_operation { ADDITION = 1, SUBTRACTION = 2, MULTIPLICATION = 3, DIVISION = 4 };
	float first_number, second_number, result;
	char math_sign;

	static void clear_screen();
	void enter_the_date();
	bool check_input();
	bool is_float_point(float);
	bool is_char();
	int which_mathematical_operation();
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

public:

	explicit c_standard_calculator(float f_number = 0.0, float s_number = 0.0, float res = 0.0, char = ' ');

	void start_standard_calculator();
};