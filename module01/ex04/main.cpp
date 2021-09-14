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


// int     errorHandling(string s1, string s2, )


int main(int ac, char **av)
{

    if (ac == 4)
    {
        string iFileName = av[1];
        string oFileName = iFileName + ".replace";

        /*ofstream == create and write information to file */
        ofstream oFile(oFileName);
        /*ifstream == read information from file */
        ifstream iFile(iFileName);

        string s1 = av[2];
        string s2 = av[3];

        if (!iFile.is_open())
        {
            cout << "\e[1;31m CAN'T OPEN FILE \e[0;37m" << endl ;  
            return 0;
        } 
        if (s1.compare("") == 0 || s2.compare("") == 0)
        {
            cout << "\e[1;31m EMPTY STRING \e[0;37m" << endl ;  
            return 0;
        }
        else
        {
            int count = 0;
            stringPos;
            string line;
            while (getline(iFile, line))
            {
                if (s1.find(line) != 0)
                {
                    cout << endl;
                    cout << "I find the world \n";
                    cout << line << endl;
                    count++;
                }
                cout << count << "times\n";
                
            }

            cout << "s1 : " << s1 << endl;
            cout << "s2 : " << s2 << endl;
        }
    }
    else 
		cout << "\e[1;31m number of arguments less or more than 4 \e[0;37m" << endl ;       
}