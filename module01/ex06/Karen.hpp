#ifndef KAREN_HPP
#define KAREN_HPP


#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string
#define SHUT_UP 5

// #define RED "\e[1;31m"
#define DEFAULT "\e[0;37m"
// #define cout std::cout

#define GREEN "\e[1;32m"
#define RED "\e[1;31m"
#define WHITE "\e[1;37m"
#define YELLOW "\e[1;33m"
#define BLUE "\e[1;34m"
#define PURPLE "\033[1;35m"


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