/*
 * Copyrigth (C) 2022 Jakub Górecki - All Rights Reserved.
 * Gmail: jakub.xiz1.gorecki@gmail.com
 * GitHub: https://github.com/XiZ1
 */

#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

class c_standard_calculator;
class c_advanced_calculator;
class c_developer_calculator;
class c_unit_conversion_calculator;

class c_calculator
{
public:
	friend class c_standard_calculator;
	friend class c_advanced_calculator;
	friend class c_developer_calculator;
	friend class c_unit_conversion_calculator;

	static void start_calculator_app();

private:
	static void display_the_message(const string&);
	static void clear_screen();
	static bool whether_exit();
};
