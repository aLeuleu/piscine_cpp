#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &right) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = right;
}

Brain &Brain::operator=(const Brain &brain) {
	std::cout << "Brain assignation operator called" << std::endl;
	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
	return *this;
}

void Brain::setIdea(int index, std::string idea) {
	_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
	return _ideas[index];
}

void Brain::printIdeas() const {
	for (int i = 0; i < 100; i++)
		std::cout << _ideas[i] << std::endl;
}


