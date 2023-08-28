#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm ;
class Intern {
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();

		Intern &operator=(const Intern &other);
		AForm *makeForm(std::string formName, std::string formTarget);
};

#endif