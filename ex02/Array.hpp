#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <exception>

class OutOfRangeIndexException : public std::exception
{
	char const *		what(void) const
		throw ();
};

template<typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int const & n);
		virtual ~Array(void);
		Array(Array<T> const & other);

		Array<T> &					operator=(Array<T> const & other);
		T &							operator[](int)
			throw(OutOfRangeIndexException);
		T const &					operator[](int) const
			throw(OutOfRangeIndexException);

		int							size(void) const;

	private:
		void						_copy(Array<T> const & other);

		T *							_array;
		unsigned int				_size;

};

#include "Array.tpp"
#endif