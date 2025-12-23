#include <iostream>
#include <fstream>

int main(int ac, char *av[])
{
    if (ac != 4)
        return 1;
    std::ifstream f(av[1]);
    std::string str = av[1];
    str += ".replace";
    std::ofstream file(str.c_str());
    
    if (!f.is_open() || !file.is_open())
        return 1;
    if (av[2][0] == '\0')
    {
        std::cout << "Error: empty string" << std::endl;
        return 1;
    }

    int         pos;
    std::string text1;
    std::string text2;
    std::string s1 = av[2];
    std::string s2 = av[3];


    std::getline(f, text1,'\0');

    while (1)
    {
        pos = text1.find(s1);
        if (pos < 0)
        {
            text2 += text1;
            break ;
        }
        text2 = text2 + text1.substr(0, pos) + s2;
        text1 = text1.substr(pos + s1.length());
    }
    file << text2;

    return (0);
}
