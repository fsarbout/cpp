#include <iostream>
#include <fstream>

#define cout std::cout
#define cin std::cin
#define string std::string
#define endl std::endl
#define ofstream std::ofstream
#define ifstream std::ifstream
#define getline(a, s) std::getline(a , s)

int main(int ac, char **av)
{
	if (ac == 4)
	{
		// create and write information to the file
		ofstream myFile(av[3]);

		if (!myFile.is_open())
			cout << "fuck you\n";
		else
		{
			myFile << "ma fucksh you\n" << "it's actually working \n" << endl << "" << endl << "hola amigos\n";
			myFile.close();
		}
		string toRread;
		ifstream readFile(av[3]);
		if (readFile.is_open())
		{
			while (getline(readFile, toRread))
			{
				cout << toRread << endl;
			}
			readFile.close();
		}
	}
}
