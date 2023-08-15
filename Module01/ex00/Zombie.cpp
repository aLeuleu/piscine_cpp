
#include <iostream>
#include "Zombie.hpp"

using namespace std;

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
	cout << this->name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie()
{
	cout << this->name << " is destroyed" << endl;
}

Zombie *newZombie(string name) // in this case, the zombie is allocated on the heap because it is returned
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

void randomChump(string name) // in this case, the zombie is allocated on the stack because it is not returned
{
	Zombie zombie = Zombie(name);
	zombie.announce();
}
