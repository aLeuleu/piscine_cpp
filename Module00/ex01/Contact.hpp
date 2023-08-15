#ifndef CPP_CONTACT_HPP
#define CPP_CONTACT_HPP
#include <iostream>

using namespace std;

class Contact {
public:
	Contact();
	Contact(string firstname, string lastname, string nickname, string darkestSecret, string phoneNumber);
	string firstname;
	string lastname;
	string nickname;
	string phoneNumber;
	string darkestSecret;
	bool operator==(const Contact &rhs) const;

	~Contact();
};
#endif