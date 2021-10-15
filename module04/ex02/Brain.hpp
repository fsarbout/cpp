#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

#define cout std::cout
#define string std::string
#define endl std::endl

class Brain
{
protected:
	string ideas[100];
public:
	Brain();
	Brain(Brain const &copy);
	virtual ~Brain();
	Brain & operator = (Brain const &obj);
	void addIdea(int i, string idea);
	string getIdea(int i);
};

#endif