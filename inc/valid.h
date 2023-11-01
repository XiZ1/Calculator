#pragma once

class validate
{
public:
	static bool start_validate_data(const double& f_number, const char& sign, const double& s_number);
private:
	static bool validate_char(const char& sign);
	static bool validate_division_by_zero(const char& sign, const double& s_number);
};
