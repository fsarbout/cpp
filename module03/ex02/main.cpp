#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap fragTrap1;
	fragTrap1 = FragTrap("me");
	FragTrap fragTrap2 = FragTrap("you");
	fragTrap1.attack("everybody");
	fragTrap2.takeDamage(130);
	fragTrap2.beRepaired(7);
	fragTrap2.highFivesGuys();
}