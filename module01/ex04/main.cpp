#include <iostream>
#include <fstream>

#define GREEN "\e[1;32m"
#define RED "\e[1;31m"
#define WHITE "\e[1;37m"
#define YELLOW "\e[1;33m"
#define BLUE "\e[1;34m"
#define PURPLE "\033[1;35m"

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
		string s1 = av[2];
		string s2 = av[3];
		string oFileName = av[1];
		string iFileName =  oFileName + ".replace";
		ofstream oFile(oFileName);
		ifstream iFile(iFileName);

		cout << "iFileName : " << iFileName << endl; 
		cout << "oFileName : " << oFileName << endl; 

		if (!oFile.is_open())
			cout << "fuck you\n";
		else
			cout << "thank you\n";

		string toRread;
		if (oFileName.is_open())
		{
			while (getline(oFileName, toRread))
			{
				cout << toRread << endl;
			}
			oFileName.close();
		}
	}
	else
		cout << "\e[1;31m number of arguments less or more than 4 \e[0;37m" << endl ;
}