#include <string>
#include "app_ui.h"
#include "calculator.h"

void app_ui::start_app_with_ui(const double& f_number, const char& sign, const double& s_number)
{
	
}

void app_ui::start_app_without_ui(const double& f_number, const char& sign, const double& s_number)
{
	if (checking_input_value(f_number, sign, s_number))
	{
		show_message("Result calculate " + std::to_string(f_number) + " " + sign + " " + std::to_string(s_number) + " is: " + std::to_string(calculator::calculate(f_number, sign, s_number)));
	}
	else
	{
		show_message("Wrong mathematical char or division by zero.\n");
	}
}

bool app_ui::checking_input_value(const double& f_number, const char& sign, const double& s_number)
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

void app_ui::show_message(const std::string& message)
{
	std::cout << message;
}