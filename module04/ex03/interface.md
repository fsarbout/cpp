
The interface is a blueprint that can be used to implement a class. The interface does not contain any concrete methods (methods that have code). All the methods of an interface are abstract methods.

<h1> Pure virtual function </h1>

 >> c++ doesn't prohibit base class from providing a definition for the pure virtual function , base the derived class still has to provide one,(obligatoire)
 >> you are able to use the implemented pure() method from the base class, but only in derived classe
 >> Objects of abstract classes cannot be insantiated
 
<h1>Abstract classes are classes which either:</h1>

declare a pure virtual function (providing an out-of-declaration definition doesn't change anything in this regard), or
leave at least one of the inherited pure virtual function unimplemented

>> INTERFACE : 

If a class only has pure virtual functions (and no data), it is called an interface

Interface classes in C++ are abstract classes which consist only of pure virtual functions

Thus, if a subclass of an ABC needs to be instantiated, it has to implement each of the virtual functions, which means that it supports the interface declared by the ABC.

Classes that can be used to instantiate objects are called concrete classes