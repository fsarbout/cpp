#include "convert.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
			Convert convert(av[1]);
			int i = static_cast<int>(convert);
			char c = convert;
			float f = convert;
			double d = convert;
			(void)i;
			(void)c;
			(void)f;
			(void)d;

		return (0);
	}
	cout << RED << "Error: " << WHITE 
		<< 	" 'Invalid number of arguments' " << endl << DEFAULT;
}