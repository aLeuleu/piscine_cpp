#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &right) : Animal(right){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = right;
}

Cat &Cat::operator=(const Cat &cat) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this == &cat)
		return *this;
	_type = cat._type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Miaou miaou !" << std::endl;
}

