#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
public :
	Cat();
	~Cat();
	Cat(const Cat& right);
	Cat&    operator=(const Cat& cat);
	void    makeSound() const;
	Brain   *getBrain() const;
private:
	Brain   *_brain;
};