#include "convert.hpp"



int main(int ac, char **av)
{
	if (ac == 2)
	{
		cout << av[1] << endl;
		Convert convert(av[1]);
		int i = static_cast<int>(convert);
		cout << "i in main  " << i << endl;
		// isValidType();
		// isDisplayable();
		return (0);
	}
	cout << RED << "Error: " << WHITE 
		<< 	" 'Invalid number of arguments' . " << endl << DEFAULT;
}
