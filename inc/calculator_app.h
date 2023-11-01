#pragma once

class calculator_app
{
public:
	bool start_app();
private:
	double result_ = 0.0, f_number_ = 0.0, s_number_ = 0.0;
	char sign_ = '+';
};
