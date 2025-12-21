#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle\
-specialketchup burger. I really do!\n";
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
years, whereas you started working here just last month.\n";
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{

    const std::string av[]   = {"DEBUG","INFO","WARNING","ERROR"};
    int     index   = -1;
    int     i       = 0;

    while(i < 4)
    {
        if (level == av[i])
            index = i;
        i++;
    }

    Harl obj;
    void (Harl::*print)(void) = NULL;

    switch(index)
    {
        case 0:
            print= &Harl::debug;
            break;
        case 1:
            print = &Harl::info;
            break;
        case 2:
            print = &Harl::warning;
            break;
        case 3:
            print = &Harl::error;
            break;
        default:
            std::cout << "Enter : DEBUG or INFO or WARNING or ERROR \n";
            return ; 
    }
 
    (obj.*print)();
}