#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::end

class HumanB
{
private:
	string _name;
	Weapon _weapon_B;
public:
	HumanB(string name);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon wpn);
};

#endif