#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	cout << "FragTrap Default ctor called " << endl;
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(string name)
{
	_name = name;
	cout << "FragTrap Parameterized ctor called " << endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	cout << "FragTrap copy ctor called " << endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	cout << "FragTrap Destructor called " << endl;
}

FragTrap & FragTrap::operator = (FragTrap const &obj)
{
	cout << "FragTrap assignment operator called" << endl ;
	this->_attackDamage = obj._attackDamage; 
	this->_name = obj._name; 
	this->_energyPoints = obj._energyPoints; 
	this->_hitpoints = obj._hitpoints; 
	return *this;
} 

void 	FragTrap::highFivesGuys( void )
{
	cout << "High Fives Guys" << endl;
}