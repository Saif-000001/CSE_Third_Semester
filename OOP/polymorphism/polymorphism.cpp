// Polymorphism function overLoading compile time / static or early binding;
#include <iostream>

class A
{
public:
    int a, b, c;
    void number(int a);
    void number(int a, int b);
    void number(int a, int b, int c);
};

void A::number(int a)
{
    int mult = a * a;
    std::cout << mult << std::endl;
}

void A::number(int a, int b)
{
    int sum = a + b;
    std::cout << sum << std::endl;
}

void A::number(int a, int b, int c)
{
    int sub = a + b - c;
    std::cout << sub << std::endl;
}

int main()
{
    int a = 7, b = 5, c = 3;
    A n;
    n.number(a);
    n.number(a, b);
    n.number(a, b, c);

    return 0;
}