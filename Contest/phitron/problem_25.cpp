#include <iostream>

int main()
{
    int a, b, m = 1;
    std::cout << "Enter number a and b : ";
    std::cin >> a >> b;

    int l = a;

    if (a < b)
    {
        for (int i = 0; i < b / a; i++)
        {
            std::cout << m << " ";
            for (int j = m + 1; j <= l; j++)
            {
                std::cout << j << " ";
            }
            std::cout << std::endl;
            m += a;
            l += a;
                }
    }
}