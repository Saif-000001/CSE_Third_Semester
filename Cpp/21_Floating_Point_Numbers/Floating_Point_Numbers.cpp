#include <iostream>
#include <float.h>

int main()
{
    // float a = 7.7 * 10000;
    // float a = 7.7E4;
    // double b = 7.7E4;
    float a = 10.0 / 3;
    a = a * 1000000000000000;

    double b = 10.0 / 3;
    a = a * 1000000000000000;
    // double b;
    long double c;

    std::cout << std::fixed << a << std::endl;
    std::cout << FLT_DIG << std::endl;

    std::cout << std::fixed << b << std::endl;
    std::cout << DBL_DIG << std::endl;
    std::cout << LDBL_DIG << std::endl;
    // std::cout << b << std::endl;
}