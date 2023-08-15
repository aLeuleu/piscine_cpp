#include "Weapon.hpp"

class HumanA {
public:
	Weapon	Weapon;
	std::string	name;
	void 	attack();
	HumanA(std::string name, class Weapon weapon);
};