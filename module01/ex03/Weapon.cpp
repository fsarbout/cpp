#include "Weapon.hpp"

Weapon::Weapon(string type)
{
	cout << "type in weapon constructor is : " << type << '\n';
}

Weapon::~Weapon(){}


string Weapon::getType( void ) const{
	return  _type;
}

void	Weapon::setType(string type)
{
	_type = type;
}