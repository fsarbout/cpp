#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

class Weapon
{
private:
	string _type;

public:
	Weapon(string type);
	~Weapon();
	string  getType(void) const ;
	void setType(string type);
};

#endif