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

	c_calculator cal;
};