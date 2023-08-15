#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &right) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = right;
}

AAnimal &AAnimal::operator=(const AAnimal &animal) {
	std::cout << "AAnimal assignation operator called" << std::endl;
	if (this == &animal)
		return *this;
	_type = animal._type;
	return *this;
}

std::string AAnimal::getType() const {

	return _type;
}