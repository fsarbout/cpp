#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
// #include <string>

#define endl std::endl
#define cout std::cout
#define cin std::cin
#define string std::string

class Zombie
{
private:
	string name;
public:
	Zombie(/* args */);
	~Zombie();
	// 
	void	announce(void);
};

void	Zombie::announce(void)
{
	cout << name << "BraiiiiiiinnnzzzZ..." << endl;
}

#endif
