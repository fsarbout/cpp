#include "convert.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			Convert convert(av[1]);
			int i = (convert);
			(void)i;

		}
		catch(const std::exception& e)
		{
			cout << e.what() << endl;
		}
		return (0);
	}
	cout << RED << "Error: " << WHITE 
		<< 	" 'Invalid number of arguments' . " << endl << DEFAULT;
}