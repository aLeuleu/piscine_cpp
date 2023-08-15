#include <string>

class ClapTrap
{
private :
	std::string		_name;
	unsigned int	_hitPoints = 10;
	unsigned int	_energyPoints = 10;
	unsigned int	_attackDamage = 0;

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