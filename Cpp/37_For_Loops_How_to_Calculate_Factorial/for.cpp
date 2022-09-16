#include <iostream>

int main()
{
    int fact = 5;
    int factorial = fact;
    for (int i = factorial - 1; i > 1; i--)
    {
        factorial = factorial * i;
    }
    std::cout << "Factorial of " << fact << " : " << factorial << std::endl;
}