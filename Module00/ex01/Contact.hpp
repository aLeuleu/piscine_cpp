#ifndef CPP_CONTACT_HPP
#define CPP_CONTACT_HPP
#include <iostream>

using namespace std;

class Contact {
public:
	Contact();
	Contact(string firstname, string lastname, string nickname, string darkestSecret, string phoneNumber);
	bool operator==(const Contact &rhs) const;
	std::string& getFirstname();
	std::string& getLastname();
	std::string& getNickname();
	std::string& getPhoneNumber();
	std::string& getDarkestSecret();
	void setFirstname(string firstname);
	void setLastname(string lastname);
	void setNickname(string nickname);
	void setPhoneNumber(string phoneNumber);
	void setDarkestSecret(string darkestSecret);


	~Contact();
	private :
	string _firstname;
	string _lastname;
	string _nickname;
	string _phoneNumber;
	string _darkestSecret;

};
#endif