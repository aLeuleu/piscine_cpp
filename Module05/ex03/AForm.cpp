#include "AForm.hpp"

AForm::~AForm() {}

AForm::AForm(const AForm &right)
	: _name(right._name),
	  _isSigned(false),
	  _gradeToSign(right._gradeToSign),
	  _gradeToExecute(right._gradeToExecute),
	  _target(right._target) {
	*this = right;
}

AForm &AForm::operator=(const AForm &right) {
	if (this != &right) {
		this->_isSigned = right._isSigned;
	}
	return *this;
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute, std::string &target)
	: _name(name),
	  _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target) {
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	this->_isSigned = false;
}

std::string AForm::getName() const { return this->_name; }

bool AForm::getSigned() const { return this->_isSigned; }

int AForm::getGradeToSign() const { return this->_gradeToSign; }

int AForm::getGradeToExecute() const { return this->_gradeToExecute; }

std::string AForm::getTarget() const { return _target; }

void AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

AForm::AForm() : _isSigned(false), _gradeToSign(0), _gradeToExecute(0) {}

bool AForm::checkExecutePerms(const Bureaucrat &bureaucrat) const {
	if (bureaucrat.getGrade() > this->_gradeToExecute)
		return false;
	return true;
}

const char *AForm::GradeTooHighException::what() const throw() { return "Grade too high"; }

const char *AForm::GradeTooLowException::what() const throw() { return "Grade too low"; }

const char *AForm::FormIsNotSigned::what() const throw() { return "Form is not signed"; }

std::ostream &operator<<(std::ostream &os, const AForm &form) {
	os << "Form " << form.getName() << ":"<< std::endl;
	if (form.getSigned())
		os << "\tsigned";
	else
		os << "\tnot signed";
	os << std::endl << "\tGrade required to be signed : " << form.getGradeToSign();
	os << std::endl << "\tGrade required to be executed : " << form.getGradeToExecute();
	os << std::endl << "\tTarget : " << form.getTarget();

	return os;
}

