#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap ada("ada");
	ClapTrap you("you");
	ClapTrap b("me");
	ClapTrap c = b;
	c.attak("everybody");
	ada.beRepaired(30);
	you.takeDamage(130);
	//
	cout << "*************************\n";
	ScavTrap ok;
	// ScavTrap noDefine("noDefine");
	
}