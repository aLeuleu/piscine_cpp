#pragma once
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
public :
	Dog();
	~Dog();
	Dog(const Dog& right);
	Dog& operator=(const Dog& dog);
	void	makeSound() const;
};