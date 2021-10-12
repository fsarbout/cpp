#include "Character.hpp"

Character::Character(string name) : _name(name)
{
	cout << "Character constructor called" << endl;
}

Character::~Character()
{
	cout << "Character destructor called" << endl;
}

string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria *m)
{
	cout << "equip character" << endl;
}
void Character::unequip(int idx)
{
	cout << "equip character" << endl;
}
void Character::use(int idx, ICharacter &target)
{
	cout << "equip character" << endl;
}
