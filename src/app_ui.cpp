#include <string>
#include "app_ui.h"
#include "calculator.h"

void app_ui::start_app_with_ui(const double& f_number, const char& sign, const double& s_number)
{
	
}

std::string app_ui::start_app_without_ui(const double& f_number, const char& sign, const double& s_number)
{
	if (checking_input_value(sign, s_number))
	{
		return std::to_string(calculator::calculate(f_number, sign, s_number));
	}
	return show_message("ERROR: Wrong mathematical char or division by zero.\n");
}

bool app_ui::checking_input_value(const char& sign, const double& s_number)
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

std::string app_ui::show_message(const std::string& message)
{
	return message;
}