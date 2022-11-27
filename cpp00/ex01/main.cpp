
#include "PhoneBook.hpp"

int main()
{
    PhoneBook myPhoneBook;
    std::string  cmd;

    std::cout << "\033[1;32m*** Welcome To PhoneBook ! ***\033[0m" << std::endl;
    std::cout << "Enter Command : ";
    while (1)
    {
        if (std::getline(std::cin, cmd) == nullptr)
            exit(0);
        if (cmd == "ADD")
        {
            myPhoneBook.ADD();
        }
        else if (cmd == "SEARCH")
        {
            myPhoneBook.SEARCH();
        }
        else if (cmd == "EXIT")
        {
            std::cout << "\033[1;33mCLOSED !!\033[0m";
            exit (0);
        }
        else  
            std::cout << "Error Command !!" << "\n";
        std::cout << "Enter Command : ";
    }
}
