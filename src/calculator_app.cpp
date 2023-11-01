#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>

#include "calculator_app.h"
#include "input.h"
#include "valid.h"
#include "calculate.h"

calculator_app::calculator_app(const double f_number, const char sign, const double s_number)
{
	this->f_number_ = f_number;
	this->sign_ = sign;
	this->s_number_ = s_number;
}

bool calculator_app::start_app_with_ui()
{
	system("cls");  // NOLINT(concurrency-mt-unsafe)
	std::cout << "\tCALCULATOR\n\n";
	std::cout << "Choose one option. Press a number:\n\n1. Basic calculator.\n2. Exit.\n\n\n\n";
	switch (_getch())
	{
		case'1':
		{
			system("cls");  // NOLINT(concurrency-mt-unsafe)
			input::start_entering_data(&f_number_, &sign_, &s_number_);
			if (validate::start_validate_data(sign_, s_number_))
			{
				result_ = calculate::start_calculate(f_number_, sign_, s_number_);
				std::cout << "Result: " + std::to_string(result_) + "\n\n";
			}
			else
			{
				std::cout << "Incorrect value.\n";
			}
			Sleep(2000);
			return true;
		}

		case '2':
		{
			return false;
		}

		default:
		{
			system("cls");  // NOLINT(concurrency-mt-unsafe)
			std::cout << "This option doesn't exist!\nTry again.\n\n\n\n";
			Sleep(2000);
			return true;
		}
	}
}

void calculator_app::start_app_without_ui()
{
	if (validate::start_validate_data(sign_, s_number_))
	{
		result_ = calculate::start_calculate(f_number_, sign_, s_number_);
		std::cout << "Result: " + std::to_string(result_) + "\n\n";
	}
	else
	{
		std::cout << "Incorrect value.\n";
	}
}
