#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "1) Creation of an animal, a dog, and a cat :" << std::endl;
	Animal* animal = new Animal();
	std::cout << std::endl;
	Animal* dog = new Dog();
	std::cout << std::endl;
	Animal* cat = new Cat();
	std::cout << std::endl << std::endl;


	std::cout << "2) Calling \"makeSound()\" on each object (animal, dog, cat) : " << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << std::endl << std::endl;


	std::cout << "3) Getting all animal types (animal, dog, cat)" << std::endl;
	std::cout << animal->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << std::endl << std::endl;


	std::cout << "4) Destruction of animal, dog, cat" << std::endl;
	delete animal;
	std::cout << std::endl;
	delete dog;
	std::cout << std::endl;
	delete cat;
	std::cout << std::endl << std::endl;


	std::cout << "5) Creation of WrongAnimal and WrontCat" << std::endl;
	WrongAnimal* wrongAnimal = new WrongAnimal();
	std::cout << std::endl;
	WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl << std::endl;


	std::cout << "6) Calling \"makeSound()\" on each object (wrongAnimal, wrongCat) : " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	std::cout << std::endl << std::endl;


	std::cout << "7) Destruction wrongAnimal and wrongCat" << std::endl;
	delete wrongAnimal;
	std::cout << std::endl;
	delete wrongCat;

	return 0;
}