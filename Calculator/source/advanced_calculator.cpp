#include "advanced_calculator.h"

/*
	PUBLIC:
*/

void c_advanced_calculator::start_advanced_calculator()
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
		c_calculator::display_the_message("ADVANCED CALCULATOR\nAllowed math characters:\n\'+\' - Addition\n\'-\' - Subtraction\n\'*\' - Multiplication\n\'/\' - Division\n\'%\' - Modulo\n\'$\' - Square root\n\'#\' - Cube root\n\'^\' - Exponentiation\n\'L\' - Logarithm\n\'S\' - Sinus\n\'C\' - Co-sinus\n\'T\' - Tang-ens\n\n");
		if (!std_cal_.enter_the_date(tab_advanced_math_sign_, tab_size))
		{
			continue;
		}
		do_mathematical_operation(std_cal_.which_mathematical_operation(tab_advanced_math_sign_, tab_size));
		std_cal_.show_result();
	} while (end_loop);
}

/*
	PRIVATE:
*/

float c_advanced_calculator::do_mathematical_operation(const int mathematical_operation)
{
	switch (mathematical_operation)
	{
		case ADDITION:
		{
			return std_cal_.addition();
		}

		case SUBTRACTION:
		{
			return  std_cal_.subtraction();
		}

		case MULTIPLICATION:
		{
			return  std_cal_.multiplication();
		}

		case DIVISION:
		{
			return  std_cal_.division();
		}

		case MODULO:
		{
			return std_cal_.modulo();
		}

		case SQUARE_ROOT:
		{
			return std_cal_.square_root();
		}

		case CUBE_ROOT:
		{
			return cube_root();
		}

		case EXPONENTIATION:
		{
			return exponentiation();
		}

		case LOGARITHM:
		{
			return logarithm();
		}

		case SIN:
		{
			return sin();
		}

		case COS:
		{
			return cos();
		}

		case TAN:
		{
			return tan();
		}

		default:
		{
			return NULL;
		}
	}
}
