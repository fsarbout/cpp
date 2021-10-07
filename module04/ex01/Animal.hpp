#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

#define cout std::cout
#define string std::string
#define endl std::endl

class Animal
{
protected:
	string _type;
public:
	Animal();
	Animal(Animal const &copy);
	virtual ~Animal();
	Animal & operator = (Animal const &obj);
	virtual void 	makeSound( void ) const;
	string	getType( void ) const;
};




#endif