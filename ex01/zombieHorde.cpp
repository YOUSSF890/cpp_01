#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    int i = 0;
    Zombie *zombie;
    zombie = new Zombie[N]; // (std::nothrow)ghati twli tkhdm b new bhal malloc

    while (i < N)
    {
        zombie[i].setname(name);
        i++;
    }
    return(zombie);
}