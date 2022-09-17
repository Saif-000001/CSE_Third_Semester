#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    // std::ofstream file;
    // file.open("Hello.text");
    // std::ofstream file("Hello.text", std::ios::app);

    std::string filename;
    std::cin >> filename;

    std::ofstream file(filename.c_str(), std::ios::app);

    if (file.is_open())
    {
        std::cout << "Success n00b\n";
    }

    std::vector<std::string> names;
    names.push_back("celeb");
    names.push_back("Amy");
    names.push_back("Susan");

    for (std::string name : names)
    {
        file << name << std::endl;
    }

    file.close();

    return 0;
}