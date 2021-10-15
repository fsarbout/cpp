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
	 if (this != &obj)
        for(int i = 0 ; i < 100 ; i++)
            this->ideas[i] = obj.ideas[i];
    return *this;
}

void Brain::addIdea(int i, string idea)
{
    this->ideas[i] = idea;
}

string Brain::getIdea(int i)
{
    return this->ideas[i];
}