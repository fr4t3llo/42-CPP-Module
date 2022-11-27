#include "Harl.hpp"

Harl::Harl(){}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string menu[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*memfun[4])();
    int index = -1;
    memfun[0] = &Harl::debug;
    memfun[1] = &Harl::info;
    memfun[2] = &Harl::warning;
    memfun[3] = &Harl::error;
    while (++index < 4)
    {
        if (level == menu[index])
            (this->*memfun[index])();
    }

}
Harl::~Harl(){}