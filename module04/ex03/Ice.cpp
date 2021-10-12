#include "Ice.hpp"

Ice::Ice()
{
	cout << "Ice Constructor" << endl;
}

Ice::~Ice()
{
}

Amateria* Ice::clone() const
{
	return (new Ice(*this));
}