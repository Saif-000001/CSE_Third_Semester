#include <iostream>

int main()
{
    int n, size, sum = 0;
    std::cout << "Enter size : ";
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter number : ";
        std::cin >> n;
        if (n == 1 || n == 2)
        {
            std::cout << n << " eh primo" << std::endl;
        }
        else if (n > 2)
        {
            for (int j = 2; j < size; j++)
            {
                if (n % j == 0)
                {
                    sum = 0;
                    break;
                }
                else
                {
                    sum = 1;
                }
            }
        }
        if (sum == 1)
        {
            std::cout << n << " eh primo" << std::endl;
            continue;
        }
        else
        {
            std::cout << n << " nao eh primo" << std::endl;
            continue;
        }
    }
}