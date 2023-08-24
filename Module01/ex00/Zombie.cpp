
#include <iostream>
#include "Zombie.hpp"


Zombie::Zombie()
{
	this->_name = "default";
}

Zombie::Zombie(std::string &name)
{
	this->_name = name;
}

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is destroyed" << std::endl;
}

Zombie *newZombie(std::string name) // in this case, the zombie is allocated on the heap because it is returned
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

void randomChump(std::string name) // in this case, the zombie is allocated on the stack because it is not returned
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
