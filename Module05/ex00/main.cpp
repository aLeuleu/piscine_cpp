#include "Bureaucrat.hpp"

int main(void)
{
try
	{
		Bureaucrat A("A", 2);
		std::cout << A << std::endl;
		A.incrementGrade();
		std::cout << A << std::endl;
		A.incrementGrade();
		std::cout << A << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Hey ! We caught an exeption !" << std::endl;
		std::cout << e.what() << std::endl;
	}
	std::cout << "---------------------" << std::endl;

try
	{
		Bureaucrat B("B", 149);
		std::cout << B << std::endl;
		B.decrementGrade();
		std::cout << B << std::endl;
		B.decrementGrade();
		std::cout << B << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Hey ! We caught an exeption again !" << std::endl;
		std::cout << e.what() << std::endl;
	}
}
