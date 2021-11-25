#include "iter.hpp"

// class Awesome
// {
// public:
// 	Awesome(void) : _n(42) { return; }
// 	int get(void) const { return this->_n; }

// private:
// 	int _n;
// };
// std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
// {
// 	o << rhs.get();
// 	return o;
// }
// template <typename T>
// void print(T const &x)
// {
// 	std::cout << x << std::endl;
// 	return;
// }
// 
// int main()
// {
// 	int tab[] = {0, 1, 2, 3, 4}; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
// 	Awesome tab2[5];
// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// 	return 0;
// }

int main()
{
	std::cout << "********************* INT *********************" << std::endl;
	int tab1[5] = {1, 2, 3, 4, 5};
	iter(tab1, 5, printElemet);
	// std::cout << std::endl;
	std::cout << "******************* STRING ********************" << std::endl;
	std::string tab3[5] = {"aaa", "bbb", "ccc", "ddd", "eee"};
	iter(tab3, 5, printElemet);
	// std::cout << std::endl;
	std::cout << "******************** FLOAT ********************" << std::endl;
	float tab2[5] = {34.39495, 2.49456, 3.983, 4.9845, 0};
	iter(tab2, 5, printElemet);
}