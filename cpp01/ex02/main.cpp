#include <iostream>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string &stringREF = var;
    std::cout << "The memory address of the var : " << "\t\033[1;32m" << &var << "\033[0m" << std::endl;
    std::cout << "The memory address held by stringPTR : "<< " \033[1;32m" << stringPTR << "\033[0m" << std::endl;
    std::cout << "The memory address held by stringREF : " << " \033[1;32m" << &stringREF << "\033[0m" << std::endl;
    std::cout << "The value of the var : " << "\t\t\t\033[1;32m" << var << "\033[0m" << std::endl;
    std::cout << "The value pointed to by stringPTR : " << "\t\033[1;32m" << *stringPTR << "\033[0m" << std::endl;
    std::cout << "The value pointed to by stringREF : " << "\t\033[1;32m" << stringREF << "\033[0m" << std::endl;

    return (0);
}