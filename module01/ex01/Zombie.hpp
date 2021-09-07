#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define endl std::endl
#define cout std::cout
#define string std::string

class Zombie
{
private:
	string _name;
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	setName(string name);

};

Zombie* zombieHorde( int N, string name );

#endif