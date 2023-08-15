#include "Contact.hpp"

Contact::Contact(){};

Contact::~Contact(){};

Contact::Contact(string firstname, string lastname, string nickname, string darkestSecret, string phoneNumber)
{
	this->firstname = firstname;
	this->lastname = lastname;
	this->nickname = nickname;
	this->darkestSecret = darkestSecret;
	this->phoneNumber = phoneNumber;
	cout << "Contact \"" << this->firstname << "\" created" << endl;
}

bool Contact::operator==(const Contact &rhs) const
{
	return (firstname == rhs.firstname &&
			lastname == rhs.lastname &&
			nickname == rhs.nickname &&
			phoneNumber == rhs.phoneNumber &&
			darkestSecret == rhs.darkestSecret);
}