#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	cout << "WrongAnimal default Ctor called" << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	cout << "WrongAnimal copy Ctor called" << endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal ~Ctor Ctor called" << endl;
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal const &obj)
{
	cout << "WrongAnimal assignment operator called" << endl;
	this->_type = obj._type;
	return *this;
}

string WrongAnimal::getType( void )
{
	return _type;
}

void WrongAnimal::makeSound( void ) const
{
	cout << "WrongAnimal make sound" << endl;
}