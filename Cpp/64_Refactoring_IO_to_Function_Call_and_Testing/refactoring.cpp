#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <fstream>

void save_score(int count);
void print_vector(std::vector<int> vector);
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

void save_score(int count)
{
    std::ifstream input("best_score.txt");
    int best_score;
    input >> best_score;
    if (!input.is_open())
    {
        std::cout << "Unable to read file\n";
        return;
    }

    std::ofstream output("best_score.txt");
    if (!output.is_open())
    {
        std::cout << "Unable to read file\n";
        return;
    }
    if (count < best_score)
    {
        output << count << std::endl;
    }
    else
    {
        output << best_score << std::endl;
    }
}

void print_vector(std::vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i] << "\t";
    }
    std::cout << std::endl;
}

void play_game()
{
    std::vector<int> guesses;
    int count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number : ";
    while (true)
    {
        int guess;
        std::cin >> guess;
        count++;
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

    save_score(count);
    print_vector(guesses);
}