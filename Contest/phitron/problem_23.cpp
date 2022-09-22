#include <iostream>

int main()
{
    int a, b, sum = 0;
    std::cout << "Enter value a and b : ";
    std::cin >> a >> b;
    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            if (i % 13 == 0)
            {
                continue;
            }
            sum += i;
        }
        std::cout << sum << std::endl;
    }
    if (a > b)
    {
        for (int i = b; i <= a; i++)
        {
            if (i % 13 == 0)
            {
                continue;
            }
            sum += i;
        }
        std::cout << sum << std::endl;
    }
}