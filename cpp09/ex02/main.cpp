#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    std::vector<int>myvector;
    std::deque<int>mydeque;
    if (ac != 1)
    {
        for (int i = 1; i < ac; i++)
        {
            if (isDigitsOnly(av[i]))
            {
                myvector.push_back(std::atoi(av[i]));
                mydeque.push_back(std::atoi(av[i]));
            }
            else 
            {
                std::cout << "Error args !" << std::endl;
                exit(1);
            }
        }
        int sizevec = myvector.size();
        int sizedeq = mydeque.size();
        std::cout << "\033[0;32mbefore : \033[0m";
        if (sizevec > 5)
        {
            for (int i = 0; i < 4; i++)
                std::cout << myvector[i] << " ";
            std::cout << "[...]\n";
        }
        else if (sizevec <= 5)
        {
            for (int i = 0; i < sizevec; i++)
                std::cout << myvector[i] << " ";
        }
        std::cout << "\033[0;32mbefore : \033[0m";
        if (sizedeq > 5)
        {
            for (int i = 0; i < 4; i++)
                std::cout << mydeque[i] << " ";
            std::cout << "[...]";
        }
        else if (sizedeq <= 5)
        {
            for (int i = 0; i < sizedeq; i++)
                std::cout << mydeque[i] << " ";
        }
        clock_t startclock = clock(); // start measuring time
        mergeSort(myvector, 0, myvector.size() - 1, 10);
        clock_t endclock = clock(); // stop measuring time
        std::cout << "\n" <<"\033[0;32mafter : \033[0m";
        if (sizevec > 5)
        {
            for (int i = 0; i < 4; i++)
                std::cout << myvector[i] << " ";
            std::cout << "[...] ";
        }
        else if (sizevec < 5)
        {
            for (int i = 0; i < sizevec; i++)
                std::cout << myvector[i] << " ";
        }
        double elapsedTimevec = double(endclock - startclock) / CLOCKS_PER_SEC * 1000.0;
        std::cout << "\033[0;33mTime to process a range of \033[0m" << myvector.size() << "\033[0;33m elements with std::vector: \033[0m" << elapsedTimevec << "\033[0;33m us\033[0m";
        clock_t startclockdeq = clock(); // start measuring time
        mergeSortdeq(mydeque, 0, mydeque.size() - 1, 10);
        clock_t endclockdeq = clock(); // stop measuring time
        std::cout << "\n" <<"\033[0;32mafter : \033[0m";
        if (sizedeq > 5)
        {
            for (int i = 0; i < 4; i++)
                std::cout << mydeque[i] << " ";
            std::cout << "[...] ";
        }
        else if (sizedeq < 5)
        {
            for (int i = 0; i < sizedeq; i++)
                std::cout << mydeque[i] << " ";
        }
        double elapsedTimedeq = double(endclockdeq - startclockdeq) / CLOCKS_PER_SEC * 10000.0;
        std::cout << "\033[0;33mTime to process a range of \033[0m" << mydeque.size() << "\033[0;33m elements with std::deque: \033[0m" << elapsedTimedeq << "\033[0;33m us\033[0m" << std::endl;

    }
    else
    {
       std::cout << "Error" << std::endl;
       exit (1);
    }
    return (0);
}