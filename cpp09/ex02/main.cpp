#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    std::vector<int>myvector;
    if (ac != 1)
    {
        for (int i = 1; i < ac; i++)
        {
            if (isDigitsOnly(av[i]))
                myvector.push_back(std::atoi(av[i]));
            else 
            {
                std::cout << "Error args !" << std::endl;
                exit(1);
            }
        }
        int size = myvector.size();
        std::cout << "\033[0;31mbefore : \033[0m";
        for (int i = 0; i < size; i++)
        {
            std::cout << myvector[i] << " ";
        }
        mergeSort(myvector, 0, myvector.size(), 10);
        std::cout << "\n" <<"\033[0;31mafter : \033[0m";
        for (int i = 0; i < size; i++)
        {
            std::cout << myvector[i] << " ";
        }
        
    }
    else
    {
       std::cout << "Error" << std::endl;
       exit (1);
    }
    return (0);
}