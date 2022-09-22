#include <iostream>

int main()
{
    double a, b, c, aver;
    std::cout << "Enter value a , b and c : ";
    std::cin >> a >> b >> c;

    aver = ((a * 2) + (b * 3) + (c * 5)) / 10;

    std::cout << aver << std::endl;
}