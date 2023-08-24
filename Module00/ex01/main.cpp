#include "Contact.hpp"
#include "phonebook.hpp"
#define MAX_INT 2147483647

int		main(){
	PhoneBook	myPhoneBook;
	int			command;
	std::string 		firstname;
	std::string		lastname;
	std::string		nickname;
	std::string 		phoneNumber;
	std::string 		darkestSecret;

	printGreen("Welcome to the PhoneBook");
	command = 0;
	while(command != EXIT)
	{
		if (!std::cin.eof())
			PleaseEnterCmdMsg();
		std::cin >> command;
		if (std::cin.fail() || std::cin.eof()) // this will catch EOF and non-integer input
		{
			std::cin.clear();
			std::cin.ignore(MAX_INT, '\n');
			if (!std::cin.eof())
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
