#pragma once
#include <iostream>
#include <string>

class Brain {
	public:
		Brain();
		~Brain();
		Brain(const Brain& right);
		Brain&          operator=(const Brain& right);
		void            setIdea(int index, std::string idea);
		std::string     getIdea(int index) const;
		void            printIdeas() const;
	private:
		std::string _ideas[100];
};