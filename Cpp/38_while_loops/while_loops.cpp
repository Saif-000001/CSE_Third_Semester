#include <iostream>

int main()
{
    int fact = 5;
    int factorial = fact;
    int i = factorial - 1;
    while (i > 1)
    {
        factorial *= i;
        i--;
    }
    std::cout << "Factorial of " << fact << " : " << factorial << std::endl;
    return 0;
}