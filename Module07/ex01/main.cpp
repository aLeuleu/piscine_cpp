#include "iter.hpp"
#include <time.h>
int main()
{
	srand(time(NULL));
	int arrayA[10];
	float arrayB[10];
	const int arrayC[3] = {1, 2, 3};

	iter(arrayA, 10, randomize);
	iter(arrayA, 10, print);

	std::cout << std::endl;

	iter(arrayB, 10, randomize);
	iter(arrayB, 10, print);

	std::cout << std::endl;

	iter(arrayC, 3, print);


	return 0;
}