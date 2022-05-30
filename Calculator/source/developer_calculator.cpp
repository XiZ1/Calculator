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
		c_calculator::display_the_message("DEVELOPER CALCULATOR MODULE:\n 0. BIN\n 1. OCT\n 2. DEC\n 3. HEX\n\n");
		choose_number_system_conversion();
	} while (end_loop);
}

/*
	PRIVATE:
*/

void c_developer_calculator::choose_number_system_conversion()
{
	int choose = -1;
	cout << "Enter the number module: ";
	cin >> choose;
	switch (choose)
	{
		case BIN:
		{
			get_number(number_);
			convert(BIN);
		}break;

		case OCT:
		{
			get_number(number_);
			convert(OCT);
		}break;

		case DEC:
		{
			get_number(number_);
			convert(DEC);
		}break;

		case HEX:
		{
			get_number(str_num_);
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

void c_developer_calculator::get_number(string& n)
{
	c_calculator::clear_screen();
	c_calculator::display_the_message("Enter value to conversion: ");
	cin >> n;
}

void c_developer_calculator::convert(const numbers_system choose) const
{
	switch (choose)
	{
		case BIN:
		{
			cout << std::oct << number_ << "\n";
			cout << std::dec << number_ << "\n";
			cout << std::hex << number_ << "\n";
			system("pause");
		}break;

		case OCT:
		{
			cout << oct_to_bin(number_) << "\n";
			cout << std::dec << number_ << "\n";
			cout << std::hex << number_ << "\n";
			system("pause");
		}break;

		case DEC:
		{
			cout << dec_to_bin(number_) << "\n";
			cout << std::oct << number_ << "\n";
			cout << std::hex << number_ << "\n";
			system("pause");
		}break;

		case HEX:
		{
			hex_to_bin(str_num_);
			cout << std::oct << str_num_ << "\n";
			cout << std::dec << str_num_ << "\n";
			system("pause");
		}break;
	}
}

int c_developer_calculator::oct_to_bin(int oct_num) const
{
	int decimal_num = 0, binary_num = 0, count = 0;
	while (oct_num != 0) 
	{
		// ReSharper disable once CppRedundantParentheses
		decimal_num += (oct_num % 10) * pow(8, count);  // NOLINT(cppcoreguidelines-narrowing-conversions)
		++count;
		oct_num /= 10;
	}
	count = 1;
	while (decimal_num != 0) 
	{
		binary_num += (decimal_num % 2) * count;
		decimal_num /= 2;
		count *= 10;
	}
	return binary_num;
}

int c_developer_calculator::dec_to_bin(int decimal)
{
	int binary = 0, product = 1;
	while (decimal != 0) 
	{
		const int remainder = decimal % 2;
		binary = binary + (remainder * product);
		decimal = decimal / 2;
		product *= 10;
	}
	return binary;
}

void c_developer_calculator::hex_to_bin(const string& number)
{
	long int i = 0;
	c_calculator::clear_screen();
	while (number[i]) 
	{
		switch (number[i])
		{
			case '0':
			{
				cout << "0000";
			}break;

			case '1':
			{
				cout << "0001";
			}break;

			case '2':
			{
				cout << "0010";
			}break;

			case '3':
			{
				cout << "0011";
			}break;

			case '4':
			{
				cout << "0100";
			}break;

			case '5':
			{
				cout << "0101";
			}break;

			case '6':
			{
				cout << "0110";
			}break;

			case '7':
			{
				cout << "0111";
			}break;

			case '8':
			{
				cout << "1000";
			}break;

			case '9':
			{
				cout << "1001";
			}break;

			case 'A':
			case 'a':
			{
				cout << "1010";
			}break;

			case 'B':
			case 'b':
			{
				cout << "1011";
			}break;

			case 'C':
			case 'c':
			{
				cout << "1100";
			}break;

			case 'D':
			case 'd':
			{
				cout << "1101";
			}break;

			case 'E':
			case 'e':
			{
				cout << "1110";
			}break;

			case 'F':
			case 'f':
			{
				cout << "1111";
			}break;

			default:
			{
				cout << "\nInvalid hexadecimal digit " << number[i];
			}break;
		}
		i++;
	}
}
