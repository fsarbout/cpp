#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define cout std::cout
#define string std::string
#define endl std::endl

class Character : public ICharacter
{
private:
	string _name;

public:
	Character(string name);
	~Character();
	string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif