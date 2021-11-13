#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

// int main()
// {
// 	float f = 82.32;
// 	int i = f;
// 	int in = static_cast<int>(f);

// 	cout << "f: " << f << endl;
// 	cout << "i: " << i << endl;
// 	cout << "in: " << in << endl;
// }


/***** FAQ *****/

// Q : why to use static_cast when implicit conversion is involved ?
// A : cuz C style cast is not easy to find in code , is kinda just adding 
//  		english to code to be more readable and understandable

// converstion operator vs conversion constructor

class Int
{
private:
	int x;
public:
	Int(int x = 0) : x(x) { cout << "conversion constructor" << endl; };
	operator string () { cout << "conversion operator" << endl; 
		return to_string(x); 
	}
};

int main(){
	Int obj(5);

	string str1 = obj;
	obj = 20;

	string str2 = static_cast<string>(obj);
	obj = static_cast<Int>(30);
}
