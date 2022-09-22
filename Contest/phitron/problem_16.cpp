#include <iostream>

int main()
{
    int n, sum = 1;
    std::cout << "Enter the number : ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    std::cout << sum << std::endl;
}