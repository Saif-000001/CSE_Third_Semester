#include <iostream>

int main()
{
    /* std::string greeting = "What the Hello";
    // greeting.append(" there");
    // greeting.insert(3, " ");
    // greeting.erase(3, 1);
    // greeting.erase(3);
    // greeting.erase(greeting.length() - 1);
    greeting.pop_back();
    // greeting.replace(9, 4, "Haven");
    greeting.replace(9, 4, "****");
    std::cout << greeting << std::endl; */

    // String operation method

    std::string greeting = "What the hell?";
    // greeting.replace(greeting.find("hell"), 4, "****");

    // std::cout << greeting.substr(5, 2) << std::endl;
    // std::cout << greeting.find_first_of("aet") << std::endl;
    // std::cout << greeting.find_first_of("!") << std::endl;

    // npos = -1
    unsigned long x = -1;
    // std::cout << x << std::endl;

    if (greeting.find_first_of("!") == -1)
    {
        // std::cout << "NOT FOUND !" << std::endl;
    }

    if (greeting.compare("What the hell?") == 0)
    {
        std::cout << "Equal" << std::endl;
    }
}