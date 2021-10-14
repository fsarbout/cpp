#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	const Animal* animal[100];


	for (int k = 0; k < 10; k++)
		animal[k] = new Dog();
	for (int k = 10; k < 20; k++)
		animal[k] = new Dog();
	for (int i = 0; i < 20; i++)
		delete animal[i];
}


