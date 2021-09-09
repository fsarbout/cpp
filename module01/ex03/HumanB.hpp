#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"


class HumanB
{
private:
	string _name;
	Weapon _weapon_B();
public:
	HumanB(string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon wpn);
};

#endif