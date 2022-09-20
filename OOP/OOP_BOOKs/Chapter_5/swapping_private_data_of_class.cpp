#include <iostream>

class A
{
    int a;
    int b;

public:
    void getData(int x, int y)
    {
        a = x;
        b = y;
    }
    void putData()
    {
        std::cout << "a = " << a << "\t"
                  << " b = " << b << std::endl;
    }

    friend void exchange(A, A);
};

void exchange(A a, A b)
{
    int temp = a.a;
    a.a = b.b;
    b.b = temp;
    std::cout << "Swapping = "
              << "a = " << a.a << "\t b = " << b.b << "\n";
}

int main()
{
    A a, b;
    a.getData(7, 8);
    a.putData();
    exchange(a, a);

    b.getData(5, 6);
    b.putData();
    exchange(b, b);
}
