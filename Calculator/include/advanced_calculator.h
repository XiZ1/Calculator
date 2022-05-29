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
	c_standard_calculator std_cal_;

	enum mathematical_operation { ADDITION, SUBTRACTION, MULTIPLICATION, DIVISION, MODULO, SQUARE_ROOT, CUBE_ROOT, EXPONENTIATION, LOGARITHM, SIN, COS, TAN};
	static constexpr int tab_size = 12;
	char tab_advanced_math_sign_[tab_size] = { '+', '-', '*', '/', '%', '$', '#', '^', 'L', 'S', 'C', 'T'};

	float do_mathematical_operation(int);

	float cube_root()
	{
		return std_cal_.result_ = std_cal_.first_number_ * cbrt(std_cal_.second_number_);
	}
	float exponentiation()
	{
		return std_cal_.result_ = pow(std_cal_.first_number_, std_cal_.second_number_);
	}
	float logarithm()
	{
		return std_cal_.result_ = std_cal_.first_number_ * log10(std_cal_.second_number_);
	}
	float sin()
	{
		return std_cal_.result_ = std_cal_.first_number_ * std::sin(std_cal_.second_number_);
	}
	float cos()
	{
		return std_cal_.result_ = std_cal_.first_number_ * std::cos(std_cal_.second_number_);
	}
	float tan()
	{
		return std_cal_.result_ = std_cal_.first_number_ * std::tan(std_cal_.second_number_);
	}
};