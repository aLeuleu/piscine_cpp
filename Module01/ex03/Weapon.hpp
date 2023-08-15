#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>


class Weapon {
private:
	std::string type;
public:
	std::string& getType();
	void 	setType(std::string type);
	Weapon(std::string type);
};

#endif //WEAPON_HPP