#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
protected :
	std::string		_type;
public :
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &right);
	WrongAnimal& 		operator=(const WrongAnimal& animal);
	void	makeSound() const;
	std::string		getType() const;
};