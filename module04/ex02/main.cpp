#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* animal[100];
	// const Animal = Animal();

	for (int k = 0; k < 50; k++)
		animal[k] = new Dog();
	animal[0]->makeSound();
	for (int k = 50; k < 100; k++)
		animal[k] = new Cat();
	for (int i = 0; i < 100; i++)
		delete animal[i];
}








