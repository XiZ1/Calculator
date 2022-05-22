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
		const int utc = choose_unit();
		create_unit_name_tab(tab_length_units_names, tab_length_unit_size, utc);
		get_unit_value(unit);
		unit_length_convert(result_conversion, utc);
		show_result_conversion();
	}while (end_loop);
}

void c_unit_conversion_calculator::start_mass_conversion()
{
	bool end_loop = true;
	do
	{
		if (!whether_exit())
		{
			end_loop = false;
			continue;
		}
		cal.clear_screen();
		cal.display_the_message("Choose which unit you want to conversion:\n0. Millimeter [mm]\n1. Centimeter [cm]\n2. Decimeter [dm]\n3. Meter [m]\n4. Kilometer [km]\n5. EXIT");
		const int utc = choose_unit();
		create_unit_name_tab(tab_mass_units_names, tab_other_unit_size, utc);
		get_unit_value(unit);
		//TODO: CREATE CONVERSION FUNCTION
		show_result_conversion();
	} while (end_loop);
}

void c_unit_conversion_calculator::start_volume_conversion()
{
	bool end_loop = true;
	do
	{
		if (!whether_exit())
		{
			end_loop = false;
			continue;
		}
		cal.clear_screen();
		cal.display_the_message("Choose which unit you want to conversion:\n0. Millimeter [mm]\n1. Centimeter [cm]\n2. Decimeter [dm]\n3. Meter [m]\n4. Kilometer [km]\n5. EXIT");
		const int utc = choose_unit();
		create_unit_name_tab(tab_volume_units_names, tab_other_unit_size, utc);
		get_unit_value(unit);
		//TODO: CREATE CONVERSION FUNCTION
		show_result_conversion();
	} while (end_loop);
}

int c_unit_conversion_calculator::choose_unit()
{
	const int utc = _getch();
	return utc;
}

void c_unit_conversion_calculator::create_unit_name_tab(const string tab[], const int& tab_size, const int& delete_unit)
{
	tab_res_con_unit_name.clear();
	for (auto i = 0; i < tab_size; i++)
	{
		if(i != delete_unit)
		{
			tab_res_con_unit_name.push_back(tab[i]);
		}
	}
}

void c_unit_conversion_calculator::get_unit_value(float& u)
{
	cal.clear_screen();
	cal.display_the_message("Enter value to conversion: ");
	cin >> u;
}

void c_unit_conversion_calculator::unit_length_convert(std::vector<float>& res_con, const int unit_length_to_conversion)
{
	result_conversion.clear();
	switch (unit_length_to_conversion)
	{
		case mm:
		{
			res_con.push_back(unit / 10);
			res_con.push_back(unit / 100);
			res_con.push_back(unit / 1000);
			res_con.push_back(unit / 1000000);
		}break;

		case cm:
		{
			res_con.push_back(unit * 10);
			res_con.push_back(unit / 10);
			res_con.push_back(unit / 100);
			res_con.push_back(unit / 100000);
		}break;

		case dm:
		{
			res_con.push_back(unit * 100);
			res_con.push_back(unit * 10);
			res_con.push_back(unit / 10);
			res_con.push_back(unit / 10000);
		}break;

		case m:
		{
			res_con.push_back(unit * 1000);
			res_con.push_back(unit * 100);
			res_con.push_back(unit * 10);
			res_con.push_back(unit / 1000);
		}break;

		case km:
		{
			res_con.push_back(unit * 1000000);
			res_con.push_back(unit * 100000);
			res_con.push_back(unit * 10000);
			res_con.push_back(unit * 1000);
		}break;

		default:
		{
			NULL;
		}break;
	}
}

void c_unit_conversion_calculator::show_result_conversion()
{
	cal.clear_screen();
	cal.display_the_message("RESULT CONVERSION:\n");
	for (auto i = 0; i < result_conversion.size(); i++)
	{
		cout << result_conversion[i] << " " << tab_res_con_unit_name[i] << "\n";
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
