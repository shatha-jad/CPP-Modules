#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <cstdint>

struct DataStructure {
    std::string text;
    int value;
};

class Serializer {
private:
    Serializer();
    Serializer(const Serializer& object);
    Serializer& operator=(const Serializer& rhs);

public:
    ~Serializer();
    static uintptr_t convertToRaw(DataStructure* ptr);
    static DataStructure* convertFromRaw(uintptr_t raw);
};

#endif