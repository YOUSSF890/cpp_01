#include <iostream>
#include <fstream>

// std::string revres(std::string str,std::string s1,std::string s2)
// {
//     int i = 0;
//     std::string new_str;
//     while (str[i])
//     {
//         if(std::strcmp(s1,s2))
//         i++;
//     }

// }


int main(int ac, char *av[])
{
    int i = 0;
    std::string text1 = "youssef1 youssef2\n2 youssef   \n 3jdfkr";
    std::string text2;
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ofstream file;

    // file.open(av[1]);
    // std::ifstream f("textFile.txt");
    // if (!f.is_open() || file.is_open())
    //     return 1;
    // std::getline(f, text1);

    while (1)
    {
        int pos = text1.find(s1);
        i = pos;
        if (pos >= 0)
        {
            text2 = text2 + text1.substr(0, pos) + s2;
            text1 = text1.substr(i + 1);
        }
        else
        {
            text2 += text1;
            break ;
        }
    }
    std::cout << text2 << "\n";

    return (0);
}

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string text = "Hello World World";
//     int pos = text.find("World");
//     text = text.substr(pos + 1);
//     int pos1 = text.find("World");

//         cout << "Found at index: " << pos << " in: " << pos1 << "\n";
// }
