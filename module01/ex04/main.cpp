#include <iostream>
#include <fstream>

#define GREEN "\e[1;32m"
#define RED "\e[1;31m"
#define DEFAULT "\e[0;37m"

#define cout std::cout
#define cin std::cin
#define string std::string
#define endl std::endl
#define ofstream std::ofstream
#define ifstream std::ifstream
#define getline(a, s) std::getline(a , s)

int error(ifstream &iFile, string s1 , string s2)
{
    if (!iFile.is_open())
    {
        cout << "\e[1;31m CAN'T OPEN FILE \e[0;37m" << endl ;  
        return (1);
    } 
    if (iFile.peek() ==  EOF)
    {
        cout << "\e[1;31m FILE IS EMPTY \e[0;37m" << endl ;
        return (1);
    }
    if (s1.compare("") == 0 || s2.compare("") == 0)
    {
        cout << "\e[1;31m EMPTY STRING \e[0;37m" << endl ;
        return (1);
    }
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        string iFileName = av[1];
        string oFileName = iFileName + ".replace";

        /* ofstream == create and write information to file */
        ofstream oFile(oFileName);
        /* ifstream == read information from file */
        ifstream iFile(iFileName);

        string s1 = av[2];
        string s2 = av[3];

        if (error(iFile,  s1 ,  s2))
            return (1);
        
        string line;
        size_t pos = 0;
        while (getline(iFile, line))
        {
            while ((pos = line.find(s1, pos)) != string::npos)
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
                pos = pos + s1.length();
            }
            oFile << line << endl;
        }
        iFile.close();
        oFile.close();
        return (0);
    }
    cout << "\e[1;31m NUMBER OF ARGUMENTS LESS OR MORE THAN 4 \e[0;37m" << endl;
    return (1);
}