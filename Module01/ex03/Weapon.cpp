
#include "Weapon.hpp"
#include <iostream>
#include <string>

std::string &Weapon::getType()
{
	std::string &typeREF = this->type;
	return typeREF;
}
Weapon::Weapon(std::string type) {
	this->type = type;
}
void Weapon::setType(std::string newtype) {
	this->type = newtype;
}
