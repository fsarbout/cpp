#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int _N;
	std::vector<int> _V;
public:
	Span();
	Span(unsigned int N);
	~Span();
	void addNumber(int number);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	Span &operator=(const Span &obj);
	Span(const Span &copy);
	unsigned int getN() const;
	std::vector<int> getVector() const;

};

std::ostream &operator<<(std::ostream &os, const Span &obj);

#endif