#include "Animal.hpp"

Animal::Animal()
    : type("Animal")
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
    : type(other.type)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        type = other.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}
