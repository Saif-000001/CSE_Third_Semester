#include <iostream>

int x = 30;

int main()
{
    int x = 50;
    {
        int y = x;
        int x = 35;
        std::cout << y << "\t" << x << "\t" << ::x << std::endl;
    }
    std::cout << x << "\t" << ::x << std::endl;
    return 0;
}