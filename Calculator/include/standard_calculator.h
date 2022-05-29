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
	enum mathematical_operation { ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, MODULO, SQUARE_ROOT };
	float first_number_, second_number_, result_;
	char math_sign_;
	static constexpr int tab_size = 6;
	char tab_standard_math_sign_[tab_size] = { '+', '-', '*', '/', '%', '$'};

	bool enter_the_date(const char* tab_math_sign, int t_size);
	static bool check_input();
	bool is_char(const char* tab_math_sign, int table_size) const;
	bool is_division_by_zero() const;
	void whether_it_subtracts_a_negative_number();
	int which_mathematical_operation(const char* tab_math_sign, int t_size) const;
	float do_mathematical_operation(int);

	float addition()
	{
		return result_ = first_number_ + second_number_;
	}
	float subtraction()
	{
		return result_ = first_number_ - second_number_;
	}
	float multiplication()
	{
		return result_ = first_number_ * second_number_;
	}
	float division()
	{
		return result_ = first_number_ / second_number_;
	}
	float modulo()
	{
		return  result_ = fmod(first_number_, second_number_);
	}
	float square_root()
	{
		return result_ = first_number_ * sqrt(second_number_);
	}

	void show_result() const;
};