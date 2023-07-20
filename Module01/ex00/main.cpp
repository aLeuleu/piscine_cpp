#include "Zombie.hpp"

int 	main(void){
	Zombie *zombie_brian = newZombie("Brian");
	zombie_brian->announce();
	randomChump("Todd");
	delete zombie_brian;
	return (0);
}