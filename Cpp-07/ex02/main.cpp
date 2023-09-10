#include "Array.hpp"

int main() {
    MyArray<int> intArr(5);

    intArr[0] = 1;
    intArr[1] = 2;
    intArr[2] = 3;
    intArr[3] = 4;
    intArr[4] = 5;

    MyArray<int> copyArr(intArr);

    try {
        std::cout << "Element at index 4: " << copyArr[4] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "Element at index 6: " << copyArr[6] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::cout << "Element at index -3: " << copyArr[-3] << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
