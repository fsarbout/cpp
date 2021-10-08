#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	cout << "ScavTrap Default ctor called " << endl;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(string name)
{
	_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
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

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	cout << "ScavTrap assignment operator called" << endl;
	this->_attackDamage = obj._attackDamage;
	this->_name = obj._name;
	this->_energyPoints = obj._energyPoints;
	this->_hitpoints = obj._hitpoints;
	return *this;
}

void ScavTrap::attack(string const &target)
{
	cout << "ScavTrap "
		 << "< " << _name << " > "
		 << "attacks " << target << ", causing " << _attackDamage << " points of damage!" << endl;
}