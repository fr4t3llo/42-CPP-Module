#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <iterator>
template <typename T>
class  MutantStack : public std::stack<T>
{   
    public: 
        ~MutantStack(){};
        MutantStack() : MutantStack<T> ::stack(){};
        MutantStack(const MutantStack &obj) : MutantStack<T>::stack(obj){};
        MutantStack &operator=(const MutantStack &obj){
            MutantStack <T>::stack::operator=(obj);
            return *this;
        }
        typedef typename MutantStack<T>::stack::container_type::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
};    

#endif