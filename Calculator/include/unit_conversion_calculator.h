#pragma once

#include "calculator.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class c_calculator;

class c_unit_conversion_calculator
{
public:

	void start_unit_conversion_calculator();

private:

	c_calculator cal;
};
