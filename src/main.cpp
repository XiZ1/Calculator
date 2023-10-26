#include "app_ui.h"

int main(int argc, char* argv[])
{
	const double f_number = 0.0;
	const double s_number = 0.0;
	const char sign = '+';

	if (argc == 1)
	{
		app_ui::start_app_with_ui(f_number, sign, s_number);
	}
	else if (argc == 4)
	{
		app_ui::start_app_without_ui(f_number, sign, s_number);
	}
	else
	{
		std::cerr << "Incorrect argument provided.\nCorrect way ./Calculator.exe <double> first_number <char> mathematical_sign <double> second_number\nExample: ./Calculator.exe 12 * 2\n";
		return 1;
	}

	return 0;
}
