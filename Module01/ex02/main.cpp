#include <string>
#include <iostream>

int			main(void)
{
	std::string stringMSG="HI THIS IS BRAIN";
	std::string *stringPTR = &stringMSG;
	std::string &stringREF = stringMSG;

	std::cout << "Address of      stringMSG: " << &stringMSG << std::endl;
	std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Address held by stringREF: " << &stringREF << std::endl;

	std::cout << "Value held by stringMSG: " << stringMSG << std::endl;
	std::cout << "Value held by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value held by stringREF: " << stringREF << std::endl;
	return (0);
}