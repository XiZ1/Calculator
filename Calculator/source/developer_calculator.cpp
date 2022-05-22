#include "developer_calculator.h"

/*
	PUBLIC:
*/

void c_developer_calculator::start_developer_calculator()
{
	bool end_loop = true;
	do
	{
		if (!c_calculator::whether_exit())
		{
			end_loop = false;
			continue;
		}
		c_calculator::clear_screen();
		c_calculator::display_the_message("DEVELOPER CALCULATOR MODULE:\n0. BIN\n1. OCT\n2. DEC\n3. HEX\n");
		choose_number_system_conversion();
	} while (end_loop);
}

/*
	PRIVATE:
*/

void c_developer_calculator::choose_number_system_conversion()
{
	int choise = -1;
	cin >> choise;
	switch (choise)
	{
		case BIN:
		{
			get_number(number);
			convert(BIN);
		}break;

		case OCT:
		{
			get_number(number);
			convert(OCT);
		}break;

		case DEC:
		{
			get_number(number);
			convert(DEC);
		}break;

		case HEX:
		{
			get_number(number);
			convert(HEX);
		}break;

		default:
		{
			NULL;
		}break;
	}
}

void c_developer_calculator::get_number(int& n)
{
	c_calculator::clear_screen();
	c_calculator::display_the_message("Enter value to conversion: ");
	cin >> n;
}

void c_developer_calculator::convert(NUMBERS_SYSTEM choise)
{
	switch (choise)
	{
		case BIN:
		{
			cout << std::oct << number << "\n";
			cout << std::dec << number << "\n";
			cout << std::hex << number << "\n";
		}break;

		case OCT:
		{
			//TODO: ADD CONVERSION OCT TO BIN // cout << number << "\n";
			cout << std::dec << number << "\n";
			cout << std::hex << number << "\n";
		}break;

		case DEC:
		{
			//TODO: ADD CONVERSION DEC TO BIN // cout << number << "\n";
			cout << std::oct << number << "\n";
			cout << std::hex << number << "\n";
		}break;

		case HEX:
		{
			//TODO: ADD CONVERSION HEX TO BIN // cout << number << "\n";
			cout << std::oct << number << "\n";
			cout << std::dec << number << "\n";
		}break;
			
		default:
		{
			NULL;
		}break;
	}
}
