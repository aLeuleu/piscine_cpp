
#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() {

	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &another) {

	std::cout << "Copy constructor called" << std::endl;
	*this = another;
}

Fixed &Fixed::operator=(const Fixed &another) {

	std::cout << "Assignation operator called" << std::endl;
	this->_value = another._value;
	return *this;
}

int Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(const int raw) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
