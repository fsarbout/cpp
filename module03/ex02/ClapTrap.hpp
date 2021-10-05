#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>



#define cout std::cout
#define endl std::endl
#define string std::string

class ClapTrap
{
protected:
	int 	_hitpoints;
	int 	_energyPoints;
	int 	_attackDamage;
	string 	_name;

public:
	ClapTrap();
	ClapTrap(string name);
	ClapTrap(ClapTrap const &copy);
	~ClapTrap();

	ClapTrap & operator = (ClapTrap const &assign);

	void attak(string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif