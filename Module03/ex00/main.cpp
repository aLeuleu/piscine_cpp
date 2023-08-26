#include <iostream>
#include "ClapTrap.hpp"

int    main(void)
{
	std::cout << "1)" << std::endl;
	ClapTrap    clap = ClapTrap("Clap");

	std::cout << "2)" << std::endl;
	ClapTrap    trap = ClapTrap("Trap");

	std::cout << "3)" << std::endl;
	clap.attack("Trap");
	trap.beRepaired(2);
	trap.takeDamage(12);

	std::cout << "4)" << std::endl;
	// Can't attack because he is dead
	trap.attack("Clap");
	clap.beRepaired(4294967295);
	clap.takeDamage(100);
	clap.takeDamage(4294967295);
	clap = ClapTrap("Clap");
	for (int i = 0; i < 100; i++)
		clap.attack("Bidule");
	trap = ClapTrap(clap);
	trap.takeDamage(100);
	clap = trap;
	trap.takeDamage(100);
	return (0);
}
