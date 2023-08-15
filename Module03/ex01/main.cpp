#include <iostream>
#include "ScavTrap.hpp"

int    main(void)
{
	std::cout << "1)" << std::endl;
	ScavTrap A("A");
	ScavTrap B("B");
	ScavTrap CopyA("CopyA");
	CopyA = A;
	CopyA.attack("B");
	CopyA.guardGate();
	return (0);
}
