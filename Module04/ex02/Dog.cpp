#pragma once
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &right) : AAnimal(right) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = right;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this == &dog)
		return *this;
	_type = dog._type;
	delete _brain;
	_brain = new Brain(*dog._brain);
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Wouf wouf !" << std::endl;
}

Brain *Dog::getBrain() const {
	return _brain;
}
