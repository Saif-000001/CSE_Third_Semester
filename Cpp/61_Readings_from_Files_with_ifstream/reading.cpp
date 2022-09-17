#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    // std::string filename;
    // std::cin >> filename;

    // std::ofstream file(filename.c_str(), std::ios::app);

    // std::vector<std::string> names;
    // names.push_back("Caleb");
    // names.push_back("Amy");
    // names.push_back("Susan");

    // for (std::string name : names)
    // {
    //     file << name << std::endl;
    // }
    // file.close();

    // std::ifstream file("taccos.text", std::ios::app);
    std::ifstream file("taccos.text");

    // std::vector<std::string> names;
    // std::string input;
    // while (file >> input)
    // {
    //     names.push_back(input);
    // }

    // for (std::string name : names)
    // {
    //     std::cout << name << std::endl;
    // }

    if (file.is_open())
    {
        std::cout << "It worked !\n";
    }
    std::string line;
    getline(file, line);
    std::cout << line << std::endl;
    return 0;
}