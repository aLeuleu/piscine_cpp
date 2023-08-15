#include <iostream>
#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &right) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = right;
}

Animal &Animal::operator=(const Animal &animal) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this == &animal)
		return *this;
	_type = animal._type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Animal makeSound called" << std::endl;
}

std::string Animal::getType() const {

	return _type;
}