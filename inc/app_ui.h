#pragma once

#include <iostream>

class app_ui
{
	public:
		static void start_app_with_ui(const double& f_number, const char& sign, const double& s_number);
		static std::string start_app_without_ui(const double& f_number, const char& sign, const double& s_number);

	private:
		static bool checking_input_value(const char& sign, const double& s_number);
		static std::string show_message(const std::string& message);

};
