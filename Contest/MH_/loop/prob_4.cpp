#include <iostream>

int main()
{
    int n, sum = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum += j;
            std::cout << sum << " ";
        }
        // std::cout << sum << std::endl;
    }
    std::cout << sum << std::endl;
}