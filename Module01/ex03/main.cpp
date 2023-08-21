#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		bob.Weapon.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		jim.Weapon.setType("some other type of club");
		jim.attack();
	}

	return 0;
}

//In which case do you think it would be best to use a pointer to
//Weapon? And a reference to Weapon? Why?
//Answer:
// It would be best to use a pointer to Weapon when you want to
//change the Weapon object that the HumanA or HumanB object is using.

//It would be best to use a reference to Weapon when you want to
//change the Weapon object that the HumanA or HumanB object is using
//and you don't want to have to worry about the Weapon object being
//NULL.

