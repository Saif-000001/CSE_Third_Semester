#include <iostream>
using namespace std;

class B;
class A
{
    int a;

public:
    void setData()
    {
        cin >> a;
    }

    void getData()
    {
        cout << a << " ";
    }
    friend void swap(A &, B &);
};

class B
{
    int b;

public:
    void setData()
    {
        cin >> b;
    }
    void getData()
    {
        cout << b;
    }
    friend void swap(A &, B &);
};

void swap(A &x, B &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
    // cout << x.a << " " << y.b << endl;
}

int main()
{
    A x;
    B y;
    x.setData();
    y.setData();

    swap(x, y);

    x.getData();
    y.getData();
}