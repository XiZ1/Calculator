#include <standard_calculator.h>

bool check_input()
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max());
		cout << "Bad input date. Try again.\n";
		return false;
	}
	return true;
}

int main()
{
	c_standard_calculator o_calculator;

	o_calculator.start_standard_calculator();

	return 0;
}