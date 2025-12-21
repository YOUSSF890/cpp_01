#include <iostream>
#include <fstream>

//bash-5.3$ ./f you.txt $'\0' g

int main(int ac, char *av[])
{
    if (ac < 4)
        return 1;
    // if (av[2][0] == '\0')
    // {
    //     std::cout << "Error: empty string" << std::endl;
    //     return 1;
    // }
    std::string str = av[1];
    str += ".replace";
    std::ifstream f(av[1]);
    std::ofstream file(str);

    if (!f.is_open() || !file.is_open())
        return 1;

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
        text1 = text1.substr(pos + 1);
    }
    file << text2;

    return (0);
}
