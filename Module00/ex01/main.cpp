#include "Contact.hpp"
#include "phonebook.hpp"

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
		if (cin.fail() || cin.eof()) // a explorer
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			printf("Invalid command \n");
			break;
		}
		switch (command)
		{
			case ADD:
				myPhoneBook.addContact();
				break;

			case SEARCH:
				myPhoneBook.search();
				break;

			case EXIT:
				break;

			default:
				break;
		}
	}
	printGreen("Goodbye");
	return (0);
}
