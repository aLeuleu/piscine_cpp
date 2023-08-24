#include "Contact.hpp"

Contact::Contact(){};

Contact::~Contact(){};

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, std::string darkestSecret, std::string phoneNumber)
{
	this->_firstname = firstname;
	this->_lastname = lastname;
	this->_nickname = nickname;
	this->_darkestSecret = darkestSecret;
	this->_phoneNumber = phoneNumber;
	std::cout << "Contact \"" << this->_firstname << "\" created" << std::endl;
}

bool Contact::operator==(const Contact &rhs) const
{
	return (_firstname == rhs._firstname &&
			_lastname == rhs._lastname &&
			_nickname == rhs._nickname &&
			_phoneNumber == rhs._phoneNumber &&
			_darkestSecret == rhs._darkestSecret);
}
std::string &Contact::getFirstname() {
	return _firstname;
}

std::string &Contact::getLastname() {
	return _lastname;
}

std::string &Contact::getNickname() {
	return _nickname;
}

std::string &Contact::getPhoneNumber() {
	return _phoneNumber;
}

std::string &Contact::getDarkestSecret() {
	return _darkestSecret;
}

void Contact::setFirstname(std::string firstname) {
	this->_firstname = firstname;
}

void Contact::setLastname(std::string lastname) {
	this->_lastname = lastname;
}

void Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}


