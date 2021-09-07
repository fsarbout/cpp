#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	cout << "<" << _name << ">" << " dies" << endl;
}

void	Zombie::announce(void)
{
	cout << "<" << _name  << ">" << " born" << endl;
}

void	Zombie::setName(string name)
{
	_name = name;
}