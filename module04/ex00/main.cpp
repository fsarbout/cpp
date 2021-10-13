#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	cout << "j type :\t" << j->getType() << " " << endl;
	cout << "i type :\t" << i->getType() << " " << endl;
	i->makeSound(); //will output the cat sound!
	cout << "" << endl;
	j->makeSound();
	meta->makeSound();
	cout << "*****************\n";
	delete j;
	delete i;
	delete meta;

	cout << "WRONG *****************\n";
	
	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	cout << "wrong type    :\t" << wrong->getType() << " " << endl;
	cout << "wrongcat type :\t" << wrongCat->getType() << " " << endl;
	wrongCat->makeSound(); //will output the cat sound!
	cout << "" << endl;
	wrong->makeSound();
	delete wrongCat;
	// delete wrong;
}



