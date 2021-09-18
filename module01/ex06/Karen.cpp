#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
	cout << GREEN << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << endl <<
	"I just love it! " << DEFAULT  << endl;
}

void Karen::info(void)
{
	cout << BLUE << "I cannot believe adding extra bacon cost more money." << endl <<
	"You don’t put enough! If you did I would not have to ask for it!" << DEFAULT  << endl;
}

void Karen::warning(void)
{
	cout << YELLOW << "I think I deserve to have some extra bacon for free" << endl << 
	"I’ve been coming here for years and you just started working here last month." << DEFAULT << endl;
}

void Karen::error(void)
{
	cout << RED << "This is unacceptable, I want to speak to the manager now." << DEFAULT << endl;
}

void Karen::complain(string level)
{
	(void)level;
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Karen::*functionsptr[4])(void) = { &Karen::debug,
											 &Karen::info,
											 &Karen::warning,
											 &Karen::error
	};

	for (int i = 0; i < 4; i++)
		if (level == levels[i])
			(this->*functionsptr[i])();
}