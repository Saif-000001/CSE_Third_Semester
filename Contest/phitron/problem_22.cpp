#include <iostream>

int main()
{
    int a, b;
    while (1)
    {
        std::cin >> a >> b;
        if (a == b)
        {
            break;
        }
        if (a < b)
        {
            std::cout << "Crescente" << std::endl;
        }
        else
        {
            std::cout << "Decrescente" << std::endl;
        }
    }
}