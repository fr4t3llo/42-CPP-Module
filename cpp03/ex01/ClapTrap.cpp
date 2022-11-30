#include "ClapTrap.hpp" 

void ClapTrap::setName(std::string name){this->name = name;};    
void ClapTrap::setHintPoint(unsigned int setHP){this->HitPoint = setHP;};    
void ClapTrap::setEnergyPoint(unsigned int setEP){this->energyPoint = setEP;};    
void ClapTrap::setAttackDamage(unsigned int setAD){this->attackDamage = setAD;};   

std::string ClapTrap::getName(){return this->name;};    
int         ClapTrap::getHintPoint(){return this->HitPoint;};    
int         ClapTrap::getEnergyPoint(){return this->energyPoint;};    
int         ClapTrap::getAttackDamage(){return this->attackDamage;};

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap()
{
    this->HitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
    this->name = "unknown";
    std::cout << "Ruuuuuuun Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->HitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
    this->name = name;
    std::cout << "Ruuuuuuun and set Name have been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj2)
{
    std::cout << "copy assignment operator called" << std::endl;
    if (this == &obj2)
        return *this;
    name = obj2.name;
    attackDamage = obj2.attackDamage;
    energyPoint = obj2.energyPoint;
    HitPoint = obj2.HitPoint;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (energyPoint > 0 && HitPoint > 0)
    {
        energyPoint--;
        std::cout << "ClapTrap \033[1;31m" << name << " \033[0mattack \033[1;31m" << target << "\033[0m, causing\033[1;32m " << \
            attackDamage << " \033[0mpoints of damage!" << std::endl;
    }
    else 
        std::cout << "\033[1;31mCan't Attack\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int damage)
{
    std::cout << "ClapTrap\033[1;31m " << name << " \033[0mgot\033[1;32m " << damage << " \033[0mpoints of damage!" << std::endl;
    this->HitPoint = this->HitPoint - damage;
    if (HitPoint <= 0)
        std::cout << "\033[1;31m" << name << " \033[0mis died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int health)
{
   if (energyPoint > 0 && HitPoint > 0)
   {
       std::cout << "ClapTrap \033[1;31m " << name << " \033[0mhas health \033[1;31m " << health << " \033[0mpoint of health" << std::endl;
       energyPoint--;
       this->HitPoint = this->HitPoint + health;
   }
   else 
       std::cout << "\033[1;31mCan't Attack\033[0m" << std::endl;
}
