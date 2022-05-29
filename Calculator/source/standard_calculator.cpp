#include "standard_calculator.h"
#include <cmath>

/*
	PUBLIC:
*/

c_standard_calculator::c_standard_calculator(const float f_number, const float s_number, const float res, const char sign) : first_number_(f_number), second_number_(s_number), result_(res), math_sign_(sign)
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
		c_calculator::display_the_message("STANDARD CALCULATOR\n\nAllowed math characters:\n \'+\' - Addition\n \'-\' - Subtraction\n \'*\' - Multiplication\n \'/\' - Division\n \'%\' - Modulo\n \'$\' - Square root\n\n");
		if(!enter_the_date(tab_standard_math_sign_, tab_size))
		{
			continue;
		}
		do_mathematical_operation(which_mathematical_operation(tab_standard_math_sign_, tab_size));
		show_result();
	}while (end_loop);
}

/*
	PRIVATE:
*/

bool c_standard_calculator::enter_the_date(const char* tab_math_sign, const int t_size)
{
	// ReSharper disable once CppInitializedValueIsAlwaysRewritten
	auto is_loop_end = true;
	do
	{
		do
		{
			c_calculator::display_the_message("Enter first number: ");
			cin >> first_number_;
		}
		while (!check_input());
		do
		{
			c_calculator::display_the_message("\nEnter math sign: ");
			cin >> math_sign_;
		}
		while (!is_char(tab_math_sign, t_size));
		do
		{
			c_calculator::display_the_message("\nEnter second number: ");
			cin >> second_number_;
		}
		while (!check_input());
		if (is_division_by_zero())
		{
			return false;
		}
		whether_it_subtracts_a_negative_number();
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
		c_calculator::clear_screen();
		c_calculator::display_the_message("\nBad input value. Try again.\n");
		system("pause");
		return false;
	}
	return true;
}

bool c_standard_calculator::is_char(const char* tab_math_sign, const int table_size) const
{
	for (int i = 0; i < table_size; i++)
	{
		if (math_sign_ == tab_math_sign[i])
		{
			return true;
		}
	}
	return false;
}

bool c_standard_calculator::is_division_by_zero() const
{
	if ((math_sign_ == '/') && (second_number_ == static_cast<float>(0)))  // NOLINT(clang-diagnostic-float-equal)
	{
		c_calculator::clear_screen();
		c_calculator::display_the_message("Mistake! Division by zero.");
		system("pause");
		return true;
	}
	return false;
}

void c_standard_calculator::whether_it_subtracts_a_negative_number()
{
	if ((math_sign_ == '-') && (second_number_ < 0))
	{
		math_sign_ = '+';
		second_number_ = abs(second_number_);
	}
}

int c_standard_calculator::which_mathematical_operation(const char* tab_math_sign, const int t_size) const
{
	for (auto i = 0; i < t_size; i++)
	{
		if (math_sign_ == tab_math_sign[i])
		{
			return i;
		}
	}
	return -1;
}

float c_standard_calculator::do_mathematical_operation(const int mathematical_operation)
{
	switch (mathematical_operation)
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

		case MODULO:
		{
			return modulo();
		}

		case SQUARE_ROOT:
		{
			return square_root();
		}

		default:
		{
			return NULL;
		}
	}
}

void c_standard_calculator::show_result() const
{
	c_calculator::clear_screen();
	cout << first_number_ << " " << math_sign_ << " " << second_number_ << " = " << result_ << '\n';
	system("pause");
}
