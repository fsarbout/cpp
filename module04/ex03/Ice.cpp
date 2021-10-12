#include "Ice.hpp"

Ice::Ice()
{
	cout << "Ice Constructor" << endl;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

// Ice Ice::operator = (const Ice &assign)
// {
// 	if (this != &assign)
// 		this->_type = assign.getType();
// 	return (*this);
// }

void AMateria::use(ICharacter &target)
{
	cout << "*shoots an ice bolt at: " << target.getName() << "*" << endl;
}
