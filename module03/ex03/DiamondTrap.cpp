#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	cout << "DiamondTrap Default ctor called " << endl;
	// _hitpoints = 100;
	// _energyPoints = 100;
	// _attackDamage = 30;
}

DiamondTrap::DiamondTrap(string name)
{
	_name = name;
	cout << "DiamondTrap Parameterized ctor called " << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &copy)
{
	cout << "DiamondTrap copy ctor called " << endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap Destructor called " << endl;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const &obj)
{
	cout << "DiamondTrap assignment operator called" << endl ;
	this->_name = obj._name; 
	// this->_attackDamage = obj._attackDamage; 
	// this->_energyPoints = obj._energyPoints; 
	// this->_hitpoints = obj._hitpoints; 
	return *this;
} 