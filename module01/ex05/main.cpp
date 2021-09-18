#include "Karen.hpp"

int main()
{
	Karen karen;
	
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
			karen.complain(levels[i]);
}