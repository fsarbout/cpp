#include "Zombie.hpp"

Zombie::Zombie(string name)
{
	this->name = name;
	announce();
}

Zombie::~Zombie()
{
	cout << "zombie " << name << " dies" << endl;
}

void	Zombie::announce(void)
{
	cout << "<" << name  << ">" << " BraiiiiiiinnnzzzZ..." << endl;
}