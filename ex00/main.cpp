#include "Zombie.hpp"

int main()
{
    randomChump("abdo");
    Zombie *zombi = newZombie("Youssef");
    zombi->announce();
    delete zombi;
}