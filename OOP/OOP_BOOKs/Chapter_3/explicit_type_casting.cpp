#include <iostream>

int main()
{
    int x = 75;
    float y = 25.5;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    std::cout << "Floating = " << float(x) << std::endl;
    std::cout << "Integer = " << int(y) << std::endl;

    return 0;
}