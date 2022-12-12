#ifndef CAST_HPP
#define CAST_HPP

#include <iostream>

typedef struct Data 
{
            int nb;
            char caractere;
}           t_data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif