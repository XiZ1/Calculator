#include "calculator.h"

/*
	PUBLIC:
*/

bool c_calculator::start_calculator_app()
{
	return true;
}

/*
	PRIVATE:
*/

void c_calculator::display_the_message(string message)
{
	cout << message;
}

void c_calculator::clear_screen()
{
	system("cls");
}