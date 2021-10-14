#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *catBrain;
public:
	Cat();
	Cat(Cat const &copy);
	virtual ~Cat();
	Cat & operator = (Cat const &obj);
	void makeSound( void ) const;
};




#endif