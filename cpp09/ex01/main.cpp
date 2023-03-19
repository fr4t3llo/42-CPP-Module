#include "RPN.hpp"

int main(int ac, char **av)
{
    std::string line;
    if (ac == 2)
    {
        line = av[1];
        calculation(line);
    }
    else 
    {
        std::cout << "Error arg !!" << std::endl;
        exit (1);
    }
    return (0);
}