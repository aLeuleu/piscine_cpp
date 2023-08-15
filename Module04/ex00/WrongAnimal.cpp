#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this == &wrongAnimal)
		return *this;
	_type = wrongAnimal._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &right) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = right;
}

