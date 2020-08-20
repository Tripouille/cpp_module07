#include <iostream>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

template< typename T >
void printPlus( T & x ) { std::cout << ++x << std::endl; return; }

template<typename T>
void
iter(T * p, int const & size, void (*f)(T &))
{
	for (int e = 0; e < size; e++)
		(*f)(p[e]);
}

template<typename T>
void
iter(T const * p, int const & size, void (*f)(T const &))
{
	for (int e = 0; e < size; e++)
		(*f)(p[e]);
}

int
main(void)
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	int const tab3[5] = { 0, 10, 20, 30, 40 };

	iter(tab, 5, print);
	iter(tab2, 5, print);
	std::cout << "printPlus" << std::endl;
	iter(tab, 5, printPlus);
	std::cout << "int const" << std::endl;
	iter(tab3, 5, print);
	return 0;
}