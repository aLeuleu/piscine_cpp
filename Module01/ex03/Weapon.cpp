
#include "Weapon.hpp"

string &Weapon::getType()
{
	string &typeREF = this->type;
	return typeREF;
}
Weapon::Weapon(string type) {
	this->type = type;
}
void Weapon::setType(string newtype) {
	this->type = newtype;
}
