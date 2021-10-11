#include "Cure.hpp"


Cure::Cure()
{
	cout << "Cure constructor called" << endl;
}

Cure::~Cure()
{
	cout << "Cure desstructor called" << endl;
}

string const & AMateria::getType() const //Returns the materia type
{
	return AMateria::_type;
}


AMateria*	AMateria::clone() const
{
    Cure *clone = new Cure;
    return clone;
}