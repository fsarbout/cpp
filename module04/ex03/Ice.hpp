#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

#define cout std::cout
#define endl std::endl
#define string std::string

class Ice
{
private:
	/* data */
public:
	Ice();
	Ice(const Ice &copy);
	Ice operator=(const Ice &assign);
	~Ice();
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif