#include <list>
#include <iostream>
#include "MutantStack.hpp"
#include <stack>


int main()
{
	MutantStack<int> mutantA;

	std::cout << "Stack empty (expected true ):" << mutantA.empty() << std::endl;
	std::cout << "size :" << mutantA.size() << std::endl;

	const int a = 1;
	mutantA.push(a);
	std::cout << "Stack empty (expected false):" << mutantA.empty() << std::endl;

	int b = 2;
	int c = 3;
	int d = 4;
	int e = 5;

	mutantA.push(b);
	mutantA.push(c);
	mutantA.push(d);
	mutantA.push(e);

	std::cout << "size :" << mutantA.size() << std::endl;


	for (int i = 0; i < 5; i++)
	{
		std::cout << mutantA.top( )<< std::endl;
		mutantA.pop();
	}

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

	std::cout << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << mutantA.top( )<< std::endl;
		mutantA.pop();
	}

	mutantA.push(a);
	mutantA.push(b);
	mutantA.push(c);
	mutantA.push(d);
	mutantA.push(e);

	std::cout << std::endl << "iterator test" << std::endl;
	MutantStack<int>::iterator it = mutantA.begin();
	MutantStack<int>::iterator ite = mutantA.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << std::endl << "reverse iterator test" << std::endl;
	MutantStack<int>::reverse_iterator rit = mutantA.rbegin();
	MutantStack<int>::reverse_iterator rite = mutantA.rend();
	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::stack<int> s(mutantA);

}
