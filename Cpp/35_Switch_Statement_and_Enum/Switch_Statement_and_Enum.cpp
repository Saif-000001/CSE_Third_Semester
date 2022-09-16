#include <iostream>

int main()
{
    /*

    int age;
    std::cout << "What is your age ? : ";
    std::cin >> age;
    switch (age)
    {
    case 19:
    case 18:
        std::cout << "You're age  is 18 or 19";
        break;
    case 17:
        std::cout << "You're age  is 17";
        break;

    default:
        std::cout << "Catch all ";
        break;
    }


    */

    enum class Season
    {
        summer,
        spring,
        fall,
        winter
    };
    Season now = Season::winter;
    switch (now)
    {
    case Season::summer:

        break;
    case Season::spring:

        break;
    case Season::fall:

        break;
    case Season::winter:
        std::cout << "Stay warm !\n";
        break;

    default:
        break;
    }
}