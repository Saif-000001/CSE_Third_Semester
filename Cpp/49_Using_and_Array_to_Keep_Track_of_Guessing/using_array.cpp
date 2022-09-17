#include <iostream>
#include <stdlib.h>
#include <ctime>

void print_array(int arr[], int size);
void play_game();

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        std::cout << "0. Quit" << std::endl
                  << "1. Play Game" << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 0:
            std::cout << "Thanks for nothing\n";
            break;
        case 1:
            play_game();
            break;

        default:
            break;
        }
    } while (choice != 0);
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{
    int guesses[250];
    int guess_count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number ";
    while (true)
    {
        int guess;
        std::cin >> guess;
        guesses[guess_count++] = guess;
        if (random == guess)
        {
            std::cout << "You win ! \n";
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
    print_array(guesses, guess_count);
}