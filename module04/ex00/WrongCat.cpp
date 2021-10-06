#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	cout << "WrongCat default Ctor called" << endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &copy)
{
	cout << "WrongCat copy Ctor called" << endl;
	*this = copy;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat ~Ctor Ctor called" << endl;
}

WrongCat & WrongCat::operator = (WrongCat const &obj)
{
	cout << "WrongCat assignment operator called" << endl;
	this->_type = obj._type;
	return *this;
}

void WrongCat::makeSound( void ) const
{
	cout << "WrongCat make sound" << endl;
}