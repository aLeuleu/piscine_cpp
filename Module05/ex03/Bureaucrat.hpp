#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& right);
	Bureaucrat& operator=(const Bureaucrat& bureaucrat);
	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	class GradeTooHighException : public std::exception
	{
		const char * what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char * what() const throw();
	};
	void	signForm(AForm &form);
	void	executeForm(AForm const & form);
private:
	const std::string _name;
	int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif