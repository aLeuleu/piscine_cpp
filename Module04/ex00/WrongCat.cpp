#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &right) : WrongAnimal(right){
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = right;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this == &wrongCat)
		return *this;
	_type = wrongCat._type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat makeSound called" << std::endl;
}

