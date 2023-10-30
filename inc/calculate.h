#pragma once

class calculate
{
public:
	static double start_calculate(const double& f_number, const char& sign, const double& s_number);
private:
	static double addition(const double& f_number, const double& s_number);
	static double subtraction(const double& f_number, const double& s_number);
	static double multiplication(const double& f_number, const double& s_number);
	static double division(const double& f_number, const double& s_number);
	static int modulo(const double& f_number, const double& s_number);
};
