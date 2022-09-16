#include <iostream>
#include <cmath>

int main()
{
    int base, exponent;
    std::cout << "What is the base ? : ";
    std::cin >> base;
    std::cout << "What is the exponent ? : ";
    std::cin >> exponent;

    double power = pow(base, exponent);
    std::cout << power << std::endl;
    return 0;
}