#include <iostream>

using namespace std;

class B;
class A
{
    int a;

public:
    void getData()
    {
        cin >> a;
    }
    friend void max(A &, B &);
    friend void min(A &, B &);
};

class B
{
    int b;

public:
    void getData()
    {
        cin >> b;
    }
    friend void max(A &, B &);
    friend void min(A &, B &);
};

void max(A &x, B &y)
{
    if (x.a >= y.b)
    {
        cout << "Largest value : " << x.a << endl;
    }
    else
    {
        cout << "Largest value : " << y.b << endl;
    }
}

void min(A &x, B &y)
{
    if (x.a < y.b)
    {
        cout << "Smallest value : " << x.a << endl;
    }
    else
    {
        cout << "Smallest value : " << y.b << endl;
    }
}

int main()
{
    A c1;
    B c2;
    c1.getData();
    c2.getData();

    max(c1, c2);
    min(c1, c2);
}