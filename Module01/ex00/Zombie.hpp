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
		void announce();
		~Zombie();
	};

	Zombie* newZombie(string name);
	void randomChump(string name);

#endif //CPP_ZOMBIE_HPP