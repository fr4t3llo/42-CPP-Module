#include "losers.hpp"

int main(int ac, char **av)
{
    int nb;
    
    std::string content;
    if (ac == 4)
    {
        std::ifstream myfile(av[1]); //to read from files
        if (!myfile.is_open())
        {
            std::cout << "\033[1;31mERROR : Invalid Input !!\033[0m" << std::endl;
            exit (1);
        }
        std::string nameFile = av[1];
        nameFile += ".replace";
        std::ofstream outfile(nameFile); //to write on files
        while (std::getline(myfile, content))
        {
            nb = content.find(av[2]);
            while (nb != -1)
            {
                content.erase(nb, strlen(av[2]));
                content.insert(nb, av[3]);
                nb = content.find(av[2]);
            }
            outfile << content << std::endl;
        }
        myfile.close();
    }
    return (0);
}