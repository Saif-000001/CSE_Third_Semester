#include <iostream>
#include <cmath>

double pow(double, int); // declaration
int main()
{
    int base, exponent;
    std::cout << "What is the base ? : ";
    std::cin >> base;
    std::cout << "What is the exponent ? : ";
    std::cin >> exponent;

    int myPow = pow(base, exponent);
    std::cout << myPow << std::endl;
}

double pow(double base, int exponent) // definition
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}