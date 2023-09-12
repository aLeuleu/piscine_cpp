#ifndef CPP_MODULE08_EX01_SPAN_HPP_
# define CPP_MODULE08_EX01_SPAN_HPP_

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <stdlib.h>

class Span {
	public:
		Span(unsigned int n);
		Span(const Span &other);
		virtual ~Span();
		Span &operator=(const Span &other);
		void addNumber(int value);
		int shortestSpan();
		int longestSpan();
		int longestSpan2();
		void randRange(int range);
		void	iter(void (*callback)(int));
		class TooMuchElement : public std::exception{
				const char* what() const throw();
		};
		class NotEnoughElement : public std::exception{
				const char* what() const throw();
		};
		Span();
		void displayData();
	private:
		unsigned int _capacity;
		std::vector<int> _data;
};



#endif