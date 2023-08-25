#pragma once
#include <string>

class ClapTrap
{
protected :
	std::string		_name;
	unsigned int	_hitPoints = 10;
	unsigned int	_energyPoints = 10;
	unsigned int	_attackDamage = 0;

public :
	ClapTrap();
	explicit ClapTrap(std::string name);
	ClapTrap(unsigned int hp, unsigned int ep, unsigned int ad);
	~ClapTrap();
	ClapTrap(const ClapTrap& right);
	ClapTrap&           operator=(const ClapTrap& clapTrap);
	virtual void        attack(const std::string& target);
	void                takeDamage(unsigned int amount);
	void                beRepaired(unsigned int amount);
};