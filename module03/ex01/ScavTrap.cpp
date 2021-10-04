#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	cout << "ScavTrap Default ctor called " << endl;
	// _hitpoints = 100;
	// _energyPoints = 50;
	// _attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap Destructor called " << endl;
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap" << "< " <<  "_name" << " > " << "ScavTrap have enterred in Gate keeper mode" << endl;
	
}