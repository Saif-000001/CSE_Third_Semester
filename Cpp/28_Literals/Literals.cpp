#include <iostream>

int main()
{
    // auto x = 5.5L;
    // std::cout << x << std::endl;

    // Hex and octal
    // int x = 0x30; // 48
    // int x = 030; // 24
    int x = 30;
    std::cout << std::hex << x << std::endl; // 1e
    std::cout << std::oct << x << std::endl; // 36
}