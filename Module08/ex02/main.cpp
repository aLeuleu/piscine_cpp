#include <list>
#include <iostream>
#include "MutantStack.hpp"
#include <stack>
int main()
{
	MutantStack<int> mutantA;

	std::cout << "Stack empty :" << mutantA.empty() << std::endl;
	std::cout << "size :" << mutantA.size() << std::endl;

	const int a = 1;
	mutantA.push(a);
	std::cout << "Stack empty :" << mutantA.empty() << std::endl;

	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;

	mutantA.push(b);
	mutantA.push(c);
	mutantA.push(d);
	mutantA.push(e);

	std::cout << "size :" << mutantA.size() << std::endl;


	for (int i = 0; i < 7; i++)
	{
		try{
		std::cout << mutantA.top()<< " - ";
		std::cout << mutantA.pop() << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "size :" << mutantA.size() << std::endl;
	std::cout << "Stack empty :" << mutantA.empty() << std::endl;

	b = 20;
	c = 30;
	d = 40;
	e = 50;

	mutantA.push(a);
	mutantA.push(b);
	b = 21;
	mutantA.push(c);
	mutantA.push(d);
	mutantA.push(e);

	for (int i = 0; i < 7; i++)
	{
		try{
			std::cout << mutantA.top()<< " - ";
			std::cout << mutantA.pop() << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}

	mutantA.push(a);
	mutantA.push(b);
	mutantA.push(c);
	mutantA.push(d);
	mutantA.push(e);

	std::cout << std::endl << "final test" << std::endl;
	MutantStack<int>::Iterator it = mutantA.begin();
	MutantStack<int>::Iterator ite = mutantA.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mutantA);

}
