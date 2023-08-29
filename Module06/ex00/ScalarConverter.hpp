#include <iostream>
 class ScalarConverter{
	public:
		static void    convert(std::string const &value);
		virtual ~ScalarConverter();
		ScalarConverter(ScalarConverter const &other);
		ScalarConverter &operator=(ScalarConverter const &other);

	private:
		ScalarConverter();
		static std::string _value;
		static void    convertToChar(double const &value);
		static void    convertToInt(double const &value);
		static void convertToFloat(double d);
		static void convertToDouble(double d);
 };
