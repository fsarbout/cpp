#include "iter.hpp"


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