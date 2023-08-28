#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", 25, 5,
	        (std::string &) "defaultTarget") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string name, std::string target)
	: AForm(name,
	        25,
	        5,
	        target) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: AForm(other) { *this = other; }

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	if (this != &other) {
		AForm::operator=(other);
	}
	return (*this);
}
void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!checkExecutePerms(executor))
		throw PresidentialPardonForm::GradeTooLowException();
	if (!getSigned())
		throw PresidentialPardonForm::FormIsNotSigned();
	std::cout << "We are pleased to announce that " << getTarget()
	          << " has been excused by the great Zaphod Beeblebrox !" << std::endl;
}

