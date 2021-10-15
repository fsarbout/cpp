#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
	const Animal* animal[2];


	animal[0] = new Dog();
	animal[1] = new Cat();

	for (int i = 0; i < 2; i++)
		delete animal[i];

	cout << "*******************************" << endl;

	Dog dog;
	Cat cat;

	dog.addIdea(3, "dog ideas ") ;
	cat.addIdea(3, "cat ideas ") ;

	cout << dog.getIdea(3) << endl;
	cout << cat.getIdea(3) << endl;
}



