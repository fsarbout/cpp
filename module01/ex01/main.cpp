#include "Zombie.hpp"

int main()
{
	int N = 5;
	string name = "";
	Zombie *zombies ;
	zombies  = zombieHorde(N, name);
	cout << "**************************************\n";
	delete [] zombies;
}