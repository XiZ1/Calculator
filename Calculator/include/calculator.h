#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

class c_standard_calculator;
class c_advanced_calculator;

class c_calculator
{
public:
	friend class c_standard_calculator;
	friend class c_advanced_calculator;

	void start_calculator_app();

private:
	void display_the_message(string);
	void clear_screen();
};