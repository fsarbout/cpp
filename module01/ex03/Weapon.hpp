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
	Weapon();
	Weapon(string type);
	~Weapon();
	const string &getType(void);
	void setType(string type);
};

#endif

// references are inherently const >> we can't change what they refer to 
// reference to const >> we can't change the value of object they refer to