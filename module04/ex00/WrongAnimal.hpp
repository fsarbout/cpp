#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

#define cout std::cout
#define string std::string
#define endl std::endl

class WrongAnimal
{
protected:
	string _type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &copy);
	virtual ~WrongAnimal();
	WrongAnimal & operator = (WrongAnimal const &obj);
	void	makeSound( void ) const;
	string	getType( void ) const;
};




#endif