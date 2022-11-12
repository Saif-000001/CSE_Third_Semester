#include <iostream>

using namespace std;

class Swap
{
    int temp, a, b;

public:
    Swap(int x, int y)
    {
        this->a = x;
        this->b = y;
    }

    friend void swap(Swap &);
};

void swap(Swap &s)
{
    cout << "Before swapping " << s.a << " " << s.b << endl;

    s.temp = s.a;
    s.a = s.b;
    s.b = s.temp;

    cout << "After swapping " << s.a << " " << s.b << endl;
}

int main()
{
    Swap s(45, 56);
    swap(s);
    return 0;
}