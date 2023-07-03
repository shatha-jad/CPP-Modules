#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default Constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

std::string Cat::getType() const
{
    return type;
}

void Cat::makeSound() const
{
    std::cout << "Cat meows" << std::endl;
}
