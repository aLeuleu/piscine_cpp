#include "Span.hpp"

Span::Span(void) {}

Span::Span(const Span &other) { *this = other; }

Span::~Span(void) {}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		this->_data = other._data;
		this->_capacity = other._capacity;
	}
	return (*this);
}

Span::Span(unsigned int n) : _capacity(n)
{

}

void Span::addNumber(int value) {
	if (_data.size() > _capacity)
		throw TooMuchElement();
	_data.push_back(value);
}
int Span::shortestSpan() {

	if (_data.size() < 2)
		throw std::exception();

	std::sort(_data.begin(), _data.end());
	int shortestSpan = abs(_data[0] - _data[1]);
	for (std::vector<int>::iterator it = _data.begin(); it < _data.end() - 1; it++) {
		shortestSpan = abs(*(it +1) - *it) < shortestSpan ? abs(*(it +1) - *it) : shortestSpan;
	}
	return shortestSpan;
}



void Span::iter(void (*callback)(int)) {
	for (std::vector<int>::iterator it = _data.begin(); it < _data.end(); it++) {
		callback((*it));
	}
}

int Span::longestSpan() {
	if (_data.size() < 2)
		throw std::exception();

	std::sort(_data.begin(), _data.end());
	return (*(_data.end() - 1) - *(_data.begin()));
}

int Span::longestSpan2() {
	if (_data.size() < 2)
		throw std::exception();

	int64_t min = *std::min_element(_data.begin(), _data.end());
	int64_t max = *std::max_element(_data.begin(), _data.end());
	return (max - min);
}

void Span::randRange(int range) {
	try{
		for (int i = 0; i < range; i ++)
			addNumber(rand()%100);
	}
	catch (std::exception &e){
		throw e;
	}
}
void Span::displayData() {
	for (std::vector<int>::iterator it = _data.begin(); it < _data.end() ; it++) {
		std::cout << *it << "-";
	}
}

const char *Span::TooMuchElement::what() const throw() {
	return ("Too much element");
}
const char *Span::NotEnoughElement::what() const throw() {
	return ("Not enough element");
}
