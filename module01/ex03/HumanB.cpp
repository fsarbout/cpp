#include "HumanB.hpp"


HumanB::HumanB(string name)
{
	cout << name;
	// _weapon_B = Weapon("soething");
	// _weapon_B = Weapon("name");
	// cout << name << "\n";
}

HumanB::~HumanB(){}

void	HumanB::attack()
{
	cout << _name << " attacks with his weapon " << "idk" << endl;
}

void	HumanB::setWeapon(Weapon wpn)
{
	_weapon_B = wpn;
}
