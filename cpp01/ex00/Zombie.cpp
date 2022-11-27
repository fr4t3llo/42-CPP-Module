
#include "Zombie.hpp"

Zombie::Zombie(){}
Zombie::Zombie(std::string name)
{
    this->name = name;
}
Zombie::~Zombie(){
    std::cout << name << ": died" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;     
}