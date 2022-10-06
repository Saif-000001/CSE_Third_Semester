#include <iostream>

int main()
{
    int n, sum = 0;
    std::cin >> n;
    for (int i = n; i > 0; i--)
    {
        for (int k = 1; k <= n - i; k++)
        {
            std::cout << " ";
        }

        // increase
        for (int k = 1; k < i + 1; k++)
        {
            std::cout << k;
        }

        // decrease
        for (int j = i - 1; j > 0; j--)
        {

            std::cout << j;
        }

        std::cout << std::endl;
    }
}