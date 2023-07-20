#include "Weapon.hpp"

class HumanB {
public:
	Weapon		Weapon;
	string		name;
	void		attack();
	HumanB(string name);
	void		setWeapon(class Weapon weapon);
};