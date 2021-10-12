#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria *m)
{
	return ;
}

AMateria MateriaSource::*createMateria(string const &type)
{
	(void)type;
	return;
}
