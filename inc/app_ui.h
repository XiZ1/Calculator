#pragma once

#include <iostream>

class app_ui
{
	public:
		static bool checking_input_value(const double& f_number, const char& sign, const double& s_number);
		static void show_message(const std::string& message);
};
