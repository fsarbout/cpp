#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain default Ctor called" << endl;
}

Brain::Brain(Brain const &copy)
{
	cout << "Brain copy Ctor called" << endl;
	*this = copy;
}

Brain::~Brain()
{
	cout << "Brain ~Ctor Ctor called" << endl;
}

Brain & Brain::operator = (Brain const &obj)
{
	cout << "Brain assignment operator called" << endl;
	// this->_type = obj._type;
	(void)obj;
	return *this;
}