#include "Zombie.hpp"

int main()
{
	randomChump(" Zombie_1 ");
	
	Zombie *zombieHeap;
	zombieHeap = newZombie(" Zombie_2 ");
	delete zombieHeap;
}