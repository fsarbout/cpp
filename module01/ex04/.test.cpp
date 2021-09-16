#include <iostream>
#include <string>

#define string std::string 
#define cout std::cout 
#define cin std::cin 
#define endl std::endl 

int main()
{
    string s1 = "world hello world tatatata papapapa hello kakakakakaka helloooooooooooooo";
    string s2 = "ada";
    string s3 = "hello";

    size_t pos;
    while ((pos = s1.find(s3, pos)) != string::npos)
    {
        s1.erase(pos, s3.length());
        s1.insert(pos, s2);
        pos = pos + s3.length();
    }
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
}