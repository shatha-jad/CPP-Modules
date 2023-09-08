#include "IDENTIFIER_HPP"

int main() {
    Base* instance = createRandomInstance();

    std::cout << "Using Pointer Detection:" << std::endl;
    detectType(instance);

    std::cout << "\nUsing Reference Detection:" << std::endl;
    detectType(*instance);

    delete instance;
    return 0;
}