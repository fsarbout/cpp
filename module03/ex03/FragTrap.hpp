#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(string name);
	FragTrap(FragTrap const &copy);
	~FragTrap();
	FragTrap &operator=(FragTrap const &obj);
	void highFivesGuys(void);
	void attack(string const &target);
};

#endif

// Virtual inheritance is a C++ technique that ensures that only one copy of a base class's member
// variables are inherited by second-level derivatives (grandchild derived classes).