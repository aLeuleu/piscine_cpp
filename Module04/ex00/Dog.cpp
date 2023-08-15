#pragma once
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &right) : Animal(right) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = right;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this == &dog)
		return *this;
	_type = dog._type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Wouf wouf !" << std::endl;
}
