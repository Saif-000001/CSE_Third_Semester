#include <iostream>

int main()
{
    // int sum = 0;
    // for (int i = 0; i <= 99; i++)
    // {
    //     sum += i;
    // }
    // std::cout << sum << std::endl;

    // int i = 5;
    // while (i <= 7)
    // {
    //     std::cout << i * 2 << std::endl;
    //     i++;
    // }

    // int x = 100;
    // int cnt = 0;
    // while (x % 2 == 0)
    // {
    //     x = x / 2;

    //     cnt++;
    // }

    // x = 1;
    // while (x * 2 < 100)
    // {
    //     x *= 2;
    //     std::cout << x << std::endl;
    // }

    // std::cout << x << std::endl;

    int sum = 0;
    int i, j = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum += j;
        }
    }
    std::cout << sum << std::endl;
}