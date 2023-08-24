#ifndef CPP_ZOMBIE_HPP
	#define CPP_ZOMBIE_HPP
	#include <string>

	class Zombie {
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string &name);
		void announce();
		~Zombie();
	};

	Zombie* newZombie(std::string name);
	void randomChump(std::string name);

#endif //CPP_ZOMBIE_HPP