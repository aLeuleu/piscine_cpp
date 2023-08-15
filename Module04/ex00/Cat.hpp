#pragma once
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
public :
	Cat();
	~Cat();
	Cat(const Cat& right);
	Cat& operator=(const Cat& cat);
	void	makeSound() const;
};