#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string _name;
public:
	Zombie();
	explicit Zombie(std::string &name);
	void setName(std::string &name);
	void announce();
	~Zombie();
};

Zombie *newZombie(std::string name);
Zombie *zombieHorde(int N, std::string name);
#endif //CPP_ZOMBIE_HPP