#include "standard_calculator.h"
#include <conio.h>
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
	cal.clear_screen();
	do
	{
		if(!enter_the_date())
		{
			end_loop = false;
			continue;
		}
		do_mathematical_operation(which_mathematical_operation());
		show_result();
	}while (end_loop);
}

/*
	PRIVATE:
*/

bool c_standard_calculator::enter_the_date()
{
	bool is_loop_end = true;
	do
	{
		cal.clear_screen();
		cal.display_the_message("If you want to quit press \'q\'.");
		if(whether_exit(_getch()))
		{
			return false;
		}
		do
		{
			cal.clear_screen();
			cal.display_the_message("Enter first number: ");
			cin >> first_number;
		}
		while (!check_input());
		do
		{
			cal.clear_screen();
			cal.display_the_message("\nEnter math sign: ");
			cin >> math_sign;
		}
		while (!is_char());
		do
		{
			cal.clear_screen();
			cal.display_the_message("\nEnter second number: ");
			cin >> second_number;
		}
		while (!check_input());
		if (is_division_by_zero())
		{
			cal.clear_screen();
			cal.display_the_message("Mistake! Division by zero.");
			continue;
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

bool c_standard_calculator::whether_exit(char sign)
{
	if(sign == 'q')
	{
		return true;
	}
	return false;
}

bool c_standard_calculator::check_input()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "\nBad input value. Try again.\n";
		return false;
	}
	return true;
}

bool c_standard_calculator::is_char()
{
	if ((math_sign == '+') || (math_sign == '-') || (math_sign == '*') || (math_sign == '/'))
	{
		return true;
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

void c_standard_calculator::show_result()
{
	cal.clear_screen();
	cout << first_number << " " << math_sign << " " << second_number << " = " << result << '\n';
	system("pause >nul");
}