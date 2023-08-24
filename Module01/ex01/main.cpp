#include "Zombie.hpp"
#include <iostream>

int 	main(void){

	int N = 10;
	Zombie* horde = zombieHorde(N, "Brian");
	for (int i = 0; i < N; i++)
	{
		std::cout << i << std::endl;
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
