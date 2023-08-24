#ifndef CPP_PHONEBOOK_HPP
#define CPP_PHONEBOOK_HPP
#include <string>
#include "Contact.hpp"

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
		void myGetLine(std::string &var) const;
};

void printGreen(const std::string& txt);
void PleaseEnterCmdMsg();
void printRow(const std::string& txt);
#endif //CPP_PHONEBOOK_HPP
