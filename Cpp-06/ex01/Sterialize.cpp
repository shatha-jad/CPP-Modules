
#include "Serialize.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer& object) {
    *this = object;
}

Serializer& Serializer::operator=(const Serializer& rhs) {
    if (this != &rhs) {}
    return *this;
}

Serializer::~Serializer() {}

uintptr_t Serializer::convertToRaw(DataStructure* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

DataStructure* Serializer::convertFromRaw(uintptr_t raw) {
    return reinterpret_cast<DataStructure*>(raw);
}
