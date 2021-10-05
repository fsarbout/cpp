#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	cout << "ScavTrap Default ctor called " << endl;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(string name)
{
	_name = name;
	cout << "ScavTrap Parameterized ctor called " << endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
	cout << "ScavTrap copy ctor called " << endl;
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap Destructor called " << endl;
}

void ScavTrap::guardGate()
{
	cout << "ScavTrap have enterred in Gate keeper mode" << endl;
}

ScavTrap & ScavTrap::operator = (ScavTrap const &obj)
{
	cout << "ScavTrap assignment operator called" << endl ;
	this->_attackDamage = obj._attackDamage; 
	this->_name = obj._name; 
	this->_energyPoints = obj._energyPoints; 
	this->_hitpoints = obj._hitpoints; 
	return *this;
}  