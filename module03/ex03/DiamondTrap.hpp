#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
private:
	string _name;
public:
	DiamondTrap();
	DiamondTrap(string name);
	DiamondTrap(DiamondTrap const &copy);
	DiamondTrap & operator = (DiamondTrap const &obj);
	~DiamondTrap();
	void whoAmI();
};



#endif