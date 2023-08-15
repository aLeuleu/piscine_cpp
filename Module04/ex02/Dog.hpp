#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal
{
public :
	Dog();
	~Dog();
	Dog(const Dog& right);
	Dog& operator=(const Dog& dog);
	void	makeSound() const;
	Brain *getBrain() const;
private:
	Brain *_brain;
};