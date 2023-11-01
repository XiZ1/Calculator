#pragma once

class input
{
public:
	static void start_entering_data(double* f_number, char* sign, double* s_number);
private:
	static void entering_number(double* number);
	static void entering_sign(char* sign);
};
