#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attacks with their " << clob->getType() << std::endl;
}

void HumanB::setWeapon(Weapon *club)
{
    clob = club;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}