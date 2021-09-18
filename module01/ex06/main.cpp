#include "Karen.hpp"

#define DEBUG 0 
#define INFO 1 
#define WARNING 2
#define  ERROR 3

int main(int ac, char **av)
{
	if (ac != 2)
		return (1);

	Karen karen;

	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	string level = av[1];

	int i = 0;
	while (i < 4 )
	{
		if (level == levels[i])
			break;
		i++;
	}


	switch (i)
	{
	case DEBUG :
		cout << "[ DEBUG ]" << endl;
		karen.complain(levels[i++]);
		cout << endl;
	case INFO :
		cout << "[ INFO ]" << endl;
		karen.complain(levels[i++]);
		cout << endl;
	case WARNING :
		cout << "[ WARNING ]" << endl;
		karen.complain(levels[i++]);
		cout << endl;
	case ERROR :
		cout << "[ ERROR ]" << endl;
		karen.complain(levels[i++]);
		cout << endl;
		break;
	default:
		cout << "Probably complaining about insignificant problems" << endl;
		break;
	}
}