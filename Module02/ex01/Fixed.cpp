
#include <iostream>
#include <cmath>
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

	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(another.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(const int raw) {
	this->_value = raw;
}

Fixed::Fixed(const int value) {
	this->_value = value << this->_bits;
}

Fixed::Fixed(const float value) {
	this->_value = roundf(value * (1 << this->_bits)); //easier to explain in base 10 !
}

float Fixed::toFloat(void) const {
	return (float)this->_value / (float)(1 << this->_bits); //easier to explain in base 10 !
}

int Fixed::toInt(void) const {
	return this->_value >> this->_bits; //truncate
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {

	os << fixed.toFloat();
	return os;
}
