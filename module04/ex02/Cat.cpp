#include "Cat.hpp"

Cat::Cat()
{
	cout << "Cat default Ctor called" << endl;
	this->catBrain = new Brain();
	this->_type = "Cat";
}

Cat::Cat(Cat const &copy)
{
	cout << "Cat copy Ctor called" << endl;
	*this = copy;
}

Cat::~Cat()
{
	cout << "Cat ~Ctor called" << endl;
	delete catBrain;
}

Cat & Cat::operator = (Cat const &obj)
{
	cout << "Cat assignment operator called" << endl;
	if (this != &obj)
	{
		this->_type = obj._type;
		this->catBrain = new Brain(*obj.catBrain);
	}
	return *this;
}

void Cat::makeSound( void ) const
{
	cout << "Cat make sound" << endl;
}