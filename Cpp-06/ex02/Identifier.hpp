#ifndef IDENTIFIER_HPP
#define IDENTIFIER_HPP

#include <iostream>
#include <ctime>

class Base {
public:
    virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* createRandomInstance();
void detectType(Base* ptr);
void detectType(Base& ref);

#endif
