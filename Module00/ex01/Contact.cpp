#include "Contact.hpp"

Contact::Contact(){};

Contact::~Contact(){};

Contact::Contact(string firstname, string lastname, string nickname, string darkestSecret, string phoneNumber)
{
	this->_firstname = firstname;
	this->_lastname = lastname;
	this->_nickname = nickname;
	this->_darkestSecret = darkestSecret;
	this->_phoneNumber = phoneNumber;
	cout << "Contact \"" << this->_firstname << "\" created" << endl;
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

void Contact::setFirstname(string firstname) {
	this->_firstname = firstname;
}

void Contact::setLastname(string lastname) {
	this->_lastname = lastname;
}

void Contact::setNickname(string nickname) {
	this->_nickname = nickname;
}

void Contact::setPhoneNumber(string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}


