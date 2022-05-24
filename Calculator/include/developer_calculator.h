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
	enum NUMBERS_SYSTEM{BIN, OCT, DEC, HEX};
	int number = 0;
	string str_num;

	void choose_number_system_conversion();
	static void get_number(int&);
	static void get_number(string&);
	void convert(NUMBERS_SYSTEM);
	int oct_to_bin(int);
	int dec_to_bin(int);
	void hex_to_bin(string);

};