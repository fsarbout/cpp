#include "convert.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Convert convert(av[1]);
		int i = static_cast<int>(convert);
		// int i = convert;
		// there is no difference between the two previous lines, but the first one is more readable.
		char c = static_cast<char>(convert);
		float f = static_cast<float>(convert);
		float d = static_cast<float>(convert);
		(void)i, (void)c, (void)f, (void)d;

		return (0);
	}
	cout << RED << "Error: " << WHITE 
		<< 	" 'Invalid number of arguments' " << endl << DEFAULT;
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

