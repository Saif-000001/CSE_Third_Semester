#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctime>

void print_vector(std::vector<int> guesses);
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

void print_vector(std::vector<int> guesses)
{
    for (int i = 0; i < guesses.size(); i++)
    {
        std::cout << guesses[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{
    std::vector<int> guesses;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number : ";
    while (true)
    {
        int guess;
        std::cin >> guess;
        guesses.push_back(guess);
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
    print_vector(guesses);
}