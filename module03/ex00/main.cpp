#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap ada("ada");
	ClapTrap you("you");
	ClapTrap b("me");
	ClapTrap c = b;
	c.attack("everybody");
	ada.beRepaired(30);
	you.takeDamage(130);
}