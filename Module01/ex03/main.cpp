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

//Use Pointers When:
//
//  You need nullable or reassignable variables.
//  You're working with dynamic memory allocation (new and delete).
//  Polymorphism is involved, such as dealing with base and derived classes.
//  You need to work with arrays.

//Use References When:
//
//You want a non-null, unchangeable reference to an object.
//When passing objects to functions efficiently.
//When overloading operators for custom types.
