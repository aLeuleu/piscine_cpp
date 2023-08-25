#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
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
	WrongAnimal& 	operator=(const WrongAnimal& animal);
	void	        makeSound() const; //not virtual ! .... so the compiler won't search for anything deeper
	std::string		getType() const;
};
#endif