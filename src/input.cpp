#include <iostream>

#include "input.h"

void input::start_entering_data(double* f_number, char* sign, double* s_number)
{
	do
	{
		std::cout << "Enter the first number: ";
		entering_number(f_number);
	}while (validate_input("Error: Incorrect input value.\n"));

	do
	{
		std::cout << "Enter the mathematical sign: ";
		entering_sign(sign);
	}while (validate_input("Error: Incorrect input value.\n"));

	do
	{
		std::cout << "Enter the second number: ";
		entering_number(s_number);
	}while (validate_input("Error: Incorrect input value.\n"));
}

bool input::validate_input(const std::string& error_message)
{
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << error_message;
		return true;
	}
	return false;
}

void input::entering_number(double* number)
{
	std::cin >> *number;
}

void input::entering_sign(char* sign)
{
	std::cin >> *sign;
}
