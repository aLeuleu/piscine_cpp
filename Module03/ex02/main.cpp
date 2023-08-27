#include <iostream>
#include "FragTrap.hpp"

int    main(void)
{
	std::cout << "1) - Creation of a FragTrap VinDiesel" << std::endl;
	{
		FragTrap VinDiesel("VinDiesel");
	}

	std::cout << "2) - Creation of a FragTrap PaulWalker, then high fives!" << std::endl;
	{
		FragTrap PaulWalker("PaulWalker");
		PaulWalker.highFivesGuys();
	}
	std::cout << std::endl;

	std::cout << "3) - Creation of a FragTrap DominicToretto and ClapTrap BrianOConnor" << std::endl;
	std::cout << "3) - DominicToretto attack, BrianOConnor attack : " << std::endl;
	{
		FragTrap DominicToretto("DominicToretto");
		ClapTrap BrianOConnor("BrianOConnor");
		DominicToretto.attack("BrianOConnor");
		BrianOConnor.attack("DominicToretto");
	}

	return (0);
}
