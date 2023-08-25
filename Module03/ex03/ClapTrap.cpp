#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called" << std::endl;
	this->_name = "";
};

ClapTrap::ClapTrap(std::string name){
	std::cout << "Constructor called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& right)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = right;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &right) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &right)
		return *this;
	_name = right._name;
	_hitPoints = right._hitPoints;
	_energyPoints = right._energyPoints;
	_attackDamage = right._attackDamage;
	return *this;
}

void		ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0
	|| this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << " does not have enough HP or energy points to attack ! .." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! " << std::endl;
	this->_energyPoints --;

}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0 )
		std::cout << "ClapTrap " << _name << " is already KO !" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage! " << std::endl;

	//check underflow
	if (_hitPoints - amount > _hitPoints)
		_hitPoints = 0;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap gained " << amount << " HP." << std::endl;

	if (this->_energyPoints == 0
		|| this->_hitPoints == 0)
	{
		std::cout << this->_name << "does not have enough HP or energy points to be repaired ! .." << std::endl;
		return;
	}

	//check overflow
	if (_hitPoints + amount < _hitPoints)
		_hitPoints = std::numeric_limits<decltype(this->_hitPoints)>::max();
	else
		_hitPoints += amount;
	_energyPoints --;
}
ClapTrap::ClapTrap(unsigned int hp, unsigned int ep, unsigned int ad) {
	_hitPoints = hp;
	_energyPoints = ep;
	_attackDamage = ad;
}
