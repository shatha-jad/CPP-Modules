
#ifndef MYARRAY_HPP
#define MYARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class MyArray {
private:
    T* _elements;
    unsigned int _size;

public:
    MyArray();
    MyArray(unsigned int n);
    MyArray(const MyArray& src);
    MyArray& operator=(const MyArray& rhs);
    ~MyArray();

    T& operator[](unsigned int index);
    unsigned int size() const;
};

#include "Array.tpp"

#endif
