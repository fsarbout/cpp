#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "Amateria.hpp"

#define cout std::cout
#define endl std::endl
#define string std::string


class Ice : public AMateria
{
private:
public:
	Ice();
	Ice(Ice const &copy);
	Ice operator = (Ice const &assign);
	~Ice();
};




#endif