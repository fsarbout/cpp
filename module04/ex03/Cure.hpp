#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>

#include "Amateria.hpp"

#define cout std::cout
#define endl std::endl
#define string std::string

class Cure: public AMateria
{
public:
	Cure();
	Cure(Cure const &copy);
	Cure operator = (Cure const &assign);
	~Cure();
};

#endif