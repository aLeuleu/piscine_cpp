#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "1) Basic Bureaucrat creation ( grade 2, increment, decrement)" << std::endl;
	{
		Bureaucrat Naps("Naps", 2);
		std::cout << Naps << std::endl;
		Naps.incrementGrade();
		std::cout << Naps << std::endl;
		Naps.decrementGrade();
		std::cout << Naps << std::endl;
	}

	std::cout << "---------------------" << std::endl << std::endl;

	std::cout << "2) Basic Bureaucrat creation ( grade 149, decrement, increment)" << std::endl;
	{
		Bureaucrat Booba("Booba", 149);
		std::cout << Booba << std::endl;
		Booba.decrementGrade();
		std::cout << Booba << std::endl;
		Booba.incrementGrade();
		std::cout << Booba << std::endl;
	}
	std::cout << "---------------------" << std::endl << std::endl;

	std::cout << "3) Bureaucrat creation : grade 150, increment 200x (will eventually trigger GradeTooHighException)" << std::endl;

	try
	{
		Bureaucrat Kaaris("Kaaris", 150);
		std::cout << Kaaris;
		for (int i = 0; i < 200; i++)
		{
			Kaaris.incrementGrade();
			std::cout << Kaaris;
		}
		std::cout << "Failed to trigger GradeTooHighException" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "This is expected ! HAHA" << std::endl << std::endl;
	}

	std::cout << "4) Bureaucrat creation : grade 1, decrement 200x (will eventually trigger GradeTooLowException)" << std::endl;

	try
	{
		Bureaucrat Ninho("Ninho", 1);
		std::cout << Ninho;
		for (int i = 0; i < 200; i++)
		{
			Ninho.incrementGrade();
			std::cout << Ninho;
		}
		std::cout << "Failed to trigger GradeTooHighException" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
