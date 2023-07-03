#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // Output: Cat meows!
    j->makeSound(); // Output: Dog barks
    meta->makeSound(); // Output: Animal makes a sound
    std::cout << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongJ = new WrongCat();
    std::cout << wrongJ->getType() << " " << std::endl;
    wrongJ->makeSound(); // Output: WrongCat makes a wrong sound
    wrongMeta->makeSound(); // Output: WrongAnimal makes a sound
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongJ;

    return 0;
}
