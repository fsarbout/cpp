#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

// int main()
// {
// 	float f = 82.32;
// 	int i = f;
// 	int in = static_cast<int>(f);

// 	cout << "f: " << f << endl;
// 	cout << "i: " << i << endl;
// 	cout << "in: " << in << endl;
// }


/***** FAQ *****/


// Q : why to use static_cast when implicit conversion is involved ?
// A : cuz C style cast is not easy to find in code , is kinda just adding 
//  		english to code to be more readable and understandable

// converstion operator vs conversion constructor

class Int
{
private:
	int _x;
public:
	Int(int x = 0) : _x(x) { 
		cout << "conversion constructor" << endl; 
		};
	// operator string () { cout << "conversion operator" << endl; 
	// 	return to_string(x); 
	// }
};

int main(){
	Int obj(5);

	// string str1 = obj;
	// obj = 20;

	// string str2 = static_cast<string>(obj);
	// obj = static_cast<Int>(30);
}



// convertion operator overload 
//***/// is not the same as the conversion constructor
// A conversion constructor is a single-parameter constructor that 
// is declared without the function specifier explicit . 
// The compiler uses conversion constructors to convert objects from the type of 
// the first parameter to the type of the conversion constructor's class.

// c style cast is less restrict than c++ cast , static cast stops many operation at
// compile time , while C in runtime : for example cast from char* to int *
//  or cast from derived to base class pointer 

// upcast >> convert derived to base
// downcast >> convert base to derived

// conversion constructor : constructors that convert types of its parameter into a type of the class.



// serialization in c++ : convert an object into sequence of bytes so that it can be stored in a file or memory,