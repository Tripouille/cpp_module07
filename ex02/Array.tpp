#include "Array.hpp"

template<typename T>
Array<T>::Array(void)
	  : _array(NULL), _size(0)
{
}

template<typename T>
Array<T>::Array(unsigned int const & n)
	  : _array(new T[n]), _size(n)
{
	for (unsigned int s = 0; s < _size; s++)
		_array[s] = T();
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] _array;
}

template<typename T>
Array<T>::Array(Array const & other)
		 : _array(NULL), _size(0)
{
	Array<T>::_copy(other);
}

template<typename T>
Array<T> &
Array<T>::operator=(Array<T> const & other)
{
	if (this != &other)
		Array<T>::_copy(other);
	return (*this);
}

template<typename T>
void
Array<T>::_copy(Array<T> const & other)
{
	delete [] _array;
	_size = other._size;
	_array = new T[_size];
	for (unsigned int s = 0; s < _size; s++)
		_array[s] = other._array[s];
}

template<typename T>
T &
Array<T>::operator[](int i)
	throw(OutOfRangeIndexException)
{
	if (i < 0 || static_cast<unsigned int>(i) >= _size)
		throw OutOfRangeIndexException();
	return (_array[i]);
}

template<typename T>
T const &
Array<T>::operator[](int i) const
	throw(OutOfRangeIndexException)
{
	if (i < 0 || static_cast<unsigned int>(i) >= _size)
		throw OutOfRangeIndexException();
	return (_array[i]);
}

char const *
OutOfRangeIndexException::what(void) const
	throw ()
{
	return ("OutOfRangeIndexException");
}

template<typename T>
int
Array<T>::size(void) const
{
	return (static_cast<int>(_size));
}
