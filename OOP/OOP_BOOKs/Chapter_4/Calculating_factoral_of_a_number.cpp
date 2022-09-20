#include <iostream>

int fact(int n);

int main()
{
    int n;
    std::cout << "Enter the number : ";
    std::cin >> n;

    std::cout << "Factorial of " << n << " is  = " << fact(n) << std::endl;
    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return (n * fact(n - 1));
}