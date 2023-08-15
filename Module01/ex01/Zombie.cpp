
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "default";
}

Zombie::Zombie(string &name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is dead" << endl;
}

void Zombie::setName(string &name)
{
	this->name = name;
}
