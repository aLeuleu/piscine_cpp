#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class Form {
private:
	const std::string	_name;
	bool				_isSigned = false;
	const int			_gradeToSign;
	const int			_gradeToExecute;
public:
	Form();
	Form(const std::string name, const int gradeToSign, const int gradeToExecute);
	~Form();
	Form(const Form& right);
	Form& operator	=(const Form& right);
	std::string 	getName() const;
	bool			getSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExecute() const;
	void			beSigned(const Bureaucrat& bureaucrat);
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
};
#endif