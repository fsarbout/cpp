#ifndef KAREN_HPP
#define KAREN_HPP


#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string
#define SHUT_UP 50
// #define cout std::cout

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	Karen(/* args */);
	~Karen();
	void complain(string level);
};





#endif