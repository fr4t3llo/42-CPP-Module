#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *address,  int lenght, void (*fun)(T &array))
{
    int i = 0;
    while (i < lenght)
    {
        fun(address[i]);
        i++;
    }
}

template <typename T>
void fun(T address)
{
    std::cout << address << std::endl;
}


template <typename T>
void fun2(T &array)
{
    array = 'A';
}
#endif