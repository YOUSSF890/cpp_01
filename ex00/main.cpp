#include "Zombie.hpp"

int main()
{
    Zombie *zombi = newZombie("Youssef");
    zombi->announce();
    randomChump("Youssef");
    delete zombi;
}