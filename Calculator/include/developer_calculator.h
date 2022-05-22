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

	void choose_number_system_conversion();
	void get_number(int&);
	void convert(NUMBERS_SYSTEM);

};