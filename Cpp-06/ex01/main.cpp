
#include "Serialize.hpp"


int main() {
    DataStructure dataInstance;
    dataInstance.text = "Data is Power";
    dataInstance.value = 24;

    uintptr_t rawValue = Serializer::convertToRaw(&dataInstance);
    std::cout << "Serialized Value: " << rawValue << std::endl;

    DataStructure* deserializedInstance = Serializer::convertFromRaw(rawValue);
    std::cout << "Deserialized Value: " << deserializedInstance->text << " " << deserializedInstance->value << std::endl;

    return 0;
}