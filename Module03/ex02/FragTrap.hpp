#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public :
	FragTrap();
	explicit FragTrap(std::string name);
	~FragTrap();
	FragTrap(const FragTrap& right);
	FragTrap&   operator=(const FragTrap& right);
	void        highFivesGuys(void);
};