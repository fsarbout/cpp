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

Amateria* Cure::clone() const
{
	return (new Cure(*this));
}