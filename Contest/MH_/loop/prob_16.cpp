#include <iostream>

int main()
{
    int n, sum = 0;
    std::cin >> n;
    for (int i = 50; i < n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
            else if (i == j + 1)
            {
                std::cout << i << std::endl;
                sum++; // 24
                // sum += i; // 1082
            }
        }
    }
    std::cout << sum << std::endl;
}