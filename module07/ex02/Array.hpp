#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

#define RED "\033[0;31m"
#define DEFAULT "\033[0m"

template <class T>
class Array
{
private:
	T *_array;
	unsigned int _size;

public:
	// Constructor
	Array(){
		std::cout << "default constuctor" << std::endl;
		this->_array = new T[0];
		this->_size = 0;
	};


	// Parameterized constructor 
	Array(unsigned int n)
	{
		std::cout << "Parameterized Constructor called" << std::endl;
		_size = n;
		this->_array = new T[n];
	}


	// Operator =
	Array &operator=(const Array &other)
	{
		std::cout << "operator = called" << std::endl;
		if (this != &other)
		{
			delete[] _array;
			_array = new T[other.size()];
			for (unsigned int i = 0; i < other.size(); i++)
				_array[i] = other[i];
		}
		return *this;
	}


	// copy constructor
	Array(const Array &other)
	{	
		std::cout << "copy constructor called" << std::endl;
		_array = new T[other.size()];
		for (unsigned int i = 0; i < other.size(); i++)
			_array[i] = other[i];
	}


	// size
	unsigned int size() const
	{
		return this->_size;
	}


	//	destructor
	~Array()
	{
		delete[] _array;
	}


	// exception
	class OutOFLimitss : public std::exception
	{
		const char *what () const throw ()
		{
			return "\033[0;31m Out of limits \033[0m \n";
		}
	};


	// operator []
	T &operator[](unsigned int i) const
	{
		std::cout << "operator [] called" << std::endl;
		if (i >= _size)
			throw OutOFLimitss();
		return _array[i];
	}
};

#endif 