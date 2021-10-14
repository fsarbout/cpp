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