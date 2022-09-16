#include <iostream>
#define X 10
int main()
{
    const int x = 5;

    enum
    {
        y = 10
    };

    std::cout << x << std::endl;
    std::cout << y << std::endl;
}