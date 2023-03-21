#include "PmergeMe.hpp"




bool isDigitsOnly(std::string str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

void InsertAlgo(std::vector<int> vec)
{
    int nb = vec.size();
    for (int i = 1; i < nb; i++) {
    int key = vec[i];
    int j = i - 1;

    // Find the correct position to insert the element
    while (j >= 0 && vec[j] > key) 
    {
        vec[j + 1] = vec[j];
        j--;
    }
    // Insert the element into the correct position
    vec[j + 1] = key;
    }
    std::cout << "Sorted vector: ";
    for (int i = 0; i < nb; i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

}


int main(int ac, char **av)
{
    std::vector<int> myvector;
    if (ac != 1)
    {
        for (int i = 1; i < ac; i++)
        {
            if (isDigitsOnly(av[i]))
            {
                int num = std::atoi(av[i]);
                if (num < 0)
                {
                    std::cout << "Error" << std::endl;
                    exit(1);
                }
                myvector.push_back(num);
                if (myvector.size() < 4000)
                    InsertAlgo(myvector);
                // else
                //     MergeAlgo();
            }
            else 
            {
                std::cout << "Error args !" << std::endl;
                exit(1);
            }
        }
        
    }
    else
    {
       std::cout << "Error" << std::endl;
       exit (1);
    }
    return (0);
}