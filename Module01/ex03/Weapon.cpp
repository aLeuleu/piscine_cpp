
#include "Weapon.hpp"
#include <iostream>
#include <string>

const std::string &Weapon::getType()
{
	const std::string &typeREF = this->_type;
	return typeREF;
}

Weapon::Weapon(std::string type) {
	this->_type = type;
}

void Weapon::setType(std::string newType) {
	this->_type = newType;
}
