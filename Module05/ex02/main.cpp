
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void printGreen(std::string str) {
	std::cout << "\033[1;32m" << str << "\033[0m" << std::endl;
}

int main(void) {
	printGreen("1) Bureaucrat JimHalpert will try to sign ShrubberyCreationForm A1 (target bear).");
	ShrubberyCreationForm A1 = ShrubberyCreationForm("A1", "bear"); //145 to be signed, 137 to be exec
	Bureaucrat JimHalpert = Bureaucrat("JimHalpert", 146);
	std::cout << A1 << std::endl;
	try {
		JimHalpert.signForm(A1); //should throw grade too low exception
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	JimHalpert.incrementGrade();
	JimHalpert.signForm(A1); //should succeed
	std::cout << A1 << std::endl;



	//test2
	printGreen("2) Bureaucrat DwightSchrute will try to execute ShrubberyCreationForm A1 (target bear).");
	Bureaucrat DwightSchrute = Bureaucrat("DwightShrute", 138);
	try {
		DwightSchrute.executeForm(A1); //should throw grade too low exception
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	DwightSchrute.incrementGrade();
	DwightSchrute.executeForm(A1); //should succeed

	//test3
	printGreen("3) Bureaucrat DwightSchrute will try to execute ShrubberyCreationForm A2 (the form is not signed).");
	ShrubberyCreationForm A2 = ShrubberyCreationForm("A2", "cat"); //145 to be signed, 137 to be exec
	try {
		DwightSchrute.executeForm(A2); //should throw Form is not signed exception
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	//test4
	printGreen("4) Bureaucrat MichaelScott sign and execute RobotomyRequestForm A3 (target cat).");
	RobotomyRequestForm A3 = RobotomyRequestForm("A3", "cat"); //72 to be signed, 45 to be exec
	Bureaucrat MichaelScott = Bureaucrat("MichaelScott", 45);

	MichaelScott.signForm(A3);
	MichaelScott.executeForm(A3);

	//test5
	printGreen("5) Bureaucrat KevinMalone sign and execute PresidentialPardonForm A4 (target Pam Beesly).");
	PresidentialPardonForm A4 = PresidentialPardonForm("A4", "Pam Beesly"); //25 to be signed, 5 to be exec
	Bureaucrat KevinMalone = Bureaucrat("KevinMalone", 5);

	KevinMalone.signForm(A4);
	KevinMalone.executeForm(A4);

}

