
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() {

	this->_value = 0;
}

Fixed::~Fixed() {

}

Fixed::Fixed(const Fixed &another) {
	*this = another;
}

Fixed &Fixed::operator=(const Fixed &another) {

	this->_value = another._value;
	return *this;
}

int Fixed::getRawBits(void) const {

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

bool Fixed::operator>(const Fixed &another) const {
	return this->_value > another._value;
}

bool Fixed::operator<(const Fixed &another) const {
	return this->_value < another._value;
}

bool Fixed::operator>=(const Fixed &another) const {
	return this->_value >= another._value;
}

bool Fixed::operator<=(const Fixed &another) const {
	return this->_value <= another._value;
}

bool Fixed::operator==(const Fixed &another) const {
	return this->_value == another._value;
}

bool Fixed::operator!=(const Fixed &another) const {
	return this->_value != another._value;
}

Fixed Fixed::operator+(const Fixed &another) const {
	return Fixed(this->toFloat() + another.toFloat());
}

Fixed Fixed::operator-(const Fixed &another) const {
	return Fixed(this->toFloat() - another.toFloat());
}

Fixed Fixed::operator*(const Fixed &another) const {
	return Fixed(this->toFloat() * another.toFloat());
}

Fixed Fixed::operator/(const Fixed &another) const {
	return Fixed(this->toFloat() / another.toFloat());
}

Fixed &Fixed::operator++() {

	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int) {

	Fixed tmp(*this);
	this->operator++();
	return tmp;
}

Fixed &Fixed::operator--() {

	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int) {

	Fixed tmp(*this);
	this->operator--();
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return a < b ? b : a;
}