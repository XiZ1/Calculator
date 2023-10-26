#include <iostream>
#include "calculator.h"
#include "app_ui.h"

int main(int argc, char* argv[])
{
	const double f_number = 0.0;
	const double s_number = 0.0;
	const char sign = '+';


	if (app_ui::checking_input_value(f_number, sign, s_number))
	{
		std::cout << "Result calculate " << f_number << " " << sign << " " << s_number << " is: " << calculator::calculate(f_number, sign, s_number);
	}
	else
	{
		std::cout << "Wrong mathematical char or division by zero.\n";
	}

	return 0;
}
