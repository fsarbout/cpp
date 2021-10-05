#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap obj1;
	FragTrap obj2("ada");
	FragTrap obj3("you");
	FragTrap obj4("me");
	FragTrap obj5 = obj4;
	obj5.attak("everybody");
	obj2.beRepaired(30);
	obj3.takeDamage(130);
	obj3.highFivesGuys();
}