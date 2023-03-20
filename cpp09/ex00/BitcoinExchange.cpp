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

bool isDigitsOnly(std::string str)
{
    for (size_t i = 0; i < str.length(); ++i)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

bool isValidDate(std::string key) 
{
    std::stringstream ss(key);
    std::string token;
    std::string years, months, days;
    int year, month, day;
    for (int k = 0; std::getline(ss, token, '-'); k++)
    {
        if (isDigitsOnly(token))
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
        else
        {
            return (false);
            continue;
        }
    }
    year = std::atoi(years.c_str());
    month = std::atoi(months.c_str());
    day = std::atoi(days.c_str());
    if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        return false;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
        return false;
    if (month == 2) 
    {
        if (day > 29) 
            return false;
        if (day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)))
            return false;
    }
    return true;
}
