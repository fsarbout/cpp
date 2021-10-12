#include "Character.hpp"

Character::Character()
{
	cout << "Character constructor called" << endl;
}

Character::~Character()
{
	cout << "Character destructor called" << endl;
}

Character Character::operator = (Character const &assign)
{
	cout << "Character operator = called" << endl;
	return *this;
}