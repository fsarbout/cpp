<h1> runtime polymorphism </h1>

polymorphism at compile time : function/operator overloading >> Functions can be overloaded
change in number of arguments or/and change in type of arguments.

polymorphism at run time : virtual functions >> by Overriding functions 

<h1> virtual functions </h1>

The idea is that virtual functions are called according to the type of the object 
instance pointed to or referenced, not according to the type of the pointer or reference.
In other words, virtual functions are resolved late, at runtime.

the function without virtual is getting set only once by the compiler which is in the base class.

Note that if a function is declared virtual in the base class, then it will be virtual in all of the derived classes.



 RUN time polymorphism >> run time , the compiler adds code to perform the above tasks while working

A virtual function is a member function which is declared within a base class and is re-defined(Overriden) by a derived class

Virtual functions ensure that the correct function is called for an object,

 regardless of the type of reference (or pointer) used for function call.
 When you refer to a derived class object using a pointer or a reference to the base class,
 you can call a virtual function for that object and execute the derived class’s version of the function. 

virtual functions uses to achieve runtime polymorphism

Virtual functions cannot be static.

Virtual functions should be accessed using pointer or reference of base class type to achieve run time polymorphism.

A class may have virtual destructor but it cannot have a virtual constructor.

the base class pointer ‘bptr’ contains the address of object ‘d’ of derived class.


<h1> ABSTRACT class </h1>

 an ABSTRACT class in C++ is a class that has at least one pure virtual function (i.e.,
 a function that has no definition). The classes inheriting the abstract class must provide a
 definition for the pure virtual function; otherwise, the subclass would become an abstract class itself.

static and dynamic bidnding >> STATIC : create one object of base class and another one for derived class
DYNAMIC : create a base class pointer that points to the derived class

<h1> mechanism of runtime polymorphism </h1>

 runtime resolution
 the compiler handles that by 
 1) vtable : table of function pointers maintained per each class
 2) vptr : pointer to vtable , mantained per object instance .

VIRTUAL TABLE (VTABLE)   :  the compiler at runtime sets VTABLE for each class has virtual fucntions , and derived class from those classes 
				 VTABLE contains function pointers to the virtual fucntions can be called by calling objects of class 
				 (in case of pure vitual functions this ptr is NULL >> This the reason why we cannot instantiate the abstract class)
POINTER TO VTABLE (VPTR) : hidden pointer added by compiler to the base class, it calls vtable of the class . 
								 all the classes derived from this base class inherit the _vptr.
						 Every call to virtual function using an object is then resolved using this _vptr.
						 Every object of the class stores this VPTR

<img src="./virtual-functions.png" />

	* when the base pointer is assigned a derived class object, the base pointer points to _vptr of the derived class.
	
