#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::end

class HumanA
{
private:
	string _name;
	Weapon _weapon_A;
public:
	HumanA(string name);
	~HumanA();
	void	attack();
};


#endif