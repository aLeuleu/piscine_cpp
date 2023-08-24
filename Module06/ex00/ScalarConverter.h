#include <iostream>

class ScalarConverter{
	public:
		explicit ScalarConverter(std::string const &value);
		void    convert(std::string const &value);
		~ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter &operator=(ScalarConverter const &other);

	private:
		ScalarConverter();
		std::string _value;
		void    convertToChar(double const &value);
		void    convertToInt(double const &value);
};
