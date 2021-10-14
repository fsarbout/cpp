#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *dogBrain;
public:
	Dog();
	Dog(Dog const &copy);
	virtual ~Dog();
	Dog & operator = (Dog const &obj);
	void 	makeSound( void ) const;
};




#endif