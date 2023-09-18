#include "easyfind.hpp"
#include <iostream>
#include <vector>

#include <iostream>

int main() {
	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	int target = 25;
	try{
		std::vector<int>::iterator result = easyfind(vec, target);
		std::cout << "La valeur " << target << " a été trouvée à la position " << std::distance(vec.begin(), result) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "La valeur " << target << " n'a pas été trouvée dans le conteneur." << std::endl;
		std::cout << e.what() << std::endl;
	}

	target = 5;
	try{
		std::vector<int>::iterator result = easyfind(vec, target);
		std::cout << "La valeur " << target << " a été trouvée à la position " << std::distance(vec.begin(), result) << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "La valeur " << target << " n'a pas été trouvée dans le conteneur." << std::endl;
		std::cout << e.what() << std::endl;
	}

	return 0;
}