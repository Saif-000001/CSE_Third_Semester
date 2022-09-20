#include <iostream>

inline float mult(float x, float y)
{
    return x * y;
}

inline double div(double p, double q)
{
    return p / q;
}

int main()
{
    float x = 30.00, y = 15.00;

    std::cout << mult(x, y) << std::endl;
    std::cout << div(x, y) << std::endl;
    return 0;
}