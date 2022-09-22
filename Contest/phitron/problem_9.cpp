#include <iostream>

int main()
{
    int X;
    float Y, COST;

    std::cout << "Enter X and Y : ";
    std::cin >> X >> Y;

    COST = X / Y;
    std::cout << "COST = " << COST << " Km/1" << std::endl;
    return 0;
}