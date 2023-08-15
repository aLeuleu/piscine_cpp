#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {
	std::cout << "Default FragTrap constructor called" << std::endl;
	_name = "Default";
};

FragTrap::FragTrap(std::string name){
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = name;
}

FragTrap::FragTrap(const FragTrap& right)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = right;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}


FragTrap &FragTrap::operator=(const FragTrap &right) {
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this == &right)
		return *this;
	_name = right._name;
	_hitPoints = right._hitPoints;
	_energyPoints = right._energyPoints;
	_attackDamage = right._attackDamage;
	return *this;
}

void FragTrap::attack(const std::string &target) {

	ClapTrap::attack(target);
}

void FragTrap::guardGate() {
	std::cout << "FragTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}


