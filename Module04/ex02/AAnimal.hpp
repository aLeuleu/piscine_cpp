#pragma once
#include <string>
#include <iostream>

class AAnimal
{
protected :
	std::string		_type;
public :
	AAnimal();
	virtual ~AAnimal();
	AAnimal(const AAnimal& right);
	AAnimal& 		operator=(const AAnimal& animal);
	virtual void	makeSound() const = 0;
	std::string		getType() const;
};