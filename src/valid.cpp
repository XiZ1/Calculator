#include "valid.h"

bool validate::start_validate_data(const double& f_number, const char& sign, const double& s_number)
{
	if (validate_char(sign))
	{
		if (validate_division_by_zero(sign, s_number))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool validate::validate_char(const char& sign)
{
	if (sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '%')
	{
		return true;
	}
	return false;
}

bool validate::validate_division_by_zero(const char& sign, const double& s_number)
{
	if (sign == '/')
	{
		if (s_number != 0.0)
		{
			return true;
		}
		return false;
	}
	return true;
}
