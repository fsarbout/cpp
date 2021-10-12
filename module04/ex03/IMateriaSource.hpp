#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

#define cout std::cout
#define endl std::endl
#define string std::string

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *m) = 0;
	virtual AMateria *createMateria(string const &type) = 0;
};

#endif