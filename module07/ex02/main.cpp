#include "Array.hpp"



// #define MAX_VAL 750
#define MAX_VAL 4
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    Array<int> number;

    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value; //
        mirror[i] = value;
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp); //
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}




// #include <iostream>

// int main()
// {
// 	// INT

// 	// empty array

// 	Array<int> array1;

// 	Array<int> array(10);
// 	for (unsigned int i = 0; i < array.size(); i++)
// 	{
// 		array[i] = 3345;
// 		std::cout << array[i] << std::endl;
// 	}

// 	// STRING
// 	try
// 	{
// 		Array<std::string> array(20);
// 		for (unsigned int i = 0; i < array.size() + 2; i++)
// 		{
// 			array[i] = "hello";
// 			std::cout << array[i] << std::endl;
// 			std::cout << "i : " << i << std::endl;
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	// FLOAT
// 	try
// 	{
// 		Array<float> array(20);
// 		for (unsigned int i = 0; i < array.size(); i++)
// 		{
// 			array[i] = 13.542;
// 			std::cout << array[i] << std::endl;
// 			std::cout << "i : " << i << std::endl;
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// }

// int  tab[5] = {1, 2, 3, 4, 5};

// std::cout << tab[0] << std::endl;
// std::cout << 0[tab] << std::endl;

