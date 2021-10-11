#include "Ice.hpp"

Ice::Ice()
{
	cout << "Ice Created" << endl;
}

Ice::Ice(Ice const &copy)
{
	cout << "Ice Created" << endl;
	*this = copy;
}

Ice Ice::operator = (Ice const &copy)
{
	if (this != &copy)
		this->_type = copy.getType();
	return *this;
}


Ice::~Ice()
{
	cout << "Ice Destroyed" << endl;
}

AMateria*	AMateria::clone() const
{
    Ice *clone = new Ice;
    return clone;
}