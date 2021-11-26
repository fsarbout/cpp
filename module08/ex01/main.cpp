#include "span.hpp"

// don't forgot to remove *cpp from Makefile

int main()
{
	Span sp = Span(5);
	Span sp1(sp);
	sp.addNumber(58);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.getN() << std::endl;
	// std::cout << sp1.getN() << std::endl;
	std::cout << sp << std::endl;

}