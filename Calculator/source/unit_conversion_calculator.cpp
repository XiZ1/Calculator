#include "unit_conversion_calculator.h"
#include <conio.h>

/*
	PUBLIC:
*/

void c_unit_conversion_calculator::start_unit_conversion_calculator()
{
	bool end_loop = true;
	do
	{
		if(!whether_exit())
		{
			end_loop = false;
			continue;
		}
		cal.clear_screen();
		cal.display_the_message("UNITS CONVERSION CALCULATOR MODULE:\n0. LENGTH\n1. MASS\n2. VOLUME\n");
		choose_conversion_units();
	}while (end_loop);
}

/*
	PRIVATE:
*/

void c_unit_conversion_calculator::choose_conversion_units()
{
	switch (_getch())
	{
		case LENGTH:
		{
			start_length_conversion();
		}break;

		case MASS:
		{
			start_mass_conversion();
		}break;

		case VOLUME:
		{
			start_volume_conversion();
		}break;

		default:
		{
			NULL;
		}break;
	}
}

void c_unit_conversion_calculator::start_length_conversion()
{
	bool end_loop = true;
	do
	{
		if(!whether_exit())
		{
			end_loop = false;
			continue;
		}
		cal.clear_screen();
		cal.display_the_message("Choose which unit you want to conversion:\n0. Millimeter [mm]\n1. Centimeter [cm]\n2. Decimeter [dm]\n3. Meter [m]\n4. Kilometer [km]\n5. EXIT");
		choose_unit(tab_length_unit, tab_length_unit_size);

	}while (end_loop);
}

void c_unit_conversion_calculator::start_mass_conversion()
{
}

void c_unit_conversion_calculator::start_volume_conversion()
{
}

void c_unit_conversion_calculator::choose_unit(const string tab[], int tab_size)
{
	int temp = _getch();
	for (auto i = 0; i < tab_size; i++)
	{
		if (temp == i)
		{
			create_unit_tab(tab, tab_size, temp);
		}
	}
}

void c_unit_conversion_calculator::create_unit_tab(const string tab[], int tab_size, int delete_unit)
{
	tab_unit_to_conversion.clear();
	for (auto i = 0; i < tab_size; i++)
	{
		if(i != delete_unit)
		{
			tab_unit_to_conversion.push_back(tab[i]);
		}
	}
}

bool c_unit_conversion_calculator::whether_exit()
{
	cal.clear_screen();
	cal.display_the_message("Do you want to exit y/n ?\n");
	if (_getch() == 'y')
	{
		return false;
	}
	return true;
}
