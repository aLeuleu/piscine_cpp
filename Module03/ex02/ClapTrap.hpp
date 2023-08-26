#pragma once
#include <string>

# ifndef UNINT_MAX
#  define UNINT_MAX 4294967295
# endif
class ClapTrap
{
protected :
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public :
	ClapTrap();
	explicit ClapTrap(std::string name);
	ClapTrap(unsigned int hp, unsigned int ep, unsigned int ad);
	~ClapTrap();
	ClapTrap(const ClapTrap& right);
	ClapTrap&       operator=(const ClapTrap& clapTrap);
	virtual void    attack(const std::string& target);
	void            takeDamage(unsigned int amount);
	void            beRepaired(unsigned int amount);
};