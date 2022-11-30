#include "ScavTrap.hpp"



ScavTrap::ScavTrap():ClapTrap()
{
    setName("unknown");
    setHintPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    setHintPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);
    std::cout << "constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called"<< std::endl;
}

void ScavTrap::guardGate(){std::cout << "ScavTrap guard" << std::endl;}

void ScavTrap::attack(const std::string &target)
{
    if (getEnergyPoint() > 0 && getHintPoint() > 0)
    {
        setEnergyPoint(getEnergyPoint() - 1);
        std::cout << "ScavTrap \033[1;31m" << getName() << " \033[0mattack \033[1;31m" << target << "\033[0m, causing\033[1;32m " << \
            getAttackDamage() << " \033[0mpoints of damage!" << std::endl;
    }
    else 
        std::cout << "\033[1;31mCan't Attack\033[0m" << std::endl;
}