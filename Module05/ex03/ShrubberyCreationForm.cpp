#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137,
	        (std::string &) "defaultTarget") {
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, std::string target)
	: AForm(name,
	        145,
	        137,
	        target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("",
	        145,
	        137,
	        target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) {
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	if (this != &other) {
		AForm::operator=(other);
	}
	return (*this);
}
void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {

	std::string AsciiTree = "       _-_\n"
	                        "    /~~   ~~\\\n"
	                        " /~~         ~~\\\n"
	                        "{               }\n"
	                        " \\  _-     -_  /\n"
	                        "   ~  \\\\ //  ~\n"
	                        "_- -   | | _- _\n"
	                        "  _ -  | |   -_\n"
	                        "      // \\\\";
	if (!checkExecutePerms(executor))
		throw ShrubberyCreationForm::GradeTooLowException();
	if (!getSigned())
		throw ShrubberyCreationForm::FormIsNotSigned();
	this->create_file(AsciiTree, getTarget() + "_shrubbery");
}

void ShrubberyCreationForm::create_file(std::string data, std::string filename) const {
	std::ofstream output(filename.c_str());
	if (!output.is_open()) {
		std::cout << "Fail to open file" << std::endl;
		return;
	}
	output << data;
}

