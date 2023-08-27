#include <iostream>
#include "ScavTrap.hpp"

int    main(void)
{
	std::cout << "1) - Creation of a ScavTrap Naruto" << std::endl;
	{
		ScavTrap Naruto("Naruto");
	}

	std::cout << "2) - Creation of a ScavTrap Sasuke, Sasuke try to run in gate keeping mode" << std::endl;
	{
		ScavTrap Sasuke("Sasuke");
		Sasuke.guardGate();
	}
	std::cout << std::endl;

	std::cout << "3) - Creation of a ScavTrap Kakashi and ClapTrap Gaara" << std::endl;
	std::cout << "3) - Kakashi attack, Gaara attack : " << std::endl;
	{
		ScavTrap Kakashi("Kakashi");
		ClapTrap Gaara("Gaara");
		Kakashi.attack("Gaara");
		Gaara.attack("Kakashi");
	}

	return (0);
}
