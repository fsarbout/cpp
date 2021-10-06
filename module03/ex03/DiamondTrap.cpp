#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
	cout << "DiamondTrap Default ctor called " << endl;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(string name)
{
	ClapTrap::_name = name + "_clap_name";
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
	this->_attackDamage = obj._attackDamage; 
	this->_energyPoints = obj._energyPoints; 
	this->_hitpoints = obj._hitpoints; 
	return *this;
} 

void DiamondTrap::attak(string const &target)
{
	cout << "DiamondTrap " << "< " <<  _name << " > " << "attacks " << target << ", causing " << _attackDamage << " points of damage!" << endl;
}

void DiamondTrap::whoAmI()
{
	cout << "DiamondTrap name is" << " < " << _name << " > " << endl;
	cout << "ClapTrap name is" << " < " << ClapTrap::_name << " > " << endl;
}