#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    nb = 0;
}
bool CheckInput(std::string cmd)
{
    if (cmd.empty())
        return (true);
    else 
        return (false);
}

void PhoneBook::ADD()
{
    std::string lineToRead;

    std::cout << "FirstName : ";
    std::getline(std::cin, lineToRead);
    if (CheckInput(lineToRead) == true)
        std::cout << "Error input !" << std::endl; 
    else
    {
        contact[nb%8].setFirstName(lineToRead);
        std::cout << "LastName : ";
        std::getline(std::cin, lineToRead);
        if (CheckInput(lineToRead) == true)
            std::cout << "Error input !" << std::endl;
        else
        {
            contact[nb%8].setLastName(lineToRead);
            std::cout << "NickName : ";
            std::getline(std::cin, lineToRead);
            if (CheckInput(lineToRead) == true)
                std::cout << "Error input !" << std::endl;
            else 
            {
                contact[nb%8].setNickName(lineToRead);
                std::cout << "PhoneNumber : ";
                std::getline(std::cin, lineToRead);
                if (CheckInput(lineToRead) == true)
                    std::cout << "Error input !" << std::endl;
                else 
                {
                    contact[nb%8].setPhoneNumber(lineToRead);
                    std::cout << "DarkestSecret : ";
                    std::getline(std::cin, lineToRead);
                    if (CheckInput(lineToRead) == true)
                        std::cout << "Error input !" << std::endl;
                    else 
                    {
                        contact[nb%8].setDarkestSecret(lineToRead);
                        std::cout << "contact with index " << nb % 8 << " has been added successful\n";
                        nb++;
                    }
                }
            }
        }
    }
}

void PhoneBook::EXIT()
{
    exit(0);
}

bool ft_check_index(std::string line)
{
    for (size_t i = 0; i < line.length(); i++)
    {
        if (!isdigit(line[i]))
            return true;
    }
    return false;
}
void PhoneBook::SEARCH()
{
    std::string line;
    int         index;
    int         i;
    i = 0;
    std::cout << "***** Saved Contacts *****" << std::endl;
    std::cout << std::setw(10) << "|\033[1;32m  index  \033[0m|";
    std::cout << std::setw(10) << " \033[1;32mFirstName \033[0m|";
    std::cout << std::setw(10) << " \033[1;32mLastName \033[0m|";
    std::cout << std::setw(10) << " \033[1;32mNickName \033[0m|" << std::endl;
    while (i < std::min(this->nb, 8))
    {
        std::cout << "|" << std::setw(10) << i  << "|";
        std::cout << std::setw(10) << contact[i].getFirstName().substr(0, 9) + "." << "|";
        std::cout << std::setw(10) << contact[i].getLastName().substr(0, 9) + "." << "|";
        std::cout << std::setw(10) << contact[i].getNickName().substr(0, 9) + "." << "|" << std::endl;
        i++;
    }
    std::cout << "INTER INDEX : ";
    getline(std::cin, line);
    if (ft_check_index(line) == true)
        std::cout << "\033[1;31mError <Invalid index> !!\033[0m" << std::endl;
    else 
    {
        std::stringstream(line) >> index;
        if (index < 0 || index > std::min(7, this->nb - 1))
            std::cout << "\033[1;31mError <Invalid index> !!\033[0m" << std::endl;
        else
            {
                std::cout << "FirstName : " << this->contact[index].getFirstName() << std::endl;
                std::cout << "LastName : " << this->contact[index].getLastName() << std::endl;
                std::cout << "NickName : " << this->contact[index].getNickName() << std::endl;
                std::cout << "PhoneNumber : " << this->contact[index].getPhoneNumber() << std::endl;
                std::cout << "DarkestSecret : " << this->contact[index].getDarkestSecret() << std::endl;
            }
    }
}