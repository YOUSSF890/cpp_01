#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "HumanA.hpp"

class HumanB
{
    private:
        std::string str;
    public:
        HumanB(std::string name);
        void attack();
        void setWeapon(Weapon *club);

};

#endif