#include "HumanB.hpp"

HumanA::HumanA(std::string name, Weapon &club)
{
    clob = &club;
    this->name = name;
}