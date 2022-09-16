#include <iostream>

// function declaration
double pow(double, int);
void print_pow(double, int);

int main()
{
    double base;
    int exponent;
    std::cout << "What is the base ? : ";
    std::cin >> base;
    std::cout << "What is the exponent ? : ";
    std::cin >> exponent;
    print_pow(base, exponent);
}

double pow(double base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent)
{
    int myPow = pow(base, exponent);
    std::cout << base << " raise to the " << exponent << " power is " << myPow << ".\n";
}