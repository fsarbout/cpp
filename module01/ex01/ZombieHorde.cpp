#include "Zombie.hpp"

Zombie *newZombie(string name)
{
	Zombie *newZombie = new Zombie(name);
	return newZombie;
}

Zombie* zombieHorde( int N, string name )
{
	Zombie *zombieHorde;
	for (int i = 0; i < N; i++)
		zombieHorde = newZombie(name);
	return zombieHorde;
}