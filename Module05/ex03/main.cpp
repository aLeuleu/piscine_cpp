
#include "Bureaucrat.hpp"
#include "Intern.hpp"

void printGreen(std::string str) {
	std::cout << "\033[1;32m" << str << "\033[0m" << std::endl;
}

int main(void) {

	printGreen("1) Bureaucrat JoeyTribbiani will try to sign ShrubberyCreationForm GenericForm (target Chandler Bing).");

	Intern someRandomIntern;
	AForm *GenericForm;
	GenericForm = someRandomIntern.makeForm("robotomy request", "Chandler Bing");
	Bureaucrat JoeyTribbiani = Bureaucrat("JoeyTribbiani", 71);
	std::cout << *GenericForm << std::endl;
	try {
		JoeyTribbiani.signForm(*GenericForm); //should throw grade too low exception
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	JoeyTribbiani.incrementGrade();
	JoeyTribbiani.signForm(*GenericForm); //should succeed
	std::cout << *GenericForm << std::endl;



}

