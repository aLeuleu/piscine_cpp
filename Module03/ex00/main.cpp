#include <iostream>
#include "ClapTrap.hpp"

int    main(void)
{
	std::cout << "1) - Creation of \"Goku\"" << std::endl;
	ClapTrap    goku = ClapTrap("Goku");

	//show stats of goku
	std::cout << "Goku's stats:" << std::endl;
	std::cout << "HP: " << goku.getHitPoints() << std::endl;
	std::cout << "EP: " << goku.getEnergyPoints() << std::endl;
	std::cout << "AD: " << goku.getAttackDamage() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "2) - Creation of the evil \"Freezer\"" << std::endl;
	ClapTrap    freezer = ClapTrap("Freezer");

	//show stats of freezer
	std::cout << "Freezer's stats:" << std::endl;
	std::cout << "HP: " << freezer.getHitPoints() << std::endl;
	std::cout << "EP: " << freezer.getEnergyPoints() << std::endl;
	std::cout << "AD: " << freezer.getAttackDamage() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "3) - Goku attack Freezer (but he does not have any attack damage points...):" << std::endl;
	goku.attack("Freezer");
	freezer.takeDamage(goku.getAttackDamage());
	std::cout << "Freezer's stats:" << std::endl;
	std::cout << "HP: " << freezer.getHitPoints() << std::endl;
	std::cout << "EP: " << freezer.getEnergyPoints() << std::endl;
	std::cout << "AD: " << freezer.getAttackDamage() << std::endl;

	std::cout << "We manually give everone attack damage points ..." << std::endl;
	goku.setAttackDamage(10);
	freezer.setAttackDamage(10);

	std::cout << "Goku's stats:" << std::endl;
	std::cout << "HP: " << goku.getHitPoints() << std::endl;
	std::cout << "EP: " << goku.getEnergyPoints() << std::endl;
	std::cout << "AD: " << goku.getAttackDamage() << std::endl;
	std::cout << "Freezer's stats:" << std::endl;
	std::cout << "HP: " << freezer.getHitPoints() << std::endl;
	std::cout << "EP: " << freezer.getEnergyPoints() << std::endl;
	std::cout << "AD: " << freezer.getAttackDamage() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "4) Freezer attack Goku, then Goku is repaired with max uint : " << std::endl;
	//
	freezer.attack("Goku");
	goku.takeDamage(freezer.getAttackDamage());
	goku.beRepaired(4294967295);

	std::cout << "Goku's stats:" << std::endl;
	std::cout << "HP: " << goku.getHitPoints() << std::endl;
	std::cout << "EP: " << goku.getEnergyPoints() << std::endl;
	std::cout << "AD: " << goku.getAttackDamage() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "5) Goku attack Freezer with max uint, then Freezer try to attack but he is dead :  " << std::endl;

	goku.setAttackDamage(4294967295);
	goku.attack("Freezer");
	freezer.takeDamage(goku.getAttackDamage());
	std::cout << "Freezer's stats:" << std::endl;
	std::cout << "HP: " << freezer.getHitPoints() << std::endl;
	std::cout << "EP: " << freezer.getEnergyPoints() << std::endl;
	std::cout << "AD: " << freezer.getAttackDamage() << std::endl;
	for (int i = 0; i < 5; i++)
		freezer.attack("Goku");

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "6) Goku is set to be a clone of freezer (they will share the same stats) : " << std::endl;
	goku = ClapTrap(freezer);

	std::cout << "Goku's stats:" << std::endl;
	std::cout << "HP: " << goku.getHitPoints() << std::endl;
	std::cout << "EP: " << goku.getEnergyPoints() << std::endl;
	std::cout << "AD: " << goku.getAttackDamage() << std::endl;
	return (0);
}
