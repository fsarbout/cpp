#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat();
	Cat(Cat const &copy);
	virtual ~Cat();
	Cat &operator=(Cat const &obj);
	void makeSound(void) const;
	void addIdea(int i, string idea);
	string getIdea(int i);
};

#endif