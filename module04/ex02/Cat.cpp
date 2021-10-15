#include "Cat.hpp"

Cat::Cat()
{
	cout << "Cat default Ctor called" << endl;
	this->brain = new Brain();
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
	delete brain;
}

Cat &Cat::operator=(Cat const &obj)
{
	cout << "Cat assignment operator called" << endl;
	if (this != &obj)
	{
		this->_type = obj._type;
		this->brain = new Brain(*obj.brain);
	}
	return *this;
}

void Cat::makeSound(void) const
{
	cout << "Cat make sound" << endl;
}