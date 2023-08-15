#include "HumanB.hpp"
#include <iostream>

void HumanB::attack()
{
	if (Weapon.getType() == "")
		std::cout << name << " attack with their bare hands" << std::endl;
	else
	std::cout << name << " attack with their " << Weapon.getType() << std::endl;
}

HumanB::HumanB(std::string name) : Weapon("")
{
	this->name = name;
}

void HumanB::setWeapon(class Weapon weapon)
{
	this->Weapon = weapon;
}
