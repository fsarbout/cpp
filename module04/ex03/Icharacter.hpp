#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

#define cout std::cout
#define endl std::endl
#define string std::string

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual string const &getName() const = 0;
	virtual void equip(AMateria *m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};

#endif