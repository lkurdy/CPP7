#include "Array.hpp"

Array::Array()
{
	this->a = new T[];
	return ;
}

Array::Array(unsigned int n)
{
	this->a = new T[n];
}

Array::Array(const Array &other)
{
	*this = other;
	return ;
}

Array	&Array::operator=(const Array &other)
{
	return (*this);
}

Array::~Array()
{
	return ;
}
