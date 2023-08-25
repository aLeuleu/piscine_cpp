#include "Weapon.hpp"

class HumanB {
public:
	Weapon		*Weapon;
	std::string		name;
	void		attack();
	HumanB(std::string name);
	void		setWeapon(class Weapon weapon);
};