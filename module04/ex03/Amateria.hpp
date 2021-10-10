#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "Icharacter.hpp"

#define cout std::cout
#define endl std::endl
#define string std::string

class AMateria
{
protected:
	string _type;
public:
	AMateria();
	AMateria(string const & type);
		// [...]
	~AMateria();
	string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};


#endif
