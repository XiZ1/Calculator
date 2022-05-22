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
	enum LENGTH_UNIT {mm, cm, dm, m, km};
	enum MASS_UNIT { g, dag, kg, t };
	enum VOLUME_UNIT {ml, cl, dl, l};

	float unit = 0;

	static constexpr int tab_length_unit_size{ 5 };
	static constexpr int tab_other_unit_size{ 4 };

	const string tab_length_units_names[tab_length_unit_size]{ "mm", "cm", "dm", "m", "km" };
	const string tab_mass_units_names[tab_other_unit_size]{ "g", "dag", "kg", "t" };
	const string tab_volume_units_names[tab_other_unit_size]{ "ml", "cl", "dl", "l" };

	std::vector<float> result_conversion;
	std::vector<string> tab_res_con_unit_name;


	void choose_conversion_units();

	static int choose_unit();
	void create_unit_name_tab(const string [], const int&, const int&);
	void get_unit_value(float&);
	void show_result_conversion();
	bool whether_exit();

	void start_length_conversion();
	void start_mass_conversion();
	void start_volume_conversion();

	void unit_length_convert(std::vector<float>&, const int&);
	void unit_mass_convert(std::vector<float>&, const int&);
	void unit_volume_convert(std::vector<float>&, const int&);
};
