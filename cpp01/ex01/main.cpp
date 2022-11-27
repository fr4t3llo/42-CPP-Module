#include "Zombie.hpp"
int main()
{
    int N = 5;
    Zombie *array = zombieHorde(N, "saif");
    for (int i = 0; i < N; i++)
        array[i].announce();
    delete [] array;
   return (0); 
}