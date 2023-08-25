#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap(100, 50 ,20)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	_name = "Default";
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 50 ,20){
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_name = name;
}

ScavTrap::ScavTrap(const ScavTrap& right)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = right;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &right) {
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this == &right)
		return *this;
	_name = right._name;
	_hitPoints = right._hitPoints;
	_energyPoints = right._energyPoints;
	_attackDamage = right._attackDamage;
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	ClapTrap::attack(target);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}


