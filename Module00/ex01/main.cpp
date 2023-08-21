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
		if (cin.fail() || cin.eof()) // this will catch EOF and non-integer input
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this will ignore the rest of the input
			std::cout << "Invalid input. Please try again.\n";
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
