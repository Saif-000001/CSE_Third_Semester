#include <iostream>

// void swap(int a, int b); // pass by value
void swap(int &a, int &b); // pass by reference
int main()
{
    int a = 10, b = 20;
    swap(a, b);
    // std::cout << "a = " << a << "  b = " << b << std::endl; pass by value a = 10, b = 20
    std::cout << "a = " << a << "  b = " << b << std::endl; // pass by reference a = 10, b = 20

    return 0;
}

// void swap(int a, int b) // pass by value
void swap(int &a, int &b) // pass by reference
{
    int temp = a;
    a = b;
    b = temp;
    std::cout << "a = " << a << "  b = " << b << std::endl;
}