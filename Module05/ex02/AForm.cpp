#include "AForm.hpp"

AForm::~AForm() {
}

AForm::AForm(const AForm &right) : _name(right._name), _gradeToExecute(right._gradeToExecute), _gradeToSign(right._gradeToSign) {
	*this = right;
}

AForm &AForm::operator=(const AForm &right){
	if (this != &right) {
		this->_isSigned = right._isSigned;
	}
	return *this;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name),
																						_gradeToExecute(gradeToExecute),
																						_gradeToSign(gradeToSign) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	this->_isSigned = false;
}

std::string AForm::getName() const {
	return this->_name;
}

bool AForm::getSigned() const {
	return this->_isSigned;
}

int AForm::getGradeToSign() const {
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const {
	return this->_gradeToExecute;
}

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

AForm::AForm() : _gradeToExecute(0), _gradeToSign(0) {
}

const char *AForm::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
	return "Grade too low";
}
