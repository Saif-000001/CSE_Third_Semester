#include <iostream>

int main()
{
    int choice;
    do
    {
        std::cout << "0. Quit " << std::endl
                  << "1. Play Game " << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Thanks for nothing" << std::endl;
            break;
        case 1:
            std::cout << "You let's play !" << std::endl;
        default:
            break;
        }
    } while (choice != 0);
    return 0;
}