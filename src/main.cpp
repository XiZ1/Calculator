#include "calculator_app.h"

int main()
{
	bool exit = true;
	calculator_app calculator;
	do
	{
		exit = calculator.start_app();
	}
	while (exit);

	return 0;
}
