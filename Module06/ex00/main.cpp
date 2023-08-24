#include "ScalarConverter.h"
#include <iostream>

int main(int argc, char **argv){

	std::string test1 = "'c'";
	std::string test2 = "42";
	std::string test3 = "42.42356";
	std::string test4 = "42.0f";
	std::string test5 = "42.0F";
	std::string test6 = "42.0d";
	std::string test7 = "42.0D";
	std::string test8 = "42.0l";
	std::string test9 = "42.0L";
	std::string test10 = "-42";
	std::string test11= "+inff";
	std::string test13 = "nanf";
	std::string test14 = "-inff";
	std::string test15 = "+inf";
	std::string test16 = "nan";
	std::string test17 = "-inf";
	std::string test18 = "0.0";
	std::string test19 = "0.0f";
	std::string test20 = "123bonjour";

	std::string test[20] = {test1, test2, test3, test4, test5, test6, test7, test8, test9, test10, test11, test13, test14, test15, test16, test17, test18, test19, test20};

	for (int i = 0; i < 19; i++)
	{
		ScalarConverter testScalar(test[i]);
		testScalar.convert(test[i]);
		std::cout << std::endl;

	}



	return (0);
}