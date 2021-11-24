#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
	T *_array;
	unsigned int _size;

public:
	Array(){};
	//
	Array(unsigned int n)
	{
		_size = n;
		this->_array = new T[n];
	}
	//
	Array &operator=(const Array &other)
	{
		if (this != &other)
		{
			delete[] _array;
			_array = new T[other.size()];
			for (unsigned int i = 0; i < other.size(); i++)
				_array[i] = other[i];
		}
		return *this;
	}
	//
	Array(const Array &other)
	{
		_array = new T[other.size()];
		for (unsigned int i = 0; i < other.size(); i++)
			_array[i] = other[i];
	}
	//
	unsigned int size() const
	{
		std::cout << this->_size << std::endl;
		return this->_size;
	}
	//
	~Array()
	{
		delete[] _array;
	}
	class OutOFLimitss : public std::exception
	{
		what () const throw ()
		{
			return "Out of limits\n";
		}
	}
};

#endif 