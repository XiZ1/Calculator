#include <string>
#include "calculator.h"
#include "app_ui.h"

int main(int argc, char* argv[])
{
	const double f_number = 0.0;
	const double s_number = 0.0;
	const char sign = '+';

	if (argc == 1)
	{
		//app ui
	}
	else if (argc == 4)
	{
		if (app_ui::checking_input_value(f_number, sign, s_number))
		{
			app_ui::show_message("Result calculate " + std::to_string(f_number) + " " + sign + " " + std::to_string(s_number) + " is: " + std::to_string(calculator::calculate(f_number, sign, s_number)));
		}
		else
		{
			app_ui::show_message("Wrong mathematical char or division by zero.\n");
		}
	}
	else
	{
		std::cerr << "Incorrect argument provided.\nCorrect way ./Calculator.exe <double> first_number <char> mathematical_sign <double> second_number\nExample: ./Calculator.exe 12 * 2\n";
		return 1;
	}

	return 0;
}
