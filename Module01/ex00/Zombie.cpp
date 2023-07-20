
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
	cout << this->name << " is dead" << endl;
}
