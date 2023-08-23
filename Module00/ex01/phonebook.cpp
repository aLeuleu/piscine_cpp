
#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {
	std::cout << "The PhoneBook is created" << endl;
	this->_nextContactIndex = 0;
}

PhoneBook::~PhoneBook() {
	std::cout << "The PhoneBook is destroyed" << endl;
}

void PhoneBook::addContact()
{
	printGreen("Please enter the contact's firstname :");
	myGetLine(this->_contacts->getFirstname());
	printGreen("Please enter the contact's lastname :");
	myGetLine(this->_contacts->getLastname());
	printGreen("Please enter the contact's nickname :");
	myGetLine(this->_contacts->getNickname());
	printGreen("Please enter the contact's phoneNumber :");
	myGetLine(this->_contacts->getPhoneNumber());
	printGreen("Please enter the contact's darkestSecret :");
	myGetLine(this->_contacts->getDarkestSecret());
	printGreen("Adding contact ...");
	this->_nextContactIndex++;
	if (this->_nextContactIndex == 8)
		this->_nextContactIndex = 0;
}

void PhoneBook::myGetLine(string &var) const {
	if (!std::cin.eof())
	{
		getline(cin, var);
		while(!std::cin.eof() && var.empty()){
			getline(cin, var);
		}
		if (std::cin.eof())
			std::cout << std::endl << std::endl << "EOF detected ..." << std::endl << "Exiting ..." << std::endl;
	}
}

void PhoneBook::search()
{
	int index;

	printGreen("Here are the available contacts :");

	for (int i = 0; i < 8; i++)
	{
		if ( !this->_contacts[i].getFirstname().empty())
		{
			std::cout << std::setfill(' ') << std::setiosflags(std::ios_base::right) << std::setw(10) << i << "|";
			printRow(this->_contacts[i].getFirstname());
			printRow(this->_contacts[i].getLastname());
			printRow(this->_contacts[i].getNickname());
			std::cout << endl;
		}
	}
		printGreen("Please enter the index of the contact you want to see : ");
		std::cin >> index;
		if (std::cin.fail() || index < 0 || index > 7)
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			printGreen("Invalid index");
		}
		else if (this->_contacts[index].getFirstname().empty())
			printGreen("No contact at this index");
		else
		{
			std::cout << "Firstname : " << _contacts[index].getFirstname() << endl;
			std::cout << "Lastname : " << _contacts[index].getLastname() << endl;
			std::cout << "Nickname : " << _contacts[index].getNickname() << endl;
			std::cout << "PhoneNumber : " << _contacts[index].getPhoneNumber() << endl;
			std::cout << "DarkestSecret : " << _contacts[index].getDarkestSecret() << endl;
		}

}
void printRow(const string& txt)
{
	string green = "\033[1;32m";
	string reset = "\033[0m";

	if (txt.length() > 10)
		std::cout << green << txt.substr(0, 9) << "." << reset << "|";
	else
		std::cout << green << std::setfill(' ') << std::setiosflags(std::ios_base::right) << std::setw(10) << txt << reset << "|";
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
	if (!std::cin.eof())
		std::cout << green << txt << reset << endl;
}
