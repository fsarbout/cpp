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

1.  vtable : table of function pointers maintained per each class
2.  vptr : pointer to vtable , mantained per object instance .

VIRTUAL TABLE (VTABLE) : the compiler at runtime sets VTABLE for each class has virtual fucntions , and derived class from those classes
VTABLE contains function pointers to the virtual fucntions can be called by calling objects of class
(in case of pure vitual functions this ptr is NULL >> This the reason why we cannot instantiate the abstract class)
POINTER TO VTABLE (VPTR) : hidden pointer added by compiler to the base class, it calls vtable of the class .
all the classes derived from this base class inherit the \_vptr.
Every call to virtual function using an object is then resolved using this \_vptr.
Every object of the class stores this VPTR

<img src="./virtual-functions.png" />

    * when the base pointer is assigned a derived class object, the base pointer points to _vptr of the derived class.

<h1> virtual destructor </h1>

* A virtual destructor ensures that when derived subclasses go out of scope or are deleted
  the order of destruction of each class in a hierarchy is carried out correctly.
  If the destruction order of the class objects is incorrect, in can lead to what is known as a memory leak.
  (because we don't have any references to that location!)
* without virtual the base class destructor will be called instead of the derived class destructor.

* subclass constructor is called after base class destructor
* subclass destructor is called before base class destructor

```c++
class Base {
public:
 Base();
 ~Base();
};

class Derived : public Base {
private:
  double val;
public:
 Derived(const double& _val);
 ~Derived();
}

void do_something() {
 Base* p = new Derived;
 // Derived destructor not called!!
 delete p;
}
```

What is happening here? Firstly, we create a base class called Base and a subclass called Derived. The destructors are NOT set to virtual. In our do_something() function, a pointer p to a Base class is created and a reference to a new Derived class is assigned to it. This is legal as Derived is a Base.

However, when we delete p the compiler only knows to call Base's destructor as the pointer is pointing to a Base class. The destructor associated with Derived is not called and val is not deallocated.

A memory leak occurs!


* Now consider the amended code below. The virtual keyword has been added to the destructors:
```c++
class Base {
public:
 Base();
 virtual ~Base();
};

class Derived : public Base {
private:
  double val;
public:
 Derived(const double& _val);
 virtual ~Derived();
}

void do_something() {
 Base* p = new Derived;
 // Derived destructor is called
 delete p;  
}
```
What happens now? Once do_something() is called, delete is invoked on the pointer p. At code execution-time, the correct destructor is looked up in an object known as a vtable. Hence the destructor associated with Derived will be called prior to a further call to the destructor associated with Base. This is the behaviour we originally desired. val will be correctly deallocated.

No memory leak this time!


Note: in a derived class, if your base class has a virtual destructor, your own destructor is automatically virtual.