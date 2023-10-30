#include "input.h"
#include <iostream>

void input::start_entering_data(double* f_number, char* sign, double* s_number)
{
	entering_first_number(f_number);
	entering_sign(sign);
	entering_second_number(s_number);
}

void input::entering_first_number(double* f_number)
{
	std::cin >> *f_number;
}

void input::entering_sign(char* sign)
{
	std::cin >> *sign;
}

void input::entering_second_number(double* s_number)
{
	std::cin >> *s_number;
}
