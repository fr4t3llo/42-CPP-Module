#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string str);
        ~Weapon();
        std::string const &getType(void);
        void setType(std::string type);
};

#endif