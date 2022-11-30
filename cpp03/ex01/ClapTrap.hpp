#ifndef CLAPTRAP_HPP   
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    private:
        std::string name;
        int HitPoint;
        int energyPoint;
        int attackDamage;
    public:
		ClapTrap(std::string Name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &obj);
		ClapTrap &operator=(const ClapTrap &obj2);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
                //setters
        void setName(std::string name);    
        void setHintPoint(unsigned int setHP);    
        void setEnergyPoint(unsigned int setEP);    
        void setAttackDamage(unsigned int setAD);   
                //getters
        std::string getName() const;    
        int getHintPoint() const;    
        int getEnergyPoint() const;    
        int getAttackDamage() const;  
};

#endif