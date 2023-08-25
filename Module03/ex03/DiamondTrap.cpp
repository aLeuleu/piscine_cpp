#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(void) {

}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	*this = other;
}

DiamondTrap::~DiamondTrap(void) {

}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) { //WORK IN PROGRESS
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {

}
