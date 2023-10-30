#include "calculate.h"

double calculate::start_calculate(const double& f_number, const char& sign, const double& s_number)
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

double calculate::addition(const double& f_number, const double& s_number)
{
	return f_number + s_number;
}

double calculate::subtraction(const double& f_number, const double& s_number)
{
	return f_number - s_number;
}

double calculate::multiplication(const double& f_number, const double& s_number)
{
	return f_number * s_number;
}

double calculate::division(const double& f_number, const double& s_number)
{
	return f_number / s_number;
}

int calculate::modulo(const double& f_number, const double& s_number)
{
	return static_cast<int>(f_number) % static_cast<int>(s_number);
}
