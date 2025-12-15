#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <memory>
#include <stdlib.h>

class Zombie
{
    private :
        std::string name;
    public :
        void setname(std::string name);
        void announce( void );
};

Zombie* zombieHorde(int N, std::string name);

#endif