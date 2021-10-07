<h1> ABSTRACT class </h1>

 an ABSTRACT class in C++ is a class that has at least one pure virtual function (i.e.,
 a function that has no definition). The classes inheriting the abstract class must provide a
 definition for the pure virtual function; otherwise, the subclass would become an abstract class itself.

 We can never instantiate the abstract class >> we cannot create an object of the abstract class.

 This is because we know that an entry is made for every virtual function in the VTABLE (virtual table). But in case of a pure virtual function, this entry is without any address thus rendering it incomplete. So the compiler doesn’t allow creating an object for the class with incomplete VTABLE entry.

<h1> Pure Virtual Functions </h1>

	The pure virtual function is declared as shown below.
	* virtual return_type function_name(arg list) = 0;

 <h1> characteristics of abstract class in brief:  </h1>

<ul>
<li> We cannot instantiate an abstract class.</li> 
<li> An abstract class contains at least one pure virtual function.</li> 
<li> Although we cannot instantiate abstract class, we can always create pointers or references to this class.</li> 
<li> An abstract class can have some implementation like properties and methods along with pure virtual functions.</li> 
<li> When we derive a class from the abstract class, the derived class should override all the pure virtual functions in the abstract class. If it failed to do so, then the derived class will also be an abstract class.</li>
</ul>

<h1> Virtual Destructors  </h1>

Destructors of the class can be declared as virtual. Whenever we do upcast i.e. assigning the derived class object to a base class pointer, the ordinary destructors can produce unacceptable results.

