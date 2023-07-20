#include "Zombie.hpp"
#include <iostream>

using namespace std;

int 	main(void){

	int N = 10;
	Zombie* horde = zombieHorde(N, "Brian");
	for (int i = 0; i < N; i++)
	{
		cout << i << endl;
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
