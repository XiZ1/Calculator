#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>

#include "calculator_app.h"
#include "input.h"
#include "valid.h"
#include "calculate.h"

bool calculator_app::start_app()
{
	system("cls");
	std::cout << "\tCALCULATOR\n\n";
	std::cout << "Choose one option. Press a number:\n\n1. Basic calculator.\n2. Advance calculator.\n3. Exit.\n\n\n\n";
	switch (_getch())
	{
		case'1':
		{
			system("cls");
			input::start_entering_data(&f_number_, &sign_, &s_number_);
			if (validate::start_validate_data(sign_, s_number_))
			{
				result_ = calculate::start_calculate(f_number_, sign_, s_number_);
				std::cout << "Result: " + std::to_string(result_);
			}
			else
			{
				std::cout << "Incorrect value.\n";
			}
			Sleep(2500);
			return true;
		}

		case'2':
		{
			system("cls");
			std::cout << "Work in Progress!\n\n\n\n";
			Sleep(2500);
			return true;
		}

		case '3':
		{
			system("cls");
			std::cout << "EXIT.\n\n\n\n";
			Sleep(2500);
			return false;
		}

		default:
		{
			system("cls");
			std::cout << "This option doesn't exist!\nTry again.\n\n\n\n";
			Sleep(2500);
			return true;
		}
	}
}
