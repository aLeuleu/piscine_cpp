#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public :
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& right);
	ScavTrap& operator=(const ScavTrap& right);
	void		attack(const std::string& target);
	void		guardGate();

};