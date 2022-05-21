#pragma once

#include "calculator.h"
#include <iostream>
#include <string>
#include <vector>

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

	enum UNITS_NAME {LENGTH, MASS, VOLUME};
	static constexpr  int tab_length_unit_size{ 5 };
	static constexpr  int tab_other_unit_size{ 4 };
	const string tab_length_unit[tab_length_unit_size]{ "mm", "cm", "dm", "m", "km" };
	const  string tab_mass_unit[tab_other_unit_size]{ "g", "dag", "kg", "t" };
	const  string tab_volume_mass[tab_other_unit_size]{ "ml", "cl", "dl", "l" };
	std::vector<string> tab_unit_to_conversion;


	void choose_conversion_units();
	void start_length_conversion();
	void start_mass_conversion();
	void start_volume_conversion();
	void choose_unit(const string [], int);
	void create_unit_tab(const string [], int, int);
	bool whether_exit();
};
