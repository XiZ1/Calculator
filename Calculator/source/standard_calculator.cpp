#include "standard_calculator.h"

/*
	PRIVATE:
*/

void c_standard_calculator::clear_screen()
{
	system("cls");
}

void c_standard_calculator::enter_the_date()
{
	clear_screen();
	bool is_loop_end = true;
	do
	{
		cout << "Enter first number:";
		cin >> first_number;
		if (check_input())
		{
			cout << "\nEnter math sign:";
			cin >> math_sign;
			if (is_char())
			{
				cout << "\nEnter second number:";
				cin >> second_number;
				if (check_input())
				{
					is_loop_end = false;
				}
			}
		}
	}while (is_loop_end);
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

bool c_standard_calculator::is_float_point(float number) //TODO: PRZEMYSLEÆ ZAWÊ¯ANIE TYPÓW
{
	string temp = std::to_string(number);
	int number_length = temp.length();

	for (auto i = 0; i <= number_length; i++)
	{
	
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
	clear_screen();
	cout << "Result = " << result << '\n';
	system("pause >nul");
}

/*
	PUBLIC:
*/

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
