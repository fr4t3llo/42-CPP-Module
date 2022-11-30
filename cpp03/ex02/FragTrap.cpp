#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
    std::cout << "Frag Trap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    setHintPoint(100);
    setEnergyPoint(100);
    setAttackDamage(30);
    std::cout << "FragTrap constractor called" << std::endl;
}
FragTrap::FragTrap():ClapTrap()
{
    setName("unknown");
    setHintPoint(100);
    setEnergyPoint(100);
    setAttackDamage(30);
    std::cout << "FragTrap default constructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Hiii Fiveee Guuuys" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (getEnergyPoint() > 0 && getHintPoint() > 0)
    {
        setEnergyPoint(getEnergyPoint() - 1);
        std::cout << "FragTrap \033[1;31m" << getName() << " \033[0mattack \033[1;31m" << target << "\033[0m, causing\033[1;32m " << \
            getAttackDamage() << " \033[0mpoints of damage!" << std::endl;
    }
    else 
        std::cout << "\033[1;31mCan't Attack\033[0m" << std::endl;
}


