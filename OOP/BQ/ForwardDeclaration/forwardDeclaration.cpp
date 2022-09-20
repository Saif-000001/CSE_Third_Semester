#include <iostream>

// Forward declaration
class A;
class B;

class A
{
    int x;

public:
    void getData(int m)
    {
        x = m;
    }
    friend int sum(A, B);
};

class B
{
    int y;

public:
    void getData(int n)
    {
        y = n;
    }
    friend int sum(A, B);
};

int sum(A m, B n)
{
    int result;
    result = m.x + n.y;
    return result;
}

int main()
{
    A a;
    B b;
    a.getData(40);
    b.getData(30);
    std::cout << "The sum = " << sum(a, b) << std::endl;
    return 0;
}