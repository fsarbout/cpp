#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	const Animal* animal[2];


	animal[0] = new Dog();
	animal[1] = new Dog();

	for (int i = 0; i < 2; i++)
		delete [] animal;

	// Dog dog;
	// Cat cat;

	
}



