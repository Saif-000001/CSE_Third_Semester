#include <iostream>
#include <climits>

int main()
{
    short a;
    int b;
    long c;
    long long d;

    // short <= int <= long <= long long

    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    // sizeof
    // std::cout << sizeof(short) << std::endl;
    // std::cout << sizeof(int) << std::endl;
    // std::cout << sizeof(long) << std::endl;
    // std::cout << sizeof(long long) << std::endl;

    // Limit
    std::cout << SHRT_MAX << " to "
              << SHRT_MIN << std::endl;

    std::cout << INT_MAX << " to "
              << INT_MIN << std::endl;

    std::cout << LONG_MAX << " to "
              << LONG_MIN << std::endl;

    std::cout << LONG_LONG_MAX << " to "
              << LONG_LONG_MIN << std::endl;

    std::cout << ULONG_LONG_MAX << " to "
              << LONG_LONG_MIN << std::endl;
}