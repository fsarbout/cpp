#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	string _name;
	Weapon *_weapon_A;

public:
	HumanA(string name, Weapon &_weapon_A);
	~HumanA();
	void attack();
};

#endif