#include "Form.hpp"

Form::Form()  : _isSigned(false), _gradeToSign(0), _gradeToExecute(0) {
}

Form::~Form() {
}

Form::Form(const Form &right) : _name(right._name), _gradeToSign(right._gradeToExecute), _gradeToExecute(right._gradeToSign)  {
	*this = right;
}

Form &Form::operator=(const Form &right){
	if (this != &right) {
		this->_isSigned = right._isSigned;
	}
	return *this;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	this->_isSigned = false;
}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getSigned() const {
	return this->_isSigned;
}

int Form::getGradeToSign() const {
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "Form " << form.getName() << std::endl;
	if (form.getSigned())
		os << "signed";
	else
		os << "not signed";
	os << std::endl << "Grade required to be signed : " << form.getGradeToSign();
	os << std::endl << "Grade required to be executed : " << form.getGradeToExecute();
	return os;
}
