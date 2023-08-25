#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
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
#endif