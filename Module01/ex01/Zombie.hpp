#ifndef CPP_ZOMBIE_HPP
	#define CPP_ZOMBIE_HPP
	#include <string>
	using namespace std;

	class Zombie {
	private:
		string name;
	public:
		Zombie();
		Zombie(string &name);
		void setName(string &name);
		void announce();
		~Zombie();
	};

	Zombie* newZombie(string name);
	Zombie* zombieHorde( int N, string name );

#endif //CPP_ZOMBIE_HPP