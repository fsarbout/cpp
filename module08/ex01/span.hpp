#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>


class Span
{
private:
	unsigned int _N;
public:
	Span();
	Span(unsigned int N);
	~Span();
	void addNumber(unsigned int N);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	Span &operator=(const Span &obj);
	Span(const Span &copy);

};


#endif