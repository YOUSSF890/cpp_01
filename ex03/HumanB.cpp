#include "HumanB.hpp"

void HumanB::attack()
{
    if (!clob)
        return ;
    std::cout << name << " attacks with their " << clob->getType() << std::endl;
}

void HumanB::setWeapon(Weapon *club)
{
    this->clob = club;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}