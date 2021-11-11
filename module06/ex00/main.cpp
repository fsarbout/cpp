#include "convert.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Convert convert(av[1]);
		int i = (convert);
		// float f = static_cast<float>(convert);
		// float f1 = convert;
		// double d = (convert);
		char c = (convert);
		
		// (void)f;
		// (void)f1;
		(void)i;
		// (void)d;
		(void)c;
		return (0);
	}
	cout << RED << "Error: " << WHITE 
		<< 	" 'Invalid number of arguments' . " << endl << DEFAULT;
}