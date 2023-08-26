#include <iostream>
#include "FragTrap.hpp"

int    main(void)
{
	std::cout << "1)" << std::endl;
	FragTrap A("A");
	FragTrap B("B");
	FragTrap CopyA("CopyA");
	CopyA = A;
	CopyA.attack("B");

	std::cout << "2)" << std::endl;
	A.highFivesGuys();
	return (0);
}
