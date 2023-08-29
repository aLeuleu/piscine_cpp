#include "Base.hpp"
#include <iostream>
#include <time.h>

Base * generate(void){

	int i = rand() %3;
	std::cout << (char)('A' + i);

	switch (i)
	{
		case 0: return (Base *) new A; break;
		case 1: return (Base *) new B; break;
		case 2: return (Base *) new C; break;
	}
	return nullptr;
}

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a != NULL)
		std::cout << "A";
	if (b != NULL)
		std::cout << "B";
	if (c != NULL)
		std::cout << "C";
	std::cout << " ";
}

void identify(Base &p)
{
	try{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A";
	} catch (...){ }

	try{
		B &a = dynamic_cast<B &>(p);
		std::cout << "B";
	} catch (...){ }

	try{
		C &a = dynamic_cast<C &>(p);
		std::cout << "C";
	} catch (...){ }
	std::cout << " ";

}


int main(void)
{
	srand(time(NULL));

	for (int i = 0; i < 20; i++){
		identify(generate());
	}

	std::cout << std::endl;

	for (int i = 0; i < 20; i++){
		identify(*generate());
	}

	return 0;
}