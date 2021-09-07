#include "Zombie.hpp"

Zombie* zombieHorde( int N, string name )
{
	Zombie *zombies = new Zombie[N];
	// 
	string zombieNames[5] = {
		"Ada Lovelace",
	 	"Fiodor Dostoïevski",
	  	"Al-Khawarizmi",
	  	"Robert Kiyosaki",
	   	"Elon Musk"
	};
	// 
	for (int i = 0; i < N; i++)
	{	
		name = zombieNames[i];
		zombies[i].setName(name);
		zombies[i].announce();
	}
	return (zombies);
}