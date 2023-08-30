#ifndef CPP_MODULE07_EX01_ITER_HPP_
# define CPP_MODULE07_EX01_ITER_HPP_
#include <cstddef>
#include <iostream>
#include <stdlib.h>
#include <time.h>

template<typename T>
void	iter(T* array, size_t size, void (*callback)(T&))
{
	for(size_t i = 0; i < size; i++)
		callback(array[i]);
}

template<typename T>
void	iter(T* const array, size_t size, void (*callback)(const T&))
{
	for(size_t i = 0; i < size; i++)
		callback(array[i]);
}


template<typename T>
void	print(const T a){
	std::cout << std::scientific << a << std::endl;
}

template<typename T>
void	randomize(T & a){
	a = rand()%10;
}
#endif