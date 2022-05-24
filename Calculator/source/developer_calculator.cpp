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
	int choose = -1;
	cin >> choose;
	switch (choose)
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
			get_number(str_num);
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

void c_developer_calculator::convert(const NUMBERS_SYSTEM choose)
{
	switch (choose)
	{
		case BIN:
		{
			cout << std::oct << number << "\n";
			cout << std::dec << number << "\n";
			cout << std::hex << number << "\n";
		}break;

		case OCT:
		{
			cout << oct_to_bin(number) << "\n";
			cout << std::dec << number << "\n";
			cout << std::hex << number << "\n";
		}break;

		case DEC:
		{
			cout << dec_to_bin(number) << "\n";
			cout << std::oct << number << "\n";
			cout << std::hex << number << "\n";
		}break;

		case HEX:
		{
			hex_to_bin(str_num);
			cout << std::oct << str_num << "\n";
			cout << std::dec << str_num << "\n";
		}break;
	}
}

int c_developer_calculator::oct_to_bin(int oct_num)
{
	int decimalNum = 0, binaryNum = 0, count = 0;
	
	while (oct_num != 0) {
		decimalNum += (oct_num % 10) * pow(8, count);
		++count;
		oct_num /= 10;
	}
	count = 1;
	while (decimalNum != 0) {
		binaryNum += (decimalNum % 2) * count;
		decimalNum /= 2;
		count *= 10;
	}
	return binaryNum;
}

int c_developer_calculator::dec_to_bin(int decimal)
{
	int binary = 0, product = 1;
	while (decimal != 0) {
		int remainder = decimal % 2;
		binary = binary + (remainder * product);
		decimal = decimal / 2;
		product *= 10;
	}
	return binary;
}

void c_developer_calculator::hex_to_bin(string number)
{
	long int i = 0;

	c_calculator::clear_screen();
	while (number[i]) {

		switch (number[i]) {
		case '0':
			cout << "0000";
			break;
		case '1':
			cout << "0001";
			break;
		case '2':
			cout << "0010";
			break;
		case '3':
			cout << "0011";
			break;
		case '4':
			cout << "0100";
			break;
		case '5':
			cout << "0101";
			break;
		case '6':
			cout << "0110";
			break;
		case '7':
			cout << "0111";
			break;
		case '8':
			cout << "1000";
			break;
		case '9':
			cout << "1001";
			break;
		case 'A':
		case 'a':
			cout << "1010";
			break;
		case 'B':
		case 'b':
			cout << "1011";
			break;
		case 'C':
		case 'c':
			cout << "1100";
			break;
		case 'D':
		case 'd':
			cout << "1101";
			break;
		case 'E':
		case 'e':
			cout << "1110";
			break;
		case 'F':
		case 'f':
			cout << "1111";
			break;
		default:
			cout << "\nInvalid hexadecimal digit "
				<< number[i];
		}
		i++;
	}
}
