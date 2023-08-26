#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap(100,100,30)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	_name = "Default";
};

FragTrap::FragTrap(std::string name) : ClapTrap(100,100,30){
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
void FragTrap::highFivesGuys(void) {
	std::cout << "HIIGHH FIIIIIVES !!!" << std::endl;
}


