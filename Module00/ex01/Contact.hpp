#ifndef CPP_CONTACT_HPP
#define CPP_CONTACT_HPP
#include <iostream>

class Contact {
public:
	Contact();
	Contact(std::string firstname, std::string lastname, std::string nickname, std::string darkestSecret, std::string phoneNumber);
	bool operator==(const Contact &rhs) const;
	std::string& getFirstname();
	std::string& getLastname();
	std::string& getNickname();
	std::string& getPhoneNumber();
	std::string& getDarkestSecret();
	void setFirstname(std::string firstname);
	void setLastname(std::string lastname);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string phoneNumber);
	void setDarkestSecret(std::string darkestSecret);


	~Contact();
	private :
	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

};
#endif