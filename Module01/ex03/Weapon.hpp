#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

using namespace std;

class Weapon {
private:
	string type;
public:
	string& getType();
	void 	setType(string type);
	Weapon(string type);
};

#endif //WEAPON_HPP