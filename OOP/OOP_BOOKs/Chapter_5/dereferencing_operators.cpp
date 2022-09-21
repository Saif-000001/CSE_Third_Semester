#include <iostream>

class M
{
    int x;
    int y;

public:
    void set_xy(int a, int b)
    {
        x = a;
        y = b;
    }
    friend int sum(M m);
};

int sum(M m)
{
    int M::*px = &M::x;
    int M::*py = &M::y;
    M *pm = &m;
    int s = m.*px + pm->*py;
    return s;
}

int main()
{
    M n;
    void (M::*pf)(int, int) = &M ::set_xy;
    (n.*pf)(10, 20);

    std::cout << "SUM = " << sum(n) << std::endl;
    
    M *op = &n;
    (op->*pf)(30, 40);
    std::cout << "SUM = " << sum(n) << std::endl;
    return 0;
}