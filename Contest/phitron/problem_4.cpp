#include <iostream>

int main()
{
    int n, size;
    std::cout << "Enter size : ";
    std::cin >> size;

    for (int i = 1; i <= size; i++)
    {
        std::cout << "Enter number : ";
        std::cin >> n;
        for (int j = 1; j <= n; j++)
        {
            if (n % j == 0)
            {
                std::cout << j << std::endl;
            }
        }
    }
}