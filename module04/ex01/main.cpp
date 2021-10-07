#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	for (int i = 0; i < 50;  )
	Dog::dogBrain = 
	delete j;//should not create a leak
	delete i;
}


