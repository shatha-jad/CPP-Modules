#include "whatever.hpp"

int main()
{
    int a = 2, b = 3;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    mySwap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << myMin(a, b) << std::endl;
    std::cout << "max(a, b) = " << myMax(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "Before swap: c = " << c << ", d = " << d << std::endl;
    mySwap(c, d);
    std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
    std::cout << "min(c, d) = " << myMin(c, d) << std::endl;
    std::cout << "max(c, d) = " << myMax(c, d) << std::endl;

    return 0;
}