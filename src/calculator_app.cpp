#include <iostream>
#include <string>

#include "calculator_app.h"
#include "input.h"
#include "valid.h"
#include "calculate.h"

void calculator_app::start_app()
{
	input::start_entering_data(&f_number_, &sign_, &s_number_);
	if (validate::start_validate_input_data(f_number_, sign_, s_number_))
	{
		result_ = calculate::start_calculate(f_number_, sign_, s_number_);
		std::cout << "Result: " + std::to_string(result_);
	}
}
