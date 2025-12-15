#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string str;
    public:
        Weapon(std::string str);
        void getType(std::string str);
        void setType(std::string str);
};

#endif