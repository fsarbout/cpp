#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	/* data */
public:
	MateriaSource(/* args */);
	~MateriaSource();
	void learnMateria(AMateria *m);
	AMateria *createMateria(string const &type);

};






#endif