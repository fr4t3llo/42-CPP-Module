#include "Weapon.hpp"
Weapon::Weapon(std::string str){
    this->type = str;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
Weapon::~Weapon(){}

std::string const &Weapon::getType()
{
   return this->type;
}