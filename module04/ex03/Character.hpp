#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "Icharacter.hpp"

#define cout std::cout
#define string std::string
#define endl std::endl

class Character : public ICharacter
{
private:
	string _name;
	AMateria *_materias[4];
public:
	Character(string name);
	Character(Character const &copy);
	~Character();
	Character operator = (Character const &copy);
};

#endif