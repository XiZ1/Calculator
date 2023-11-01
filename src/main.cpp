#include <iostream>
#include <string>

#include "calculator_app.h"

int main(const int argc, char* argv[])
{
	if (argc == 1)
	{
		bool exit = true;
		calculator_app calculator;
		do
		{
			exit = calculator.start_app_with_ui();
		}
		while (exit);
	}
	else if (argc == 4)
	{
		const double f_number = std::stod(argv[1]);
		const double s_number = std::stod(argv[3]);
		const char sign = *argv[2];

		calculator_app quick_calculate(f_number, sign, s_number);
		quick_calculate.start_app_without_ui();
	}
	else
	{
		std::cout << "\n\n\n\nIncorrect call Calculator.exe. Correct call is ./Calculator.exe <double> first_number <char> sign <double> second_number\n\n\n\n";
	}

	return 0;
}
