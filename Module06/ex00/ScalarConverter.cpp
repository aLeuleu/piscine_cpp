#include <cstdlib>
#include <iostream>
#include "ScalarConverter.h"

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
//		convertToFloat(value);
//		convertToDouble(value);
	}
}

ScalarConverter::ScalarConverter() {
}

ScalarConverter::~ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	if (this != &other)
	{
		_value = other._value;
	}
	return *this;
}

ScalarConverter::ScalarConverter(const std::string &value) {
	_value = value;
}

void ScalarConverter::convertToChar(double const &value) {
	std::cout << "char: ";

	if (value < 0 || value > 127)
		std::cout << "impossible" << std::endl;
	else if (value < 32 || value == 127)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(value) << std::endl;

}

void ScalarConverter::convertToInt(double const &value) {
	int i = static_cast<int>(value);
	std::cout << "int: " << i << std::endl;
}

