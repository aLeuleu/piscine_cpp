#pragma once
#include <string>

class ClapTrap
{
private :
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public :
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& right);
	ClapTrap& 	    operator=(const ClapTrap& clapTrap);
	void		    attack(const std::string& target);
	void		    takeDamage(unsigned int amount);
	void		    beRepaired(unsigned int amount);
	std::string		getName() const;
	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
	unsigned int	getAttackDamage() const;
	void			setName(std::string name);
	void			setHitPoints(unsigned int hitPoints);
	void			setEnergyPoints(unsigned int energyPoints);
	void			setAttackDamage(unsigned int attackDamage);
};