#include "HumanA.hpp"
#include <iostream>

void HumanA::attack()
{
	std::cout << name << " attack with their " << Weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, class Weapon weapon) : Weapon(weapon)
{
	this->name = name;
	this->Weapon = weapon;
}
