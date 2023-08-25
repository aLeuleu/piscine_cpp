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

	//copys shouldnt be shallow
	std::cout << std::endl;
	std::cout << "(Cat *)animals[1] idea : " << 	((Cat*)animals[1])->getBrain()->getIdea(0)  << std::endl; ;
	std::cout << std::endl;
	Cat *copy_cat = new Cat();
	copy_cat = (Cat *)animals[1];
	std::cout << std::endl;
	std::cout << "copy_cat = (Cat *)animals[1];" << std::endl;
	std::cout << "copy_cat idea :"  <<copy_cat->getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < 10; i++){
		delete animals[i];
		std::cout << std::endl;
	}




	return 0;
}