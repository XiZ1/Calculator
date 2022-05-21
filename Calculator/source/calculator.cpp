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
{
	do
	{
		clear_screen();
		display_the_message("Choose calculator mode:\n1. Standard Calculator.\n2. Advanced Calculator.\n3. Developer Calculator.\n4. Unit Conversion Calculator.\n5.EXIT.\n");
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

void c_calculator::display_the_message(string message)
{
	cout << message;
}

void c_calculator::clear_screen()
{
	system("cls");
}