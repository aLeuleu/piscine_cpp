//
// Created by Aurelien Levra on 02/07/2023.
//

#ifndef CPP_PHONEBOOK_HPP
#define CPP_PHONEBOOK_HPP
#include <string>
using namespace std;

enum commands {
	ADD = 1,
	SEARCH = 2,
	EXIT = 3
};

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

class PhoneBook {
private:
	Contact		contacts[8];
	int			nextContactIndex;

public:
	PhoneBook();
	~PhoneBook();
	void addContact(const Contact& NewContact);
	void search();
};

void printGreen(const string& txt);
void printGrey(const string& txt);
void PleaseEnterCmdMsg();
void printLine(const string& txt);
#endif //CPP_PHONEBOOK_HPP
