#include "app_ui.h"

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