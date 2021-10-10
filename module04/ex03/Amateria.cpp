#include "Amateria.hpp"

AMateria::AMateria()
{
	cout << "AMateria Created" << endl;
}

AMateria::AMateria(AMateria const &copy)
{
	cout << " AMateria copy constructor called" << endl;
}


AMateria::~AMateria()
{
	cout << "AMateria Destroyed" << endl;
}