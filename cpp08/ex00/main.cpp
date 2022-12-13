#include "easyfind.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    size_t i;
    i = (sizeof(array)/ sizeof(array[0]));
    std::vector <int> vec(array, array + i);
    vec.push_back(20);
    std::cout << array[4] << std::endl;
    easyfind(vec, 20);
    return (0);
}