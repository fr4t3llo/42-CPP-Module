#ifndef FRAGTRAP_HPP
 #define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &obj2);
        FragTrap(const FragTrap &obj);
        void highFivesGuys(void);
        void attack(const std::string &target);
};

#endif