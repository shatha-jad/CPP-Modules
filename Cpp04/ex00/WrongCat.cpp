#include "WrongCat.hpp"

WrongCat::WrongCat()
    : WrongAnimal()
{
    std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
    : WrongAnimal(other)
{
    std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat Copy Assignment Operator called" << std::endl;
    if (this != &other)
    {
        WrongAnimal::operator=(other);
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

std::string WrongCat::getType() const
{
    return type;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes a wrong sound" << std::endl;
}
