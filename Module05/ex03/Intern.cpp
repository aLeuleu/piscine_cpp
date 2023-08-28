#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern &Intern::operator=(const Intern &other) {
	(void) other;
	return (*this);
}
AForm *Intern::makeForm(std::string formName, std::string formTarget) {
	const std::string forms[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};

	int i;
	for (i = 0; i < 3; i++) {
		if ((formName) == forms[i])
			break;
	}
	if (i >= 3)
	{
		std::cout << "The form " << formName << " does not exist !" << std::endl;
		return NULL;
	}

	std::cout << "Intern creates " << formName << std::endl;
	switch (i) {
		case 0: return new PresidentialPardonForm(formTarget);
		case 1: return new RobotomyRequestForm(formTarget);
		case 2: return new ShrubberyCreationForm(formTarget);
	}
	return NULL;
}
