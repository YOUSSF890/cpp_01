#include "HumanB.hpp"

void Weapon::setType(std::string str)
{
    this->str = str;
}

std::string Weapon::getType()
{
    return (str);
}

Weapon::Weapon(std::string str)
{
    setType(str);
}