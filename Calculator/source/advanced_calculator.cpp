#include "advanced_calculator.h"

/*
	PUBLIC:
*/

void c_advanced_calculator::start_advanced_calculator()
{
	bool end_loop = true;
	do
	{
		if (std_cal.whether_exit())
		{
			end_loop = false;
			continue;
		}
		cal.clear_screen();
		cal.display_the_message("ADVANCED CALCULATOR\nAllowed math characters:\n\'+\' - Addition\n\'-\' - Subtraction\n\'*\' - Multiplication\n\'/\' - Division\n\'|\' - Element\n\'^\' - Involution\n\n");
		if (!std_cal.enter_the_date(tab_advanced_math_sign, tab_size))
		{
			continue;
		}
		do_mathematical_operation(std_cal.which_mathematical_operation(tab_advanced_math_sign, tab_size));
		std_cal.show_result();
	} while (end_loop);
}

/*
	PRIVATE:
*/

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

		case ELEMENT:
		{
			return element();
		}

		case INVOLUTION:
		{
			return involution();
		}

		default:
		{
			return NULL;
		}
	}
}