#ifndef CPP_PHONEBOOK_HPP
#define CPP_PHONEBOOK_HPP
#include <string>
#include "Contact.hpp"

using namespace std;

enum commands {
	ADD = 1,
	SEARCH = 2,
	EXIT = 3
};

class PhoneBook {
private:
	Contact     _contacts[8];
	int			_nextContactIndex;

public:
	PhoneBook();
	~PhoneBook();
	void addContact();
	void search();
};

void printGreen(const string& txt);
void printGrey(const string& txt);
void PleaseEnterCmdMsg();
void printRow(const string& txt);
#endif //CPP_PHONEBOOK_HPP
