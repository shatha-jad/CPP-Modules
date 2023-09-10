
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< typename T >
void mySwap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

template< typename T >
T myMin(T &x, T &y)
{
    return (y <= x) ? y : x;
}

template< typename T >
T myMax(T &x, T &y)
{
    return (y >= x) ? y : x;
}

#endif