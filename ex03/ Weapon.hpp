#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string str;
    public:
        Weapon(std::string str);
        std::string getType();
        void setType(std::string str);

};

#endif