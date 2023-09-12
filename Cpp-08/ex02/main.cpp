
#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;

    // Pushing elements onto the stack
    mstack.push(5);
    mstack.push(17);
    mstack.push(42);
    mstack.push(73);
    mstack.push(91);

    // Displaying the top element
    std::cout << "Top of the stack: " << mstack.top() << std::endl;

    // Displaying the size of the stack
    std::cout << "Size of the stack: " << mstack.size() << std::endl;

    // Iterating through the stack using iterators
    std::cout << "Stack elements using iterators:" << std::endl;
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Iterating through the stack using reverse iterators
    std::cout << "Stack elements using reverse iterators:" << std::endl;
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
    {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Popping an element
    mstack.pop();
    std::cout << "Size of the stack after pop: " << mstack.size() << std::endl;

    // Clearing the stack
    mstack.clear();
    std::cout << "Size of the stack after clear: " << mstack.size() << std::endl;

    return 0;
}
