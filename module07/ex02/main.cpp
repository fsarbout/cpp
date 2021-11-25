#include "Array.hpp"

#include <iostream>

int main()
{
	// INT
	try
	{
		Array<int> array(10);
		for (unsigned int i = 0; i < array.size(); i++)
		{
			array[i] = 3345;
			// std::cout << array[-1000] << std::endl;
			std::cout << array[i] << std::endl;
			std::cout << "i : " << i << std::endl;
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// // STRING
	// try
	// {
	// 	Array<std::string> array(20);
	// 	for (unsigned int i = 0; i < array.size() + 2; i++)
	// 	{
	// 		array[i] = "hello";
	// 		std::cout << array[i] << std::endl;
	// 		std::cout << "i : " << i << std::endl;
	// 	}
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// // FLOAT
	// try
	// {
	// 	Array<float> array(20);
	// 	for (unsigned int i = 0; i < array.size(); i++)
	// 	{
	// 		array[i] = 13.542;
	// 		std::cout << array[i] << std::endl;
	// 		std::cout << "i : " << i << std::endl;
	// 	}
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
}





// int  tab[5] = {1, 2, 3, 4, 5};

// std::cout << tab[0] << std::endl;
// std::cout << 0[tab] << std::endl;