#include "advanced_calculator.h"
#include <conio.h>

/*
	PUBLIC:
*/

void c_advanced_calculator::start_advanced_calculator()
{
	bool end_loop = true;
	cal.clear_screen();
	do
	{
		if (!std_cal.enter_the_date())
		{
			end_loop = false;
			continue;
		}
		do_mathematical_operation(which_mathematical_operation());
		std_cal.show_result();
	} while (end_loop);
}

/*
	PRIVATE:
*/

bool c_advanced_calculator::enter_the_date()
{
	bool is_loop_end = true;
	do
	{
		cal.clear_screen();
		cal.display_the_message("If you want to quit press \'q\'.");
		if (std_cal.whether_exit(_getch()))
		{
			return false;
		}
		do
		{
			cal.clear_screen();
			cal.display_the_message("Enter first number: ");
			cin >> std_cal.first_number;
		} while (!std_cal.check_input());
		do
		{
			cal.clear_screen();
			cal.display_the_message("\nEnter math sign: ");
			cin >> std_cal.math_sign;
		} while (!is_char());
		do
		{
			cal.clear_screen();
			cal.display_the_message("\nEnter second number: ");
			cin >> std_cal.second_number;
		} while (!std_cal.check_input());
		if (std_cal.is_division_by_zero())
		{
			cal.clear_screen();
			cal.display_the_message("Mistake! Division by zero.");
			continue;
		}
		if ((std_cal.math_sign == '-') && (std_cal.second_number < 0))
		{
			std_cal.math_sign = '+';
			std_cal.second_number = abs(std_cal.second_number);
		}
		is_loop_end = false;
	} while (is_loop_end);
	return true;
}

bool c_advanced_calculator::is_char()
{
	if ((std_cal.math_sign == '+') || (std_cal.math_sign == '-') || (std_cal.math_sign == '*') || (std_cal.math_sign == '/'))
	{
		return true;
	}
	return false;
}

int c_advanced_calculator::which_mathematical_operation()
{
	if (std_cal.math_sign == '+')
	{
		return ADDITION;
	}
	if (std_cal.math_sign == '-')
	{
		return SUBTRACTION;
	}
	if (std_cal.math_sign == '*')
	{
		return MULTIPLICATION;
	}
	if (std_cal.math_sign == '/')
	{
		return DIVISION;
	}
	return NULL;
}

float c_advanced_calculator::do_mathematical_operation(int MATHEMATICAL_OPERATION)
{
	switch (MATHEMATICAL_OPERATION)
	{
	case ADDITION:
	{
		return std_cal.addition();
	}

	case SUBTRACTION:
	{
		return  std_cal.subtraction();
	}

	case MULTIPLICATION:
	{
		return  std_cal.multiplication();
	}

	case DIVISION:
	{
		return  std_cal.division();
	}

	default:
	{
		return NULL;
	}
	}
}