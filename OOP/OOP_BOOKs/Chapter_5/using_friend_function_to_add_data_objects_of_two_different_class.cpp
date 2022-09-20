#include <iostream>

class A;
class B;

class A
{
    int data;

public:
    void getData(int value)
    {
        data = value;
    }
    friend void add(A, B);
};

class B
{
    int data;

public:
    void getData(int value)
    {
        data = value;
    }
    friend void add(A, B);
};

void add(A x, B y)
{
    int sum = x.data + y.data;
    std::cout << "The sum = " << sum << std::endl;
}

int main()
{
    A a;
    B b;
    a.getData(5);
    b.getData(7);

    add(a, b);
    return 0;
}