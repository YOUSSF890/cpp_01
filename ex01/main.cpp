#include "Zombie.hpp"

int main()
{
    int i = 0;
    Zombie *zombie = zombieHorde(10,"youssef");

    while (i < 10)
    {
        zombie[i].announce();
        i++;
    }
    delete[] zombie;
}