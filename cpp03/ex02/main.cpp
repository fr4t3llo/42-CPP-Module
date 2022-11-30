#include "FragTrap.hpp"

int main()
{
    ClapTrap saif("FRATELLO");
    ClapTrap saifo(saif);
    ScavTrap s;
    ClapTrap *var = &s;

    saif.attack("zombie 1");
    saif.takeDamage(10);
    var->setName("qMp");
    s.attack("zombie");
    s.guardGate();
    FragTrap frag("zombie 2");
    frag.attack("saifo");
    frag.highFivesGuys();
}