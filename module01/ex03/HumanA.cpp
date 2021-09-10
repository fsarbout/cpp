#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon weapon_A)
{
	_weapon_A = weapon_A;
	_name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	cout << _name << " attacks with his weapon " << _weapon_A.getType() << endl;
}

void HumanA::setWeapon(Weapon wpn)
{
	_weapon_A = wpn;
}