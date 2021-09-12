#include <iostream>
#include <fstream>

#define cout std::cout
#define cin std::cin
#define string std::string
#define endl std::endl
#define ofstream std::ofstream
#define ifstream std::ifstream
#define getline(cin, c) std::getline(cin , c)

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
			myFile << "ma fucksh you\n";
			myFile.close();
		}
		/*test*/
		{
			string hello ;
			getline(cin, hello);
			cout << "hello\n";
			cout << hello << endl;
		}
	}
}
