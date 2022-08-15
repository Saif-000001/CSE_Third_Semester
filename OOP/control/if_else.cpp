#include <iostream>

int main()
{
    int age;
    std::cin >> age;
    if (age > 18)
    {
        std::cout << "Yes! you are perfect this work" << std::endl;
    }
    else
    {
        std::cout << "No! your age not perfect" << std::endl;
    }
}