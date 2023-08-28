#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45,
                                                       (std::string &) "defaultTarget") {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, std::string target) : AForm(name, 72, 45, target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)  : AForm(other) {
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
	if (this != &other) {
		AForm::operator=(other);
	}
	return (*this);
}
void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!checkExecutePerms(executor))
		throw RobotomyRequestForm::GradeTooLowException();
	if (!getSigned())
		throw RobotomyRequestForm::FormIsNotSigned();
	std::cout << "*VRVRVVRVRVRVRVRVRVRVRRRRRRRRRRRR*" <<  std::endl;
	std::cout << "*FRRRRRFHEOIFWNCJERN*" <<  std::endl;

	bool success = rand() % 2;
	if (success)
		std::cout << "The robotomy of" << getTarget() << " has been a complete success !" << std::endl;
	else
		std::cout << "The robotomy of" << getTarget() << " has failed. oups ..." << std::endl;

}

