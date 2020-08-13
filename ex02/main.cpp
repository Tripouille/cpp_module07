#include <iostream>
#include <string>
#include "Array.hpp"

template<typename T>
void
showTab(Array<T> & a)
{
    for (int e = 0; e < a.size(); e++)
        std::cout << "[" << a[e] << "]";
    std::cout << std::endl;
}

int
main(void)
{
    Array<int> intArray(10);
    try
    {
        std::cout << "intArray[-1] " << intArray[-1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "intArray[10] " << intArray[10] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "intArray: "; showTab(intArray);
    std::cout << "intArray[9] = 15" << std::endl ; intArray[9] = 15;
    std::cout << "intArray: "; showTab(intArray);
    std::cout << "Array<int> intArray2(intArray)" << std::endl;
    Array<int> intArray2(intArray);
    std::cout << "intArray2: "; showTab(intArray2);
    std::cout << "intArray[8] = 14" << std::endl ; intArray[8] = 14;
    std::cout << "intArray: "; showTab(intArray);
    std::cout << "intArray2: "; showTab(intArray2);
    std::cout << "intArray2 = intArray" << std::endl; intArray2 = intArray;
    std::cout << "intArray2: "; showTab(intArray2);
    std::cout << "intArray[7] = 13" << std::endl ; intArray[7] = 13;
    std::cout << "intArray: "; showTab(intArray);
    std::cout << "intArray2: "; showTab(intArray2);
    Array<std::string> strArrayEmpty;
    std::cout << "strArrayEmpty.size(): " << strArrayEmpty.size() << std::endl;
    Array<std::string> strArray(2);
    std::cout << "strArray.size(): " << strArray.size() << std::endl;
    std::cout << "strArray: "; showTab(strArray);
    std::cout << "strArray[0] = \"ABC\"" << std::endl ; strArray[0] = "ABC";
    std::cout << "strArray: "; showTab(strArray);
    std::cout << "Array<std::string> strArray2(strArray)" << std::endl;
    Array<std::string> strArray2(strArray);
    std::cout << "strArray2: "; showTab(strArray2);
    std::cout << "strArray[0] = \"A\"" << std::endl ; strArray[0] = "A";
    std::cout << "strArray: "; showTab(strArray);
    std::cout << "strArray2: "; showTab(strArray2);
    return (0);
}