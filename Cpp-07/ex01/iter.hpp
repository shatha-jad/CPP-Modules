#ifndef MY_ITER_HPP
#define MY_ITER_HPP

#include <iostream>

template<typename T>
void displayElement(const T& element)
{
    std::cout << element << ' ';
}

template<typename T>
void myIter(T* array, size_t length, void(*function)(const T&))
{
    for (size_t i = 0; i < length; ++i)
    {
        function(array[i]);
    }
    std::cout << std::endl;
}

#endif