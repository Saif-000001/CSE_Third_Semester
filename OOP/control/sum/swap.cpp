#include <iostream>

void swap(int &a, int &b)
{
    int sw = a;
    a = b;
    b = sw;
    std::cout << a << " " << b << "\n";
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);
}