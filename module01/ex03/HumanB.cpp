#include "HumanB.hpp"

HumanB::HumanB(string name) : _name(name)
{
}

HumanB::~HumanB() {}

void HumanB::attack()
{
	cout << _name << " attacks with his weapon " << _weapon_B.getType() << endl;
}

void HumanB::setWeapon(Weapon wpn)
{
	_weapon_B = wpn;
}
