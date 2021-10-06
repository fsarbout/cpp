#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
	/* data */
public:
	Cat();
	Cat(Cat const &copy);
	~Cat();
	Cat & operator = (Cat const &obj);
	void makeSound( void ) const;
};




#endif