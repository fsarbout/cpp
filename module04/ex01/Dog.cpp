#include "Dog.hpp"

Dog::Dog()
{
	cout << "Dog default Ctor called" << endl;
	this->dogBrain = new Brain();
	this->_type = "Dog";
}

Dog::Dog(Dog const &copy)
{
	cout << "Dog copy Ctor called" << endl;
	*this = copy;
}

Dog::~Dog()
{
	cout << "Dog ~Ctor Ctor called" << endl;
	delete dogBrain;
}


Dog & Dog::operator = (Dog const &obj)
{
	cout << "Dog assignment operator called" << endl;
	this->_type = obj._type;
	return *this;
}

void Dog::makeSound( void ) const
{
	cout << "Dog make sound" << endl;
}