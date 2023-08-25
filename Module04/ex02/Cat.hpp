#ifndef CAT_HPP
#define CAT_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal
{
public :
	Cat();
	~Cat();
	Cat(const Cat& right);
	Cat& operator=(const Cat& cat);
	void	makeSound() const;
	Brain *getBrain() const;
private:
	Brain *_brain;
};
#endif