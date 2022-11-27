#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N > 0)
    {
        Zombie *arr = new Zombie[N];
        for (int i = 0; i < N; i++)
            arr[i].setName(name);
        return (arr);
    } 
    std::cout << "invalid number of zombies" << std::endl;
    return NULL;
}