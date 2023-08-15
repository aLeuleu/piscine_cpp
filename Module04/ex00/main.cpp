#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "1)" << std::endl;
	Animal* animal = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	std::cout << "2)" << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << "3)" << std::endl;
	std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << "4)" << std::endl;
	delete animal;
	delete dog;
	delete cat;
	std::cout << "5)" << std::endl;
	WrongAnimal* wrongAnimal = new WrongAnimal();
	WrongAnimal* wrongCat = new WrongCat();
	std::cout << "6)" << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	std::cout << "7)" << std::endl;
	delete wrongAnimal;
	delete wrongCat;

	return 0;
}