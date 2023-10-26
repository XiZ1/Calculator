#include "calculator.h"

//PUBLIC METHOD//

bool calculator::checking_input_value(const double& f_number, const char& sign, const double& s_number)
{
	if (sign == '+' || sign == '-' || sign == '*' || sign == '%')
	{
		return true;
	}
	if (sign == '/')
	{
		if (s_number != 0.0)
		{
			return true;
		}
	}
	return false;
}

double calculator::calculate(const double& f_number, const char& sign, const double& s_number)
{
	switch (sign)
	{
		case '+':
		{
			return addition(f_number, s_number);
		}

		case '-':
		{
			return subtraction(f_number, s_number);
		}

		case '*':
		{
			return multiplication(f_number, s_number);
		}

		case '/':
		{
			return division(f_number, s_number);
		}

		case '%':
		{
			return modulo(f_number, s_number);
		}

		default:
		{
			return 0.0;
		}
	}
}

//PRIVATE METHOD//

double calculator::addition(const double& f_number, const double& s_number)
{
	return f_number + s_number;
}

double calculator::subtraction(const double& f_number, const double& s_number)
{
	return f_number - s_number;
}

double calculator::multiplication(const double& f_number, const double& s_number)
{
	return f_number * s_number;
}

double calculator::division(const double& f_number, const double& s_number)
{
	return f_number / s_number;
}

double calculator::modulo(const double& f_number, const double& s_number)
{
	return static_cast<int>(f_number) % static_cast<int>(s_number);
}
