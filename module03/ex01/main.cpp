#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavTrap1;
	scavTrap1 = ScavTrap("me");
	ScavTrap scavTrap2 = ScavTrap("you");
	scavTrap1.attack("everybody");
	scavTrap2.takeDamage(130);
	scavTrap2.beRepaired(7);
	scavTrap2.guardGate();
}