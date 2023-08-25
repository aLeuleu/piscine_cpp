#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private :
		std::string _name;
		DiamondTrap(void);
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
		virtual ~DiamondTrap(void);

		DiamondTrap &operator=(const DiamondTrap &other);
};

#endif