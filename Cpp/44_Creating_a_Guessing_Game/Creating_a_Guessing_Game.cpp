#include <iostream>
#include <stdlib.h>
#include <ctime>

void play();
int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0. Quit " << std::endl
                  << "1. Play Game " << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Thanks for nothing " << std::endl;
            break;
        case 1:
            play();
            break;
        default:
            break;
        }
    } while (choice != 0);
}

void play()
{
    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number : ";
    while (true)
    {
        int guess;
        std::cin >> guess;
        if (random == guess)
        {
            std::cout << "You win !" << std::endl;
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low !" << std::endl;
        }
        else
        {
            std::cout << "Too high !" << std::endl;
        }
    }
    std::cout << std::endl;
}