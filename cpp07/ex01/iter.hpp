#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *address,  int lenght, void (*fun)(T const &array))
{
    int i = 0;
    if (fun == NULL)
        return ;
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

#endif
