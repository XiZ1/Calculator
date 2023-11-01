#pragma once

class calculator_app
{
public:
	explicit calculator_app(const double f_number = 0.0, const char sign = '+', const double s_number = 0.0);

	bool start_app_with_ui();
	void start_app_without_ui();
private:
	double result_ = 0.0, f_number_ = 0.0, s_number_ = 0.0;
	char sign_ = '+';
};
