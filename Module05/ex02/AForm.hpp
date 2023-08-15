#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class AForm {
private:
	const std::string	_name;
	bool		_isSigned = false;
	const int			_gradeToSign;
	const int			_gradeToExecute;
public:
	AForm();
	AForm(const std::string name, const int gradeToSign, const int gradeToExecute);
	~AForm();
	AForm(const AForm& right);
	AForm& operator=(const AForm& right);
	std::string getName() const;
	bool		getSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;
	void		beSigned(const Bureaucrat& bureaucrat);
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
};
#endif