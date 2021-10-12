#include "Cure.hpp"

Cure::Cure()
{
	cout << "Cure constructor called" << endl;
}

Cure::Cure(Cure const &copy)
{
	cout << "Cure copy Ctor called" << endl;
}

Cure::~Cure()
{
	cout << "Cure desstructor called" << endl;
}

AMateria *Cure::clone() const
{
	// return 0;
	return (new Cure(*this));
}
void Cure::use(ICharacter &target)
{
	cout << "* heals " << target.getName() << "'s wounds *" << endl;
}
