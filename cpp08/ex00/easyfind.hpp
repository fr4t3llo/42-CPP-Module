#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>


template<typename T>
void easyfind(T first, int second)
{
    typename T::iterator result;
    result = std::find(first.begin(), first.end(), second);
    if (result == first.end())
        std::cout << second << " not found!!" << std::endl;
    else 
        std::cout << "the number found and is : " << second << std::endl;
}


#endif