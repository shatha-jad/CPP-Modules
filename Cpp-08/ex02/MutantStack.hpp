
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <vector>
#include <iterator>

template< typename T>
class MutantStack : public std::stack<T, std::vector<T> > // Using std::vector as the underlying container
{
public:
    MutantStack();
    MutantStack(MutantStack const &object);
    MutantStack & operator=(MutantStack const &rhs);
    ~MutantStack();

    typedef typename std::stack<T, std::vector<T> >::container_type::iterator iterator;
    typedef typename std::stack<T, std::vector<T> >::container_type::const_iterator const_iterator;
    typedef typename std::stack<T, std::vector<T> >::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T, std::vector<T> >::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;

    reverse_iterator rbegin();
    reverse_iterator rend();
    const_reverse_iterator rbegin() const;
    const_reverse_iterator rend() const;

    void clear();
};

#include "MutantStack.tpp"

#endif
