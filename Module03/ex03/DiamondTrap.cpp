#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(void) {
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	*this = other;
}

DiamondTrap::~DiamondTrap(void) {
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	if (this != &other) {
		_name = other._name;
	}
	return (*this);
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {

}
