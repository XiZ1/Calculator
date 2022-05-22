#include "standard_calculator.h"
#include <cmath>

/*
	PUBLIC:
*/

c_standard_calculator::c_standard_calculator(float f_number, float s_number, float res, char sign) : first_number(f_number), second_number(s_number), result(res), math_sign(sign)
{
}

void c_standard_calculator::start_standard_calculator()
{
	bool end_loop = true;
	do
	{
		if (!c_calculator::whether_exit())
		{
			end_loop = false;
			continue;
		}
		c_calculator::clear_screen();
		c_calculator::display_the_message("STANDARD CALCULATOR\nAllowed math characters:\n\'+\' - Addition\n\'-\' - Subtraction\n\'*\' - Multiplication\n\'/\' - Division\n\n");
		if(!enter_the_date(tab_standard_math_sign, tab_size))
		{
			continue;
		}
		do_mathematical_operation(which_mathematical_operation(tab_standard_math_sign, tab_size));
		show_result();
	}while (end_loop);
}

/*
	PRIVATE:
*/

bool c_standard_calculator::enter_the_date(char* tab_math_sign, int tab_size)
{
	bool is_loop_end = true;
	do
	{
		do
		{
			c_calculator::display_the_message("Enter first number: ");
			cin >> first_number;
		}
		while (!check_input());
		do
		{
			c_calculator::display_the_message("\nEnter math sign: ");
			cin >> math_sign;
		}
		while (!is_char(tab_math_sign, tab_size));
		do
		{
			c_calculator::display_the_message("\nEnter second number: ");
			cin >> second_number;
		}
		while (!check_input());
		if (is_division_by_zero())
		{
			c_calculator::clear_screen();
			c_calculator::display_the_message("Mistake! Division by zero.");
			system("pause >nul");
			return false;
		}
		if ((math_sign == '-') && (second_number < 0))
		{
			math_sign = '+';
			second_number = abs(second_number);
		}
		is_loop_end = false;
	}while (is_loop_end);
	return true;
}

bool c_standard_calculator::check_input()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		c_calculator::display_the_message("\nBad input value. Try again.\n");
		system("pause >nul");
		return false;
	}
	return true;
}

bool c_standard_calculator::is_char(char* tab_math_sign, int tab_size)
{
	for (int i = 0; i < tab_size; i++)
	{
		if (math_sign == tab_math_sign[i])
		{
			return true;
		}
	}
	return false;
}

bool c_standard_calculator::is_division_by_zero()
{
	if ((math_sign == '/') && (second_number == (float)0))
	{
		return true;
	}
	return false;
}

int c_standard_calculator::which_mathematical_operation(char* tab_math_sign, int tab_size)
{
	for (auto i = 0; i < tab_size; i++)
	{
		if (math_sign == tab_math_sign[i])
		{
			return i;
		}
	}
	return NULL;
}

float c_standard_calculator::do_mathematical_operation(int MATHEMATICAL_OPERATION)
{
	switch (MATHEMATICAL_OPERATION)
	{
		case ADDITION:
		{
			return addition();
		}

		case SUBTRACTION:
		{
			return  subtraction();
		}

		case MULTIPLICATION:
		{
			return  multiplication();
		}

		case DIVISION:
		{
			return  division();
		}

		default:
		{
			return NULL;
		}
	}
}

void c_standard_calculator::show_result()
{
	c_calculator::clear_screen();
	cout << first_number << " " << math_sign << " " << second_number << " = " << result << '\n';
	system("pause >nul");
}