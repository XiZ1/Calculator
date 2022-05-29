#pragma once

#include "calculator.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class c_calculator;

class c_developer_calculator
{
public:
	void start_developer_calculator();

private:
	enum numbers_system{BIN, OCT, DEC, HEX};
	int number_ = 0;
	string str_num_;

	void choose_number_system_conversion();
	static void get_number(int&);
	static void get_number(string&);
	void convert(numbers_system) const;
	int oct_to_bin(int) const;
	static int dec_to_bin(int);
	static void hex_to_bin(const string&);

};