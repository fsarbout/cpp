#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(string name);
	ScavTrap(ScavTrap const &copy);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &obj);
	void guardGate();
	void attack(string const &target);
};

#endif