#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* animals[2];
	// const Animal = Animal();
	
	animals[0] = new Dog();
	animals[1] = new Cat();

	animals[0]->makeSound();
	animals[1]->makeSound();
	for (int i = 0; i < 2; i++)
		delete animals[i];
}








