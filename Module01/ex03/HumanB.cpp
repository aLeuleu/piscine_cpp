#include "HumanB.hpp"
#include <iostream>

void HumanB::attack()
{
	std::cout << name << " attack with their " << Weapon.getType() << std::endl;
}

HumanB::HumanB(string name) : Weapon("")
{
	this->name = name;
}

void HumanB::setWeapon(class Weapon weapon)
{
	this->Weapon = weapon;
}
