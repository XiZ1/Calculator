#include "calculator.h"

void c_standard_calculator::clear_screen()
{
	system("cls");
}

void c_standard_calculator::enter_the_date()
{
	clear_screen();
	bool is_loop_end = false;
	do
	{
		cout << "Enter first number:";
		cin >> first_number;
		if (is_loop_end = is_digit(first_number))
		{
			cout << "\nEnter math sign:";
			cin >> math_sign;
			if (is_loop_end = is_char(math_sign))
			{
				cout << "\nEnter second number:";
				cin >> second_number;
				if (is_loop_end = is_digit(second_number))
				{
					is_loop_end = false;
				}
			}
		}
	}while (is_loop_end);
}

bool c_standard_calculator::is_digit(int number) //TODO: PRZEMYSLEÆ ZAWÊ¯ANIE TYPÓW
{
	if (!isdigit(number))
	{
		return false;
	}
	return true;
}

bool c_standard_calculator::is_char(char sign)
{
	if ((sign == '+') || (sign == '-') || (sign == '*') || (sign == '/'))
	{
		return true;
	}
	return false;
}


void c_standard_calculator::show_result()
{
	clear_screen();
	cout << "Result = " << result << '\n';
	system("pause >nul");
}

int c_standard_calculator::which_mathematical_operation()
{
	if (math_sign == '+')
	{
		return ADDITION;
	}
	if (math_sign == '-')
	{
		return SUBTRACTION;
	}
	if (math_sign == '*')
	{
		return MULTIPLICATION;
	}
	if (math_sign == '/')
	{
		return DIVISION;
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

c_standard_calculator::c_standard_calculator(float f_number, float s_number, float res, char sign) : first_number(f_number), second_number(s_number), result(res), math_sign(sign)
{
}

void c_standard_calculator::start_standard_calculator()
{
	clear_screen();
	do
	{
		enter_the_date();
		do_mathematical_operation(which_mathematical_operation());
		show_result();
	}while (true);
}
