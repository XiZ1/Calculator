#include <iostream>

#include "input.h"

void input::start_entering_data(double* f_number, char* sign, double* s_number)
{
	std::cout << "Enter the first number: ";
	entering_number(f_number);
	std::cout << "Enter the sign: ";
	entering_sign(sign);
	std::cout << "Enter the second number: ";
	entering_number(s_number);
}

void input::entering_number(double* number)
{
	std::cin >> *number;
}

void input::entering_sign(char* sign)
{
	std::cin >> *sign;
}
