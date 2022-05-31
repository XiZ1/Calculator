/*
 * Copyrigth (C) 2022 Jakub Górecki - All Rights Reserved.
 * Gmail: jakub.xiz1.gorecki@gmail.com
 * GitHub: https://github.com/XiZ1
 */

#include "unit_conversion_calculator.h"

/*
	PUBLIC:
*/

void c_unit_conversion_calculator::start_unit_conversion_calculator()
{
	bool end_loop = true;
	do
	{
		if(!c_calculator::whether_exit())
		{
			end_loop = false;
			continue;
		}
		c_calculator::clear_screen();
		c_calculator::display_the_message("UNITS CONVERSION CALCULATOR MODULE:\n 0. LENGTH\n 1. MASS\n 2. VOLUME\n\n");
		choose_conversion_units();
	}while (end_loop);
}

/*
	PRIVATE:
*/

void c_unit_conversion_calculator::choose_conversion_units()
{
	int choose = -1;
	cout << "Enter the number module: ";
	cin >> choose;
	switch (choose)
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
		if(!c_calculator::whether_exit())
		{
			end_loop = false;
			continue;
		}
		c_calculator::clear_screen();
		c_calculator::display_the_message("Choose which unit you want to conversion:\n0. Millimeter [mm]\n1. Centimeter [cm]\n2. Decimeter [dm]\n3. Meter [m]\n4. Kilometer [km]\n5. EXIT\n\n");
		const int utc = choose_unit();
		create_unit_name_tab(tab_length_units_names_, tab_length_unit_size, utc);
		get_unit_value(unit_);
		unit_length_convert(result_conversion_, utc);
		show_result_conversion();
	}while (end_loop);
}

void c_unit_conversion_calculator::start_mass_conversion()
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
		// ReSharper disable once StringLiteralTypo
		c_calculator::display_the_message("Choose which unit you want to conversion:\n0. Gram [g]\n1. Decagram [dag]\n2. Kilogram [kg]\n3. Ton [t]\n4. EXIT\n\n");
		const int utc = choose_unit();
		create_unit_name_tab(tab_mass_units_names_, tab_other_unit_size, utc);
		get_unit_value(unit_);
		unit_mass_convert(result_conversion_, utc);
		show_result_conversion();
	} while (end_loop);
}

void c_unit_conversion_calculator::start_volume_conversion()
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
		c_calculator::display_the_message("Choose which unit you want to conversion:\n0. Milliliter [ml]\n1. Centiliter [cl]\n2. Deciliter [dl]\n3. Liter [l]\n4. EXIT\n\n");
		const int utc = choose_unit();
		create_unit_name_tab(tab_volume_units_names_, tab_other_unit_size, utc);
		get_unit_value(unit_);
		unit_volume_convert(result_conversion_, utc);
		show_result_conversion();
	} while (end_loop);
}

int c_unit_conversion_calculator::choose_unit()
{
	int utc = -1;
	cout << "Enter the unit number: ";
	cin >> utc;
	return utc;
}

void c_unit_conversion_calculator::create_unit_name_tab(const string tab[], const int& tab_size, const int& delete_unit)
{
	tab_res_con_unit_name_.clear();
	for (auto i = 0; i < tab_size; i++)
	{
		if(i != delete_unit)
		{
			tab_res_con_unit_name_.push_back(tab[i]);
		}
	}
}

void c_unit_conversion_calculator::get_unit_value(float& u)
{
	c_calculator::clear_screen();
	c_calculator::display_the_message("Enter value to conversion: ");
	cin >> u;
}

void c_unit_conversion_calculator::unit_length_convert(std::vector<float>& res_con, const int& unit_length_to_conversion)
{
	result_conversion_.clear();
	switch (unit_length_to_conversion)
	{
		case MM:
		{
			res_con.push_back(unit_ / 10);
			res_con.push_back(unit_ / 100);
			res_con.push_back(unit_ / 1000);
			res_con.push_back(unit_ / 1000000);
		}break;

		case CM:
		{
			res_con.push_back(unit_ * 10);
			res_con.push_back(unit_ / 10);
			res_con.push_back(unit_ / 100);
			res_con.push_back(unit_ / 100000);
		}break;

		case DM:
		{
			res_con.push_back(unit_ * 100);
			res_con.push_back(unit_ * 10);
			res_con.push_back(unit_ / 10);
			res_con.push_back(unit_ / 10000);
		}break;

		case M:
		{
			res_con.push_back(unit_ * 1000);
			res_con.push_back(unit_ * 100);
			res_con.push_back(unit_ * 10);
			res_con.push_back(unit_ / 1000);
		}break;

		case KM:
		{
			res_con.push_back(unit_ * 1000000);
			res_con.push_back(unit_ * 100000);
			res_con.push_back(unit_ * 10000);
			res_con.push_back(unit_ * 1000);
		}break;

		default:
		{
			NULL;
		}break;
	}
}

void c_unit_conversion_calculator::unit_mass_convert(std::vector<float>& res_con, const int& unit_mass_to_conversion)
{
	result_conversion_.clear();
	switch (unit_mass_to_conversion)
	{
	case G:
	{
		res_con.push_back(unit_ / 10);
		res_con.push_back(unit_ / 1000);
		res_con.push_back(unit_ / 1000000);
	}break;

	case DAG:
	{
		res_con.push_back(unit_ * 10);
		res_con.push_back(unit_ / 100);
		res_con.push_back(unit_ / 100000);
	}break;

	case KG:
	{
		res_con.push_back(unit_ * 1000);
		res_con.push_back(unit_ * 100);
		res_con.push_back(unit_ / 1000);
	}break;

	case T:
	{
		res_con.push_back(unit_ * 1000000);
		res_con.push_back(unit_ * 100000);
		res_con.push_back(unit_ * 1000);
	}break;

	default:
	{
		NULL;
	}break;
	}
}

void c_unit_conversion_calculator::unit_volume_convert(std::vector<float>& res_con, const int& unit_volume_to_conversion)
{
	result_conversion_.clear();
	switch (unit_volume_to_conversion)
	{
	case ML:
	{
		res_con.push_back(unit_ / 10);
		res_con.push_back(unit_ / 100);
		res_con.push_back(unit_ / 1000);
	}break;

	case CL:
	{
		res_con.push_back(unit_ * 10);
		res_con.push_back(unit_ / 10);
		res_con.push_back(unit_ / 100);
	}break;

	case DL:
	{
		res_con.push_back(unit_ * 100);
		res_con.push_back(unit_ * 10);
		res_con.push_back(unit_ / 10);
	}break;

	case L:
	{
		res_con.push_back(unit_ * 1000);
		res_con.push_back(unit_ * 100);
		res_con.push_back(unit_ * 10);
	}break;	

	default:
	{
		NULL;
	}break;
	}
}

void c_unit_conversion_calculator::show_result_conversion() const
{
	c_calculator::clear_screen();
	c_calculator::display_the_message("RESULT CONVERSION:\n");
	for (auto i = 0; i < result_conversion_.size(); i++)  // NOLINT(clang-diagnostic-sign-compare)
	{
		cout << result_conversion_[i] << " " << tab_res_con_unit_name_[i] << "\n";
	}
	system("pause");
}
