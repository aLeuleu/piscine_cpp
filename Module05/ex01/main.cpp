
#include "Bureaucrat.hpp"
#define BUR_SIZE 5
#define FORM_SIZE 7

int main(void)
{
		Bureaucrat bur10("bur10", 10);
		Bureaucrat bur20("bur20", 20);
		Bureaucrat bur30("bur30", 30);
		Bureaucrat bur40("bur40", 40);
		Bureaucrat bur50("bur50", 50);
		Bureaucrat *burTab[BUR_SIZE] = {&bur10, &bur20, &bur30, &bur40, &bur50};
		Form		formA("formA", 1, 150);
		Form		formB("formB", 10, 21);
		Form		formC("formC", 11, 20);
		Form		formD("formD", 19, 19);
		Form		formE("formE", 20, 11);
		Form		formF("formF", 21, 10);
		Form		formG("formG", 150, 1);
//		Form		formH("formH", 151, 1); //uncomment to test exception
//		Form		formI("formI", 150, 0);
//		Form		formj("formj", 150, 151);
		Form *formTab[FORM_SIZE] = {&formA, &formB, &formC, &formD, &formE, &formF, &formG};

		for (int i = 0; i < BUR_SIZE; i++) //for each bureaucrat..
		{
			for (int j = 0; j < FORM_SIZE; j++) //for each form..
			{
				try
				{
					burTab[i]->signForm(*formTab[j]); //..try to sign the form
				}
				catch(const std::exception& e)
				{
					std::cerr << e.what() << '\n';
				}
			}
				std::cout << std::endl;
		}

		std::cout << "This is the form A :" << std::endl;
		std::cout << formA << std::endl;

		std::cout << "This is the form B :" << std::endl;
		std::cout << formB << std::endl;

		std::cout << "Exception test : " << std::endl;
		try
		{
			Form formH("formH", 151, 1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			Form formI("formI", 150, 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

}

