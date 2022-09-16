#include <iostream>

int main()
{
    // float x = 10. / 4;
    // std::cout << x << std::endl;

    int x;
    int y;
    x = 10;
    // x = y = 100;   // x = 100, y = 100
    // x = (y = 100); // x = 100, y = 100
    (y = x) = 100; // x = 10, y = 100
    std::cout << x << "\t" << y << std::endl;
    return 0;
}