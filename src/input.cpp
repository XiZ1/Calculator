#include <iostream>

#include "input.h"

void input::start_entering_data(double* f_number, char* sign, double* s_number)
{
	std::cout << "Enter the first number: ";
	entering_first_number(f_number);
	std::cout << "Enter the sign: ";
	entering_sign(sign);
	std::cout << "Enter the second number: ";
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
