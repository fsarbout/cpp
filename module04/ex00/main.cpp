#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	i->makeSound(); //will output the cat sound!
	cout << "" << endl;
	j->makeSound();
	meta->makeSound();
	delete j;
	delete i;
	delete meta;
}

// polymorphism at compile time : function/operator overloading >> Functions can be overloaded
// change in number of arguments or/and change in type of arguments.

// polymorphism at run time : virtual functions >> by Overriding functions 

// The idea is that virtual functions are called according to the type of the object 
// instance pointed to or referenced, not according to the type of the pointer or reference.
// In other words, virtual functions are resolved late, at runtime.

// the function without virtual is getting set only once by the compiler which is in the base class.

//  runtime resolution
//  the comiler handles that by 1) vtable : table of function pointers maintained per each class
//  2) vptr : pointer to vtable , mantained per object instance .

//  RUN time polymorphism >> run time , the compiler adds code to perform the above tasks while working

// A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class

// Virtual functions ensure that the correct function is called for an object,

//  regardless of the type of reference (or pointer) used for function call.
//  When you refer to a derived class object using a pointer or a reference to the base class,
//  you can call a virtual function for that object and execute the derived class’s version of the function. 

// virtual functions uses to achieve runtime polymorphism

// Virtual functions cannot be static.

// Virtual functions should be accessed using pointer or reference of base class type to achieve run time polymorphism.

// A class may have virtual destructor but it cannot have a virtual constructor.

// the base class pointer ‘bptr’ contains the address of object ‘d’ of derived class.
