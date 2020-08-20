#include <iostream>

class
Awesome {
    public:
    Awesome( int n ) : _n( n ) {}
        bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
        bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
        bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
        bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
        bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
        bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

        int     getN(void) const { return (_n); }
    private:
        int _n;
};

std::ostream &      operator<<(std::ostream & os, Awesome const & aw)
{
    os << aw.getN();
    return (os);
}

template<typename T>
void
swap(T & a, T & b)
{
    T   tmp(a);
    a = b;
    b = tmp;
}

template<typename T>
T const &
max(T const & a, T const & b)
{
    return (const_cast<T &>(a) > const_cast<T &>(b) ? a : b);
}

template<typename T>
T const &
min(T const & a, T const & b)
{
    return (const_cast<T &>(a) < const_cast<T &>(b) ? a : b);
}

int
main(void)
{
    int a = 2;
    int b = 3;
    ::swap(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    std::cout << "TEST AVEC CONST" << std::endl;
    std::string const s1 = "chaine1";
    std::string const s2 = "chaine";
    std::cout << "min(c, d) = " << ::min(s1, s2) << std::endl;
    std::cout << "max(c, d) = " << ::max(s1, s2) << std::endl;
     std::cout << "TEST AVEC DOUBLE" << std::endl;
    double const d1 = 21.1;
    double const d2 = 42.1;
    std::cout << "min(d1, d2) = " << ::min(d1, d2) << std::endl;
    std::cout << "max(d1, d2) = " << ::max(d1, d2) << std::endl;
    std::cout << "TEST AVEC Awesome" << std::endl;
    Awesome a1 = 2;
    Awesome a2 = 10;
    std::cout << "min(a1, a2) = " << ::min(a1, a2) << std::endl;
    std::cout << "max(a1, a2) = " << ::max(a1, a2) << std::endl;
    std::cout << "a1 = " << a1 << ", a2 = " << a2 << std::endl;
    ::swap(a1, a2);
    std::cout << "a1 = " << a1 << ", a2 = " << a2 << std::endl;
    std::cout << "TEST AVEC Awesome CONST" << std::endl;
    Awesome const ac1 = 2;
    Awesome const ac2 = 100;
    std::cout << "min(ac1, ac2) = " << ::min(ac1, ac2) << std::endl;
    std::cout << "max(ac1, ac2) = " << ::max(ac1, ac2) << std::endl;
    return 0;
}