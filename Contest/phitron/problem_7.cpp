#include <iostream>

int main()
{
    int seconds, minutes, hours, N;
    std::cout << "Enter The number : ";
    std::cin >> N;

    hours = N / 3600;
    minutes = (N - hours * 3600) / 60;
    seconds = (N - hours * 3600) - (minutes * 60);
    std::cout << "hours : minutes : seconds = " << hours << " : " << minutes << " : " << seconds << std::endl;
}