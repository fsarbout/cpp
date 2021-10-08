#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(string name);
	FragTrap(FragTrap const &copy);
	~FragTrap();
	FragTrap & operator = (FragTrap const &obj);
	void highFivesGuys(void);
	void attack(string const &target);
};



#endif