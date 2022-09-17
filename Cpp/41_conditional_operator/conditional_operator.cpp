#include <iostream>

int main()
{
    int answer = 11;
    std::cout << "Guess the number : ";
    int guess;
    std::cin >> guess;
    // int points;
    // if (guess == answer)
    // {
    //     points = 10;
    // }
    // std::cout << points << std::endl;

    guess == answer ? std::cout << "God job" : std::cout << "Bad job";
    return 0;
}