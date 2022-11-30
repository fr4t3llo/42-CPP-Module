#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap saif("FRATELLO");
    ScavTrap s;
    ClapTrap *var = &s;

    saif.attack("zombie 1");
    saif.takeDamage(10);
    var->setName("qMp");
    s.attack("zombie");
    s.guardGate();
}