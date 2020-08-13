#include <iostream>

template<typename T>
void
iter(T * p, int const & size, void (*f)(T &))
{
    for (int e = 0; e < size; e++)
        (*f)(p[e]);
}

template<typename T>
void
showTab(T const * p, int const & size)
{
    for (int e = 0; e < size; e++)
        std::cout << "[" << p[e] << "]";
    std::cout << std::endl;
}

template<typename T>
void
addOne(T & a)
{
    a +=1;
}

int
main(void)
{
    char    charTab[6] = {'0', '1', '2', '3', '4', '6'};
    showTab(charTab, 6);
    iter(charTab, 6, &addOne);
    showTab(charTab, 6);
    int     intTab[5] = {1, 2, 3, 4, 5};
    showTab(intTab, 5);
    iter(intTab, 5, &addOne);
    showTab(intTab, 5);
    double    doubleTab[3] = {-1.1, 0.2, 42.3};
    showTab(doubleTab, 3);
    iter(doubleTab, 3, &addOne);
    showTab(doubleTab, 3);
    return (0);
}