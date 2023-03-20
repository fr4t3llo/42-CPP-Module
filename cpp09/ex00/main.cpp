#include "BitcoinExchange.hpp"



int main(int ac, char **av)
{
    std::map<std::string, float> mymap;
    std::ifstream fromfile("data.csv");
    std::string line;
    std::getline(fromfile, line);
    if (ac == 2)
    {
        while (std::getline(fromfile, line)) 
        {
            std::size_t pos = line.find(",");
            if (pos != std::string::npos)
            {
                std::string key = line.substr(0, pos);
                std::string value = line.substr(pos + 1);
                try
                {
                    double val = std::stod(value);
                    mymap[key] = val;
                }
                catch (const std::invalid_argument& e) 
                {
                    std::cerr << "Invalid double value: " << value << std::endl;
                }
            }
        }
        fromfile.close();
        std::string line2;
        std::ifstream input(av[1]);
        std::getline(input, line2);
        while (std::getline(input, line2))
        {
            std::size_t pos = line2.find("|");
            if (pos != std::string::npos)
            {
                std::string key2 = trim(line2.substr(0, pos));
                std::string value2 = trim(line2.substr(pos + 1));
                double i  = std::atof(value2.c_str());
                if (value2.compare("2147483647") > 0)
                    i = std::atof(value2.c_str());
                if (!isValidDate(key2))
                {
                    std::cout << "Error: bad input => " << key2 << "\n";
                    continue;
                }
                if (i < 0)
                {
                    std::cout << "Error: not a positive number." << std::endl;
                    continue;
                }
                if (i > 1000)
                {
                    std::cout << "Error: too large a number." << std::endl;
                    continue;
                }
                std::map<std::string , float>::iterator it = mymap.find(key2);
                if (it != mymap.end()) 
                    std::cout << it->first << " => " << value2 << " = " << (it->second * std::atol(value2.c_str())) << std::endl;
                else
                {
                    std::map<std::string , float>::iterator it1 = mymap.lower_bound(key2);
                    it1--;
                    std::cout << key2 << " => " << value2 << " = " << (it1->second * i) << std::endl;
                }
            }
            else 
            {
                std::string key2 = trim(line2.substr(0, pos));
                std::cout << "Error: bad input => " << key2 << "\n";
            }
        }
        input.close();
    }
    else 
        std::cout << "Error: could not open file." << std::endl;
    return (0);
}