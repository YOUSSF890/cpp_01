#include "HumanB.hpp"




int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(&club);
        jim.attack();  // ila tl3tha lfo9 rah makhashach t SEGV
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}