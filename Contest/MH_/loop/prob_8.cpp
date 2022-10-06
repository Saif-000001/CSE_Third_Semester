#include <iostream>

int main()
{
    int sumMult = 1, sum = 0, n, x = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            sumMult *= n - x;
            // std::cout << sumMult << " ";
        }
        x++;
    }
    sum += sumMult;
    std::cout << sum << std::endl;
}