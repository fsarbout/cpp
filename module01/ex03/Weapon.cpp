#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(string type)
{
	setType(type);
}

Weapon::~Weapon() {}

const string &Weapon::getType(void)
{
	return _type;
}

void Weapon::setType(string type)
{
	_type = type;
}