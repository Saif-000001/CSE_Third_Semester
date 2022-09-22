#include <iostream>

int main()
{
    int a, b, m = 1;
    std::cin >> a >> b;
    int l = a;
    if (a < b)
    {
        for (int i = 1; i < b / a; i++)
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