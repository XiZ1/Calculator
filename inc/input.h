#pragma once

class input
{
public:
	static void start_entering_data(double* f_number, char* sign, double* s_number);
private:
	static void entering_first_number(double* f_number);
	static void entering_sign(char* sign);
	static void entering_second_number(double* s_number);
};
