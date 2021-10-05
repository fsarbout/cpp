#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap obj1;
	ScavTrap obj2("ada");
	ScavTrap obj3("you");
	ScavTrap obj4("me");
	ScavTrap obj5 = obj4;
	obj5.attak("everybody");
	obj2.beRepaired(30);
	obj3.takeDamage(130);
	obj3.guardGate();
}