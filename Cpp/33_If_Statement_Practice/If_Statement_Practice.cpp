#include <iostream>

int main()
{
    int age;
    std::cout << "How old you ? : ";
    std::cin >> age;

    if (age < 18)
    {
        std::cout << "You're not old enough" << std::endl;
    }
    else if (age >= 18)
    {
        std::cout << "You're almost right " << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    return 0;
}