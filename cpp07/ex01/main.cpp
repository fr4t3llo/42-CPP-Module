#include "iter.hpp"

int main()
{
    int array[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    char str[] = "saifeddine";


    std::cout << "string before call iter : "<< str << std::endl;
    ::iter(str, 5, fun2);
    std::cout << "string after call iter : "<< str << std::endl;


    std::cout << "Before call iter : "<< array[4] << std::endl;
    ::iter(array, 8, fun);

    return (0);
}