#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	cout << "Default ctor called " << endl;
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(string name) : _name(name)
{
	cout << "Parameterized ctor called " << endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	cout << "Copy ctor called " << endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	cout << "Destructor called " << endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &assign)
{
	cout << "Assignment operator called\n";
	this->_attackDamage = assign._attackDamage;
	this->_name = assign._name;
	this->_hitpoints = assign._hitpoints;
	this->_energyPoints = assign._energyPoints;
	return (*this);
}

void ClapTrap::attack(string const &target)
{
	cout << "ClapTrap "
		 << "< " << _name << " > "
		 << "attacks " << target << ", causing " << _attackDamage << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	cout << "ClapTrap "
		 << "< " << _name << " > "
		 << "taking damage and losing " << amount << " of hit points" << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	cout << "ClapTrap "
		 << "< " << _name << " > "
		 << "is Repairing " << amount << " of energy" << endl;
}
