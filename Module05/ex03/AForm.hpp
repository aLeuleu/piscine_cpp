#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class AForm {
private:
	const std::string	_name;
	bool		        _isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	std::string	        _target;

	public:
	AForm();
	AForm(const std::string name, const int gradeToSign, const int gradeToExecute, std::string &target);
	virtual ~AForm();
	AForm(const AForm& right);
	AForm& operator=(const AForm& right);
	std::string getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void		beSigned(const Bureaucrat& bureaucrat);
	bool        checkExecutePerms(const Bureaucrat& bureaucrat) const;
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
	class FormIsNotSigned : public std::exception {
			const char* what() const throw();
	};
	virtual void	execute(Bureaucrat const & executor) const = 0;
	std::string     getTarget() const;
};

std::ostream &operator<<(std::ostream &os, const AForm &form);

#endif