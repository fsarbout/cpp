#include "span.hpp"

// don't forgot to remove *cpp from Makefile

int main()
{

	std::cout << GREEN << "************ TEST 1 ************ " << DEFAULT << std::endl ;
	try
	{
		Span sp = Span(5);
		Span sp1(sp);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "vector: { " << sp << "} " << std::endl; 
		
		std::cout << "Long  Span: " << sp.longestSpan() << std::endl;	
		std::cout << "Short Span: " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl ;
	}

	try
	{
		Span sp = Span(10000);
		Span sp1(sp);

		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			sp.addNumber(rand() % 10000);
		}
		std::cout << "vector: { " << sp << "} " << std::endl; 
		std::cout << "Long  Span: " << sp.longestSpan() << std::endl;	
		std::cout << "Short Span: " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl ;
	}
	



	// std::cout << GREEN << "************ TEST 2 ************ " << DEFAULT << std::endl ;
	// // trying to add more than vector size exception 
	// try
	// {
	// 	Span sp = Span(3);
	// 	Span sp1(sp);

	// 	sp.addNumber(5);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);

	// 	std::cout << "vector: { " << sp << "} " << std::endl; 
	// 	std::cout << "size: " << sp.getN() << std::endl;
		
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;	
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl ;
	// }

	// std::cout << GREEN << "************ TEST 3 ************ " << DEFAULT << std::endl ;
	// // only one element exception
	// try
	// {
	// 	Span sp = Span(5);
	// 	Span sp1(sp);

	// 	sp.addNumber(5);

	// 	std::cout << "vector: { " << sp << "} " << std::endl; 
	// 	std::cout << "size: " << sp.getN() << std::endl;
		
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;	
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl ;
	// }

	// // std::cout << GREEN << "************ TEST 4 ************ " << DEFAULT << std::endl ;
	// // // only one element exception
	// // try
	// // {
	// // 	Span sp = Span(10000);
	// // 	Span sp1(sp);

	// // 	srand(time(NULL));

	// // 	for (size_t i = 0; i < count; i++)
	// // 	{
	// // 		int value = rand();
	// // 	}
		

	// // 	sp.addNumber(5);

	// // 	std::cout << "vector: { " << sp << "} " << std::endl; 
	// // 	std::cout << "size: " << sp.getN() << std::endl;
		
	// // 	std::cout << sp.shortestSpan() << std::endl;
	// // 	std::cout << sp.longestSpan() << std::endl;	
	// // }
	// // catch(const std::exception& e)
	// // {
	// // 	std::cerr << e.what() << std::endl ;
	// // }
}