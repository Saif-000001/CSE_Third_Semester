#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }

        for (int k = 1; k < i + 1; k++)
        {
            std::cout << k;
        }

        for (int k = i - 1; k >= 1; k--)
        {
            std::cout << k;
        }
        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }
        for (int k = 1; k < i + 1; k++)
        {
            std::cout << k;
        }
        for (int k = i - 1; k >= 1; k--)
        {
            std::cout << k;
        }
        std::cout << std::endl;
    }
}