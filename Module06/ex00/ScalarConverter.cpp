#include <cstdlib>
#include <iostream>
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

void ScalarConverter::convert(const std::string &value) {
	std::cout << "convert " << value << std::endl;
	if (value.empty())
		std::cout << "Impossible" << std::endl;
	else{
		double d;
		if (value.length() == 3 && value[0] == '\'' && value[2] == '\'' )
			d = static_cast<double>(value[1]);
		else
			d = strtod(value.c_str(), nullptr);
		convertToChar(d);
		convertToInt(d);
		convertToFloat(d);
		convertToDouble(d);
	}
}


ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	if (this != &other)
	{
	}
	return *this;
}

void ScalarConverter::convertToChar(double const &value) {
	std::cout << "char: ";

	if (value < 0 || value > 127)
		std::cout << "impossible" << std::endl;
	else if (value < 32 || value == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "\'" <<static_cast<char>(value)<< "\'" << std::endl;
}

void ScalarConverter::convertToInt(double const &value) {
	int i = static_cast<int>(value);
	std::cout << "int: " << i << std::endl;
}

void ScalarConverter::convertToFloat(double value) {
	std::cout << "float: " << static_cast<float>(value);
	if (static_cast<float>(value) == static_cast<int>(value))
		std::cout << ".0";
	std::cout << "f" << std::endl;
}
void ScalarConverter::convertToDouble(double value) {
	std::cout << "double: " << value;
	if (value == static_cast<int>(value))
		std::cout << ".0";
	std::cout << std::endl;
}

