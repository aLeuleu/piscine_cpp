#pragma once
#include <string>

class ClapTrap
{
protected :
	std::string		_name;
	unsigned int	_hitPoints = 100;
	unsigned int	_energyPoints = 50;
	unsigned int	_attackDamage = 20;

public :
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& right);
	ClapTrap& 	operator=(const ClapTrap& clapTrap);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};