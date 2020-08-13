#include <iostream>

template<typename T>
void
swap(T & a, T & b)
{
    T   tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T const &
max(T const & a, T const & b)
{
    return (a > b ? a : b);
}

template<typename T>
T const &
min(T const & a, T const & b)
{
    return (a < b ? a : b);
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
    std::cout << "min(c, d) = " << ::min(d1, d2) << std::endl;
    std::cout << "max(c, d) = " << ::max(d1, d2) << std::endl;
    return 0;
}