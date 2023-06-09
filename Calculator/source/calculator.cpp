/*
 * Copyrigth (C) 2022 Jakub G�recki - All Rights Reserved.
 * Gmail: jakub.xiz1.gorecki@gmail.com
 * GitHub: https://github.com/XiZ1
 */

#include "calculator.h"
#include "standard_calculator.h"
#include "advanced_calculator.h"
#include "developer_calculator.h"
#include "unit_conversion_calculator.h"
#include <conio.h>

/*
	PUBLIC:
*/

void c_calculator::start_calculator_app()
{  // NOLINT(clang-diagnostic-missing-noreturn)
	do
	{
		clear_screen();
		display_the_message("Choose calculator mode:\n 1. Standard Calculator.\n 2. Advanced Calculator.\n 3. Developer Calculator.\n 4. Unit Conversion Calculator.\n 5.EXIT.\n");
		switch (_getch())
		{
			case '1':
			{
				c_standard_calculator o_standard_calculator;
				o_standard_calculator.start_standard_calculator();
			}break;

			case '2':
			{
				c_advanced_calculator o_advanced_calculator;
				o_advanced_calculator.start_advanced_calculator();
			}break;

			case '3':
			{
				c_developer_calculator o_developer_calculator;
				o_developer_calculator.start_developer_calculator();
			}break;

			case '4':
			{
				c_unit_conversion_calculator o_unit_conversion_calculator;
				o_unit_conversion_calculator.start_unit_conversion_calculator();
			}break;

			case '5':
			{
				_exit(0);
			}

			default:
			{
				NULL;
			}break;
		}
	}
	while (true);
}

/*
	PRIVATE:
*/

void c_calculator::display_the_message(const string& message)
{
	cout << message;
}

void c_calculator::clear_screen()
{
	system("cls");
}

bool c_calculator::whether_exit()
{
	clear_screen();
	display_the_message("Do you want to exit y/n ?\n");
	if (_getch() == 'y')
	{
		return false;
	}
	return true;
}
