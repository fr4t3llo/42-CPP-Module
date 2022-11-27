#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "zombie has born" << std::endl;
}
void    Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;     
}

Zombie::~Zombie()
{
    std::cout << this->name << " ZOMBIE is deid" << std::endl;
}