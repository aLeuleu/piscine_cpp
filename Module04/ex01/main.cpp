#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{

	Animal *animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl << std::endl;
	}
	std::cout << "---------------------" << std::endl;

	((Dog*)animals[0])->getBrain()->setIdea(0, "Chew bones");
	((Cat*)animals[1])->getBrain()->setIdea(0, "Kill all dogs");
	((Dog*)animals[2])->getBrain()->setIdea(0, "Play outside");
	((Cat*)animals[3])->getBrain()->setIdea(0, "Kill all humans");
	((Dog*)animals[4])->getBrain()->setIdea(0, "Eat flowers");

	for (int i = 0; i < 10; i++)
		delete animals[i];





//N’oubliez pas de vérifier que vous n’avez pas de fuites de mémoire.

	return 0;
}