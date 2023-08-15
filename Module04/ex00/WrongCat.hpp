#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public :
	WrongCat();
	~WrongCat();
	WrongCat( const WrongCat& right);
	WrongCat& operator=(const WrongCat& wrongCat);
	void	makeSound() const;
};