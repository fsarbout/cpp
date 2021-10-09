#include "Animal.hpp"

Animal::Animal()
{
	cout << "Animal default Ctor called" << endl;
}

Animal::Animal(Animal const &copy)
{
	cout << "Animal copy Ctor called" << endl;
	*this = copy;
}

Animal::~Animal()
{
	cout << "Animal ~Ctor called" << endl;
}

Animal & Animal::operator = (Animal const &obj)
{
	cout << "Animal assignment operator called" << endl;
	this->_type = obj._type;
	return *this;
}

string Animal::getType( void ) const
{
	return _type;
}