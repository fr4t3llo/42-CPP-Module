#include "BitcoinExchange.hpp"


std::string trim(const std::string& str) 
{
    std::string::size_type i = 0;
    std::string::size_type j = str.length() - 1;

    // remove leading whitespace
    while (i < str.length() && std::isspace(str[i])) {
        ++i;
    }

    // remove trailing whitespace
    while (j > i && std::isspace(str[j])) {
        --j;
    }

    return str.substr(i, j - i + 1);
}

bool isValidDate(std::string key) 
{
    std::stringstream ss(key);
    std::string token;
    std::string years, months, days;
    int year, month, day;
    for (int k = 0; std::getline(ss, token, '-'); k++)
    {
        if (k == 0)
            years = token;
        else if (k == 1)
            months = token;
        else if (k == 2)
            days = token;
        else
        {
            std::cout << "Error date !" << std::endl;
            exit(1);
        }
    }
    year = std::atoi(years.c_str());
    month = std::atoi(months.c_str());
    day = std::atoi(days.c_str());

    // std::cout << "year : " << year << " month : " << month << " day : " << day << std::endl;
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
    {
        return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
    {
        return false;
    }
    if (month == 2) 
    {
        if (day > 29) 
            return false;
        if (day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)))
            return false;
    }
    return true;
}

int main(int ac, char **av)
{
    (void)av;
    std::map<std::string, float> mymap;
    std::ifstream fromfile("data.csv");
    std::string line;
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
        while (std::getline(input, line2))
        {
            std::size_t pos = line2.find("|");
            if (pos != std::string::npos)
            {
                std::string key2 = trim(line2.substr(0, pos));
                std::string value2 = trim(line2.substr(pos + 1));
                if (!isValidDate(key2))
                {
                    std::cout << "Invalid date: " << key2 << "\n";
                    continue;
                }
                std::map<std::string , float>::iterator it = mymap.find(key2);
                if (it != mymap.end())
                    std::cout << "---> " << it->first << "\n";
                else
                {
                    std::map<std::string , float>::iterator it1 = mymap.lower_bound(key2);
                    std::cout << "---> " << (it1->first) << "\n";
                }

            }
        }
    
        // for (std::map<std::string, float>::iterator it = mymap.begin(); it != mymap.end(); ++it)
        // {
        //     std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
        // }
    }
    else 
    std::cout << "Error arg <file> !!" << std::endl;
    return (0);
}

























        // while (std::getline(fromfile, line))
        // {
        //     // std::cout << "hada line : " <<  line << std::endl;
        //     std::stringstream st(line);
        //     std::string data, scndline;
        //     std::getline(st, data, ',');
        //     std::getline(st, scndline);
        //     float value = std::stod(scndline);
        //     mymap[data] = value;
        // }