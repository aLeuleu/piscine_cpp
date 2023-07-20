//
// Created by Aurelien Levra on 02/07/2023.
//

#ifndef CPP_PHONEBOOK_CLASS_HPP
#define CPP_PHONEBOOK_CLASS_HPP
using namespace std;
#include <string>

class contact {
public:
	contact();
	~contact();
	string Login;
	string PhoneNumber;
};

class PhoneBook {
private:
	contact		contacts[8];
	int			index = 0;

public:
	PhoneBook();
	~PhoneBook();
	void AddContact(contact NewContact);
	search_contact();
//	exit_phonebook();
};

#endif //CPP_PHONEBOOK_CLASS_HPP


