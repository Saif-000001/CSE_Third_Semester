#include <iostream>

int main()
{
    int a, b, temp;
    std::cin >> a >> b;
    if (a < b)
    {

        for (int i = a + 1; i < b; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                std::cout << i << std::endl;
            }
        }
    }
}