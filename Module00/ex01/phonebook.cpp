
#include "PhoneBook.hpp"
using namespace std;
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
	cout << "The PhoneBook is created" << endl;
	this->_nextContactIndex = 0;
	for (int i = 0; i < 8; i++)
		this->_contacts[i] = NULL;
}

PhoneBook::~PhoneBook() {
	cout << "The PhoneBook is destroyed" << endl;
}

void PhoneBook::addContact()
{
	string	firstname;
	string	lastname;
	string	nickname;
	string	phoneNumber;
	string	darkestSecret;

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

	Contact	*NewContact = new Contact(firstname, lastname, nickname, phoneNumber, darkestSecret);
	cout << "Adding contact " << NewContact->firstname << endl;
	this->_contacts[this->_nextContactIndex] = NewContact;
	this->_nextContactIndex++;
	if (this->_nextContactIndex == 8)
		this->_nextContactIndex = 0;
}

void PhoneBook::search()
{
	int index;

	printGrey("Here are the available contacts :");

	for (int i = 0; i < 8; i++)
	{
		if ( this->_contacts[i] && !this->_contacts[i]->firstname.empty())
		{
			std::cout << std::setfill(' ') << std::setiosflags(std::ios_base::right) << std::setw(10) << i << "|";
			printRow(this->_contacts[i]->firstname);
			printRow(this->_contacts[i]->lastname);
			printRow(this->_contacts[i]->nickname);
			cout << endl;
		}
	}
		printGreen("Please enter the index of the contact you want to see : ");
		cin >> index;
		if (cin.fail() || index < 0 || index > 7)
		{
			cin.clear();
			cin.ignore(10000, '\n');
			printGreen("Invalid index");
		}
		else if (this->_contacts[index])
		{
			cout << "Firstname : " << _contacts[index]->firstname << endl;
			cout << "Lastname : " << _contacts[index]->lastname << endl;
			cout << "Nickname : " << _contacts[index]->nickname << endl;
			cout << "PhoneNumber : " << _contacts[index]->phoneNumber << endl;
			cout << "DarkestSecret : " << _contacts[index]->darkestSecret << endl;
		}

}
void printRow(const string& txt)
{
	string grey = "\033[1;30m";
	string reset = "\033[0m";

	if (txt.length() > 10)
		cout << grey << txt.substr(0, 9) << "." << reset << "|";
	else
		cout << grey << std::setfill(' ') << std::setiosflags(std::ios_base::right) << std::setw(10) << txt << reset << "|";
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