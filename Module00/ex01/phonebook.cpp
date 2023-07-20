//
// Created by Aurelien Levra on 02/07/2023.
//

#include "phonebook.hpp"
using namespace std;
#include <iostream>

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

PhoneBook::PhoneBook() {
	cout << "The PhoneBook is created" << endl;
	this->nextContactIndex = 0;
}

PhoneBook::~PhoneBook() {
	cout << "The PhoneBook is destroyed" << endl;
}

void PhoneBook::addContact(const Contact& NewContact)
{
	cout << "Adding contact " << NewContact.firstname << endl;
	this->contacts[this->nextContactIndex] = NewContact;
	this->nextContactIndex++;
	if (this->nextContactIndex == 8)
		this->nextContactIndex = 0;
}

void PhoneBook::search()
{
	int index;

	printGrey("Here are the available contacts :");

	for (int i = 0; i < 8; i++)
	{
		if (!this->contacts[i].firstname.empty())
		{
			cout << "         " << i << "|";
			printLine(this->contacts[i].firstname);
			printLine(this->contacts[i].lastname);
			printLine(this->contacts[i].nickname);
			cout << endl;
		}
	}
		printGreen("Please enter the index of the contact you want to see : ");
		cin >> index;
		if (index < 0 || index > 7)
			printGreen("Invalid index");
		else
		{
			cout << "Firstname : " << contacts[index].firstname << endl;
			cout << "Lastname : " << contacts[index].lastname << endl;
			cout << "Nickname : " << contacts[index].nickname << endl;
			cout << "PhoneNumber : " << contacts[index].phoneNumber << endl;
			cout << "DarkestSecret : " << contacts[index].darkestSecret << endl;
		}

}
void printLine(const string& txt)
{
	if (txt.length() < 10)
		cout << string(9 - txt.length(), ' ') << txt << "|";
	else
		cout << txt.substr(0, 8) << ".|";
}

int		main(){
	PhoneBook	myPhoneBook;
	int			command;
	string 		firstname;
	string		lastname;
	string		nickname;
	string 		phoneNumber;
	string 		darkestSecret;

	printGreen("Welcome to the PhoneBook");
	command = 0;
	while(command != EXIT)
	{
		PleaseEnterCmdMsg();
		cin >> command;
		switch (command)
		{
			case ADD:
				printGreen("Please enter the contact's firstname :");
				cin >> firstname;
				printGreen("Please enter the contact's lastname :");
				cin >> lastname;
				printGreen("Please enter the contact's nickname :");
				cin >> nickname;
				printGreen("Please enter the contact's phoneNumber :");
				cin >> phoneNumber;
				printGreen("Please enter the contact's darkestSecret :");
				cin >> darkestSecret;
				myPhoneBook.addContact(Contact(firstname, lastname, nickname, darkestSecret, phoneNumber));
				break;

			case SEARCH:
				myPhoneBook.search();
				break;

			case EXIT:
				break;

			default:
				printGreen("Invalid command");
				break;
		}
	}
	printGreen("Goodbye");
	return (0);
}

void PleaseEnterCmdMsg()
{
	string green = "\033[1;32m";
	string reset = "\033[0m";

	printGreen("Please enter a command :");
	printGreen("1 - ADD");
	printGreen("2 - SEARCH");
	printGreen("3 - EXIT");
}

void printGreen(const string& txt)
{
	string green = "\033[1;32m";
	string reset = "\033[0m";

	cout << green << txt << reset << endl;
}

void printGrey(const string& txt)
{
	string grey = "\033[1;30m";
	string reset = "\033[0m";

	cout << grey << txt << reset << endl;
}