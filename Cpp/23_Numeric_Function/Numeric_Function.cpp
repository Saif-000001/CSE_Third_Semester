#include <iostream>
#include <cmath>

int main()
{
    std::cout << sqrt(25) << std::endl;  // 5
    std::cout << sqrt(-25) << std::endl; // nan

    std::cout << pow(-10, 2) << std::endl; // 100

    std::cout << pow(9, 9999) << std::endl;  // inf
    std::cout << pow(-9, 9999) << std::endl; // -inf

    std::cout << NAN << std::endl;      // nan
    std::cout << INFINITY << std::endl; // inf

    std::cout << 10 % 3 << std::endl;           // 1
    std::cout << remainder(10, 3) << std::endl; // 1

    // std::cout << 10 % 3.25 << std::endl; // error
    std::cout << remainder(10, 3.25) << std::endl; // 0.25
    std::cout << fmod(10, 3.25) << std::endl;      // 0.25

    std::cout << fmax(10, 3.25) << std::endl; // 10
    std::cout << fmin(10, 3.25) << std::endl; // 3.25

    std::cout << ceil(fmin(10, 3.25)) << std::endl; // 4
    std::cout << ceil(fmax(10, 3.25)) << std::endl; // 10

    std::cout << floor(fmin(10, 3.25)) << std::endl; // 4
    std::cout << floor(fmax(10, 3.25)) << std::endl; // 10

    std::cout << trunc(-12.5) << std::endl; // -12
    std::cout << floor(-12.5) << std::endl; // - 13
    std::cout << ceil(-12.5) << std::endl;  // - 12

    std::cout << round(1.49) << std::endl; // 1
    std::cout << round(1.50) << std::endl; // 2
}