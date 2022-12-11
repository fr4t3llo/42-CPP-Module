#include "Cast.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout <<  "Error Arg\n";
        return(1);
    }
    Cast scalar(av[1]);
    scalar.__executeConvert();
    return (0);
}