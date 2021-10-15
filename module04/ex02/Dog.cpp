#include "Dog.hpp"

Dog::Dog()
{
	cout << "Dog default Ctor called" << endl;
	this->brain = new Brain();
	this->_type = "Dog";
}

Dog::Dog(Dog const &copy)
{
	cout << "Dog copy Ctor called" << endl;
	*this = copy;
}

Dog::~Dog()
{
	cout << "Dog ~Ctor called" << endl;
	delete brain;
}

Dog &Dog::operator=(Dog const &obj)
{
	cout << "Dog assignment operator called" << endl;
	if (this != &obj)
	{
		this->_type = obj._type;
		this->brain = new Brain(*obj.brain);
	}
	return *this;
}

void Dog::makeSound(void) const
{
	cout << "Dog make sound" << endl;
}