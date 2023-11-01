#pragma once
#include <iostream>

class input
{
public:
	static void start_entering_data(double* f_number, char* sign, double* s_number);
private:
	static bool validate_input(const std::string& error_message);
	static void entering_number(double* number);
	static void entering_sign(char* sign);
};
