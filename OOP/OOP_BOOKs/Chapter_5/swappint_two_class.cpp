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
    void display()
    {
        std::cout << data << std::endl;
    }

    friend void exchange(A &x, B &y);
};

class B
{
    int data;

public:
    void getData(int value)
    {
        data = value;
    }
    void display()
    {
        std::cout << data << std::endl;
    }
    friend void exchange(A &x, B &y);
};

void exchange(A &x, B &y)
{
    int temp = x.data;
    x.data = y.data;
    y.data = temp;
}

int main()
{
    A a;
    B b;
    a.getData(5);
    b.getData(7);

    a.display();
    b.display();
    exchange(a, b);
    a.display();
    b.display();
    exchange(a, b);
    a.display();
    b.display();
}
