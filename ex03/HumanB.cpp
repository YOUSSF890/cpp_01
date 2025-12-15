#include "HumanB.hpp"

void HumanB::setWeapon(Weapon *club)
{
    clob = club;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}