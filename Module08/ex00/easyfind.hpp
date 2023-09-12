#include <iostream>

	class NotFound : public std::exception {
		const char* what() const throw(){
			return "Not found";
		}
};

#include <algorithm>
template<typename T>
typename T::iterator	easyfind(T& container, int value)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return (it);
	else
		throw NotFound();
}