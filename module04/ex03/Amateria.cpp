#include "AMateria.hpp"

AMateria::AMateria()
{
	// cout << "AMateria Created" << endl;
}

// AMateria::AMateria(AMateria const &copy)
// {
// 	// cout << " AMateria copy constructor called" << endl;
// }


AMateria::~AMateria()
{
	// cout << "AMateria Destroyed" << endl;
}

// AMateria &AMateria::operator=(AMateria const &copy)
// {
// 	// cout << "AMateria assignement operator called" << endl;
// 	if (this != &copy)
// 		this->_type = copy.getType();
// 	return *this;
// }

// void AMateria::use(ICharacter &target)
// {
// 	cout << "AMateria use called" << target.getName() << endl;
// }