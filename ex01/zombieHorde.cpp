#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return NULL;
    int i = 0;
    Zombie *zombie;
    zombie = new(std::nothrow) Zombie[N];
    if (!zombie)
        return (NULL);

    while (i < N)
    {
        zombie[i].setname(name);
        i++;
    }
    return(zombie);
}