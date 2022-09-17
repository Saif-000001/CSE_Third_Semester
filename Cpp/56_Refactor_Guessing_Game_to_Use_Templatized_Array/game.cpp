#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <array>

void print_array(std::array<int, 251> guesses);
void play_game();
int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. play game" << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Thanks for nothing \n";
            break;
        case 1:
            play_game();
        default:
            break;
        }
    } while (choice != 0);
}

void print_array(std::array<int, 251> guesses, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << guesses[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{
    std::array<int, 251> guesses;
    int guesses_count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number : ";
    while (true)
    {
        int guess;
        std::cin >> guess;
        guesses[guesses_count++] = guess;
        if (random == guess)
        {
            std::cout << "You win !\n";
            break;
        }
        else if (guess < random)
        {
            std::cout << "Too low !\n";
        }
        else
        {
            std::cout << "Too high !\n";
        }
    }
    print_array(guesses, guesses_count);
}