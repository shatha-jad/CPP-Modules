#include "Cat.hpp"

Cat::Cat()
    : brain(new Brain())
{
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
    : brain(new Brain(*other.brain))
{
    std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Cat::~Cat()
{
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Cat meows" << std::endl;
}
