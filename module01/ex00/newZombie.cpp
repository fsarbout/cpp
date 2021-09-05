#include "Zombie.hpp"

Zombie *newZombie(string name)
{
	Zombie *newZombie = new Zombie(name);
	return newZombie;
}