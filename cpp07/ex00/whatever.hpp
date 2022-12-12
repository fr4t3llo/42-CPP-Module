#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template <typename T2>
const T2 min(const T2 &x, const T2 &y)
{
    if (x > y)
        return y;
    else if (x < y)
        return x;
    else 
        return y;
}

template <typename T3>
const T3 max(const T3 &x, const T3 &y)
{
    if (x > y)
        return x;
    else if (x < y)
        return y;
    else 
        return y;
}

#endif