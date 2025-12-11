#include "Zombie.h"


Zombie* newZombie( std::string name )
{
    Zombie obj = new Zombie;

    obj.announce();
}