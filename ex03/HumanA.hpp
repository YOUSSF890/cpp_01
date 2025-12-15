#ifndef HUMANA_HPP
# define HUMANA_HPP

#include " Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon *clob;
    public:
        HumanA(std::string name, Weapon &club);
        void attack();
    
};

#endif