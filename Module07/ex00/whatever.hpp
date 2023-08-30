#ifndef WHATEVER_HPPP
# define WHATEVER_HPPP

#include <iostream>
template<typename T>
void	swap(T &a, T &b){
	std::cout << "swapping .." << std::endl;
	T tmp = b;
	b = a;
	a = tmp;
}

template<typename T>
T const &	min(T const & a, T const & b){
	return ( a <= b ? a : b);
}

template<typename T>
T const &	max(T const & a, T const & b){
	return ( a >= b ? a : b);
}

template<typename T>
void	print(T const & a, T const & b){
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

#endif
